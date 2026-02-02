//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol WXFileLoaderDelegate, WXWASMLogDelegate;

@interface WasmAdaptor : NSObject
{
    struct OpaqueJSContext *_jscontext;
    struct WasmAdaptorBridge *_adaptor;
    struct TWasmBindingModule *_wasm_module;
    id <WXFileLoaderDelegate> _fileDelegate;
    id <WXWASMLogDelegate> _logDelegate;
}

+ (id)getBrotiData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WXWASMLogDelegate> logDelegate; // @synthesize logDelegate=_logDelegate;
@property(nonatomic) __weak id <WXFileLoaderDelegate> fileDelegate; // @synthesize fileDelegate=_fileDelegate;
- (void)dealloc;
- (void)releaseContext;
- (void)wasmNativeLog:(int)arg1 log:(const char *)arg2 target:(long long)arg3;
- (id)getFileData:(id)arg1;
- (void)addTWasmLinker:(struct IWasmLinker *)arg1;
- (void)setWebGLWasmAdaptor:(struct IWasmGlueAdaptor *)arg1;
- (id)initWASMWithJSContext:(struct OpaqueJSContext *)arg1 parent:(struct OpaqueJSValue *)arg2;

@end

