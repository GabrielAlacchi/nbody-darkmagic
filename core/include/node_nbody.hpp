
#ifndef NODE_NBODY___H_INCLUDE
#define NODE_NBODY___H_INCLUDE

#include <node.h>
#include <node_object_wrap.h>
#include "simulation.hpp"

namespace NodeBindings {

    class Nbody : public node::ObjectWrap {
         public:
            static void Init(v8::Local<v8::Object> exports);

         private:
            explicit Nbody(long double timestep);
            ~Nbody();

            static void New(const v8::FunctionCallbackInfo<v8::Value>& args);
            static void AddBody(const v8::FunctionCallbackInfo<v8::Value>& args);
            static void Start(const v8::FunctionCallbackInfo<v8::Value>& args);
            static v8::Persistent<v8::Function> constructor;
            
            Simulation _sim;

    };

}  // namespace demo

#endif