#include "tree_sitter/parser.h"
#include <node.h>
#include "nan.h"

using namespace v8;

extern "C" TSLanguage * tree_sitter_postgresql();

namespace {

NAN_METHOD(New) {}

void Init(Local<Object> exports, Local<Object> module) {
  Local<FunctionTemplate> tpl = Nan::New<FunctionTemplate>(New);
  tpl->SetClassName(Nan::New("Language").ToLocalChecked());
  tpl->InstanceTemplate()->SetInternalFieldCount(1);

  Local<Function> constructor = Nan::GetFunction(tpl).ToLocalChecked();
  Local<Object> instance = constructor->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
  Nan::SetInternalFieldPointer(instance, 0, tree_sitter_postgresql());

  Nan::Set(instance, Nan::New("name").ToLocalChecked(), Nan::New("postgresql").ToLocalChecked());
  Nan::Set(module, Nan::New("exports").ToLocalChecked(), instance);
}

NODE_MODULE(tree_sitter_postgresql_binding, Init)

}  // namespace
