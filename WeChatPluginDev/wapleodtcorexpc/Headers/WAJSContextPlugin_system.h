//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAWebActionSheet;

@interface WAJSContextPlugin_system
{
    _Bool _oldIdleTimerDisabled;
    _Bool _idleTimerDisabled;
    _Bool _idleTimeChnaged;
    long long _buttonTranslateState;
    long long _pageTranslateState;
    long long _capsuleTranslateState;
    WAWebActionSheet *_actionSheet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAWebActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(nonatomic) long long capsuleTranslateState; // @synthesize capsuleTranslateState=_capsuleTranslateState;
@property(nonatomic) long long pageTranslateState; // @synthesize pageTranslateState=_pageTranslateState;
@property(nonatomic) long long buttonTranslateState; // @synthesize buttonTranslateState=_buttonTranslateState;
- (void)onSelected:(long long)arg1;
- (void)onCancel;
- (void)onTranslateLanguageChange;
- (void)sendTranslateEntryClickEvent:(_Bool)arg1;
- (void)onMenuChangeTranslateLanguage;
- (void)onMenuTranslateRevert;
- (void)onMenuTranslate;
- (void)onCapsuleExit;
- (void)onCapsuleMore;
- (void)onCapsuleTranslateDoing;
- (void)onCapsuleTranslate;
- (id)getCapsuleView;
- (void)onPageStateDecideTimeout;
- (void)onSplashAdDidFinished;
- (_Bool)getIdleTimeDisable;
- (void)restoreIdleTime;
- (void)setIdleTimeDisable:(_Bool)arg1;
- (void)didTakeScreenshot;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
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

