//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MBCommonAdapter, MagicBrushBiz, NSString, UIView, _TtC6WeChat24MagicBrushVConsoleHelper;

@interface MagicBrushDemoLogic : NSObject
{
    MagicBrushBiz *_magicbrush;
    UIView *_containerView;
    MBCommonAdapter *_mbCommonAdapter;
    _TtC6WeChat24MagicBrushVConsoleHelper *_mbVConsoleHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC6WeChat24MagicBrushVConsoleHelper *mbVConsoleHelper; // @synthesize mbVConsoleHelper=_mbVConsoleHelper;
@property(retain, nonatomic) MBCommonAdapter *mbCommonAdapter; // @synthesize mbCommonAdapter=_mbCommonAdapter;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MagicBrushBiz *magicbrush; // @synthesize magicbrush=_magicbrush;
- (void)onMainScriptInjected:(id)arg1;
- (void)onCreated;
- (id)getAppId;
- (id)getParentViewController;
- (unsigned int)getDebugModeType;
- (id)provideFileSystem;
- (void)provideMainScript:(CDUnknownBlockType)arg1;
- (id)getFileDataByPath:(id)arg1;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(id)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)dealloc;
- (void)stop;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

