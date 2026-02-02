//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MBBuildConfig, MagicBrushBiz, MagicBrushService, NSThread;
@protocol MagicBrushDelegate;

@interface MBRuntime : NSObject
{
    _Bool _isRuntimeInvalid;
    _Bool _enableVConsole;
    id _privateData;
    id <MagicBrushDelegate> _delegate;
    MagicBrushBiz *_biz;
    NSThread *_jsThread;
    MBBuildConfig *_config;
    MagicBrushService *_service;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MagicBrushService *service; // @synthesize service=_service;
@property(retain, nonatomic) MBBuildConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak NSThread *jsThread; // @synthesize jsThread=_jsThread;
@property(nonatomic) _Bool enableVConsole; // @synthesize enableVConsole=_enableVConsole;
@property(nonatomic) __weak MagicBrushBiz *biz; // @synthesize biz=_biz;
@property(nonatomic) __weak id <MagicBrushDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id privateData; // @synthesize privateData=_privateData;
@property(readonly, nonatomic) _Bool isRuntimeInvalid; // @synthesize isRuntimeInvalid=_isRuntimeInvalid;
- (void)createPixelBufferInCanvas:(int)arg1;
- (id)createViewInCanvas:(int)arg1;
- (void)setExternalViewStub:(id)arg1 forCanvasId:(unsigned int)arg2;
- (void)endWithResult:(unsigned long long)arg1 result:(id)arg2;
- (void)runCodeInJsThreadSync:(CDUnknownBlockType)arg1;
- (void)runCodeInJsThread:(CDUnknownBlockType)arg1;
- (void)setMute:(_Bool)arg1;
- (struct CGRect)getFrame;
- (id)getFileData:(id)arg1;
- (void)switchVConsole:(_Bool)arg1;
- (void)vConsoleLog:(id)arg1;
- (void)nativeLog:(unsigned long long)arg1 msg:(id)arg2;
- (void)resume;
- (void)pause;
- (void)destroyRuntime;
- (void)onEventFinish:(id)arg1 param:(id)arg2;
- (void)evaluateScript:(id)arg1 sourceURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)evaluateScript:(id)arg1 sourceURL:(id)arg2;
- (id)createObject:(id)arg1;
- (id)createObject;
- (void)injectLibs;
- (id)createView:(struct CGRect)arg1 config:(id)arg2;

@end

