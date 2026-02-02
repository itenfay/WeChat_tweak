//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMVoipCSMainWindow, MMVoipToastWindow, NSString, VideoVoipCSCallerView;

@interface VoipCSUIManager
{
    MMVoipCSMainWindow *m_mainWindow;
    MMVoipToastWindow *m_voipCSToastWindow;
    VideoVoipCSCallerView *m_videoVoipCSViewController;
}

+ (_Bool)canForceStartVoiceWithContact:(id)arg1;
+ (_Bool)canStartVideoWithContact:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) VideoVoipCSCallerView *m_videoVoipCSViewController; // @synthesize m_videoVoipCSViewController;
@property(retain, nonatomic) MMVoipToastWindow *m_voipCSToastWindow; // @synthesize m_voipCSToastWindow;
@property(retain, nonatomic) MMVoipCSMainWindow *m_mainWindow; // @synthesize m_mainWindow;
- (void)onPreQuit;
- (void)onMMDynamicConfigUpdated;
- (void)OnTellMeViewIsExist:(_Bool *)arg1;
- (void)Cancel;
- (struct CGRect)onMMVoipCSMainWindowRequestMinimizeFrame;
- (void)onMMVoipCSMainWindowExtendFromCollapseAnimationDidEnd;
- (void)onMMVoipCSMainWindowExtendFromCollapseAnimationWillStart;
- (void)onMMVoipCSMainWindowCollapseAnimationWillStart;
- (void)onMMVoipCSMainWindowCollapseAnimationDidEnd;
- (void)onMMVoipCSMainWindowQuitAnimationDidEnd;
- (void)onMMVoipCSMainWindowQuitAnimationWillStart;
- (void)onMMVoipCSMainWindowExtendAnimationDidEnd;
- (_Bool)onVideoVoipCSViewRequestMinimizeStatus;
- (void)onVideoVoipCSViewChangeToMinimizeMode;
- (void)onVideoVoipCSViewClose;
- (void)switchToSpeakPhoneMode:(_Bool)arg1;
- (void)clearCurrentString;
- (_Bool)isUsingEarDevice;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2;
- (_Bool)isMinimizeMode;
- (void)showCannotStartVoipTwice;
- (id)getConflictWording;
- (void)showConflictWording;
- (_Bool)isVoipSpeakerMode;
- (_Bool)isVideoVoipWorking;
- (_Bool)isVoipWorking;
- (_Bool)isViewEnding;
- (_Bool)showVideoEntranceInMainFrame;
- (_Bool)isTheSameContactWithCurrentVoip:(id)arg1;
- (void)openVideoVoipCSViewWithBizUserName:(id)arg1 andMsgWrap:(id)arg2 isEarMode:(_Bool)arg3 appid:(id)arg4 headUrl:(id)arg5 isAllowBackCamera:(_Bool)arg6 isShowCSVideo:(_Bool)arg7 context:(id)arg8;
- (_Bool)canStartVoip;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

