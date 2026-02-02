//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveCountdownTipsView, NSString;
@protocol WCFinderGameLiveCountdownViewControllerDelegate;

@interface WCFinderGameLiveCountdownViewController
{
    CDUnknownBlockType _cancelCallback;
    CDUnknownBlockType _timeoutCallback;
    id <WCFinderGameLiveCountdownViewControllerDelegate> _delegate;
    MMLiveCountdownTipsView *_countdownTipsView;
    long long _countdownTimer;
}

- (void).cxx_destruct;
@property(nonatomic) long long countdownTimer; // @synthesize countdownTimer=_countdownTimer;
@property(retain, nonatomic) MMLiveCountdownTipsView *countdownTipsView; // @synthesize countdownTipsView=_countdownTipsView;
@property(nonatomic) __weak id <WCFinderGameLiveCountdownViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType timeoutCallback; // @synthesize timeoutCallback=_timeoutCallback;
@property(copy, nonatomic) CDUnknownBlockType cancelCallback; // @synthesize cancelCallback=_cancelCallback;
- (void)onMMLiveCountdownTimeOut;
- (void)onMMLiveCountdownCancelled;
- (void)onMMLiveCountdownStart;
- (void)hideCountdownView;
- (void)showCountdownView;
- (void)layoutCountdownTipsView;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCountdownTimer:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

