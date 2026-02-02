//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WasmAdaptor;

@interface MagicBrushTwasmGlueAdaptor : NSObject
{
    WasmAdaptor *_wasmAdaptor;
    void *_glueAdaptorImpl;
}

- (void).cxx_destruct;
@property(nonatomic) void *glueAdaptorImpl; // @synthesize glueAdaptorImpl=_glueAdaptorImpl;
@property(nonatomic) __weak WasmAdaptor *wasmAdaptor; // @synthesize wasmAdaptor=_wasmAdaptor;
- (void)bindTo:(id)arg1;
- (id)initWithWasmAdaptor:(id)arg1;

@end

