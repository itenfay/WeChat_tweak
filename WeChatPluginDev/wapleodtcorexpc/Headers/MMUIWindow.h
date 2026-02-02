//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWindowMgrObject, NSString;
@protocol MMUIWindowPassThroughDelegate;

@interface MMUIWindow
{
    _Bool _canMixWithOther;
    _Bool _shouldHandleStatusBarAppearance;
    int _mmWindowLevel;
    double m_lastWindowLevel;
    MMWindowMgrObject *_rootWindowMgrObj;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMWindowMgrObject *rootWindowMgrObj; // @synthesize rootWindowMgrObj=_rootWindowMgrObj;
@property(nonatomic) _Bool shouldHandleStatusBarAppearance; // @synthesize shouldHandleStatusBarAppearance=_shouldHandleStatusBarAppearance;
@property(nonatomic) _Bool canMixWithOther; // @synthesize canMixWithOther=_canMixWithOther;
@property(nonatomic) int mmWindowLevel; // @synthesize mmWindowLevel=_mmWindowLevel;
@property(nonatomic) double m_lastWindowLevel; // @synthesize m_lastWindowLevel;
- (void)onWindowSceneSizeChanged;
- (void)setNeedsStatusBarAppearanceUpdate;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)animateFadeoutWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setWindowLevel:(double)arg1;
- (void)SetWindowLevel:(int)arg1;
- (void)setHideFrame:(int)arg1 withTopOffset:(double)arg2;
- (void)setShowFrameWithTopOffset:(double)arg1;
- (void)hideWindowTo:(int)arg1 withTopOffset:(double)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)hideWindowTo:(int)arg1 withTopOffset:(double)arg2;
- (void)showWindowFrom:(int)arg1 withTopOffset:(double)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showWindowFrom:(int)arg1 withTopOffset:(double)arg2;
- (void)becomeKeyWindow;
- (void)dealloc;
- (void)commonInit;
- (id)initWithWindowScene:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)onVoipWindowDisappear;
- (void)onVoipWindowDidAppear;
- (_Bool)shouldShowQuickReplyPush:(id)arg1;
@property(nonatomic) _Bool disableQuickReplyPush;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(nonatomic) __weak id <MMUIWindowPassThroughDelegate> passthroughDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

