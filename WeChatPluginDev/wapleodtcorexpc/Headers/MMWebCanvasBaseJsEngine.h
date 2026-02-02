//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSVirtualMachine, MMCanvasMainJSContext, MMWebJsBasePkgInfo, NSMutableDictionary, NSString;

@interface MMWebCanvasBaseJsEngine
{
    JSVirtualMachine *_jsVM;
    MMCanvasMainJSContext *_mainContext;
    MMWebJsBasePkgInfo *_basePkgInfo;
    MMWebJsBasePkgInfo *_bizPkgInfo;
    NSMutableDictionary *_dicJSContexts;
    NSString *_systemInfoJsonStr;
}

- (void).cxx_destruct;
@property(copy) NSString *systemInfoJsonStr; // @synthesize systemInfoJsonStr=_systemInfoJsonStr;
@property(retain, nonatomic) NSMutableDictionary *dicJSContexts; // @synthesize dicJSContexts=_dicJSContexts;
@property(retain, nonatomic) MMWebJsBasePkgInfo *bizPkgInfo; // @synthesize bizPkgInfo=_bizPkgInfo;
@property(retain, nonatomic) MMWebJsBasePkgInfo *basePkgInfo; // @synthesize basePkgInfo=_basePkgInfo;
@property(retain, nonatomic) MMCanvasMainJSContext *mainContext; // @synthesize mainContext=_mainContext;
@property(retain, nonatomic) JSVirtualMachine *jsVM; // @synthesize jsVM=_jsVM;
- (void)dispatchCallback:(id)arg1 params:(id)arg2;
- (void)dispatchEvent:(id)arg1 eventInfo:(id)arg2;
- (void)setupContext:(id)arg1 metaInfo:(id)arg2;
- (id)initWithBasePkgInfo:(id)arg1 bizPkgInfo:(id)arg2;

@end

