//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MagicBrushBiz, NSString, WKWebView, WeAvatarPackageLogic, WebGLAudioManager;

@interface WeAvatarScreenView : UIView
{
    unsigned char _isOnRNNoise;
    WebGLAudioManager *_audioManager;
    MagicBrushBiz *_biz;
    WKWebView *_innerRuntimeView;
    WeAvatarPackageLogic *_pkgLogic;
    struct CGRect _glFrame;
}

+ (void)setAvatarViewHidden:(_Bool)arg1 InViews:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect glFrame; // @synthesize glFrame=_glFrame;
@property(nonatomic) unsigned char isOnRNNoise; // @synthesize isOnRNNoise=_isOnRNNoise;
@property(retain, nonatomic) WeAvatarPackageLogic *pkgLogic; // @synthesize pkgLogic=_pkgLogic;
@property(retain, nonatomic) WKWebView *innerRuntimeView; // @synthesize innerRuntimeView=_innerRuntimeView;
@property(retain, nonatomic) MagicBrushBiz *biz; // @synthesize biz=_biz;
@property(retain, nonatomic) WebGLAudioManager *audioManager; // @synthesize audioManager=_audioManager;
- (void)onJSException:(id)arg1 msg:(id)arg2 extra:(id)arg3;
- (void)onDestroy:(int)arg1;
- (void)onPause;
- (void)onResume;
- (void)onMainScriptInjected:(id)arg1;
- (void)onCreated;
- (id)getFileDataByPath:(id)arg1;
- (id)provideFileSystem;
- (void)provideMainScript:(CDUnknownBlockType)arg1;
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(id)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)prepareAndInjectCodeAsync;
- (void)injectScripts;
- (void)injectFinderUserName:(id)arg1;
- (void)injectLibs;
- (void)evaluateScript:(id)arg1 withSourceURL:(id)arg2;
- (void)dispatchEvent:(id)arg1 args:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)destroy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

