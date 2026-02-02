//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveLayerAnchorVerificationShowInfo, MMFinderLiveLogic, MMFinderLiveTask, NSString;
@protocol MMLivePauseViewModelDelegate;

@interface MMLivePauseViewModel : NSObject
{
    _Bool _showsAccumulatedTime;
    _Bool _showContentLabel;
    _Bool _showsResumeButton;
    _Bool _showsSubDesc;
    _Bool _removeBlurView;
    unsigned int _verifyTotalTime;
    unsigned int _verifyButtonColdingTime;
    unsigned int _showSubDescTime;
    unsigned int _type;
    NSString *_message;
    NSString *_contentStr;
    NSString *_buttonTitle;
    NSString *_buttonCountdownTitle;
    NSString *_defaultSubDescStr;
    NSString *_remoteSubDescStr;
    long long _countdown;
    NSString *_verifyCountdownWording;
    FinderLiveLayerAnchorVerificationShowInfo *_verificationShowInfo;
    id <MMLivePauseViewModelDelegate> _delegate;
    MMFinderLiveLogic *_finderLiveLogic;
    long long _requestedVerifyPausedLiveScene;
}

- (void).cxx_destruct;
@property(nonatomic) long long requestedVerifyPausedLiveScene; // @synthesize requestedVerifyPausedLiveScene=_requestedVerifyPausedLiveScene;
@property(nonatomic) __weak MMFinderLiveLogic *finderLiveLogic; // @synthesize finderLiveLogic=_finderLiveLogic;
@property(nonatomic) __weak id <MMLivePauseViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) _Bool removeBlurView; // @synthesize removeBlurView=_removeBlurView;
@property(nonatomic) _Bool showsSubDesc; // @synthesize showsSubDesc=_showsSubDesc;
@property(nonatomic) _Bool showsResumeButton; // @synthesize showsResumeButton=_showsResumeButton;
@property(nonatomic) _Bool showContentLabel; // @synthesize showContentLabel=_showContentLabel;
@property(nonatomic) _Bool showsAccumulatedTime; // @synthesize showsAccumulatedTime=_showsAccumulatedTime;
@property(retain, nonatomic) FinderLiveLayerAnchorVerificationShowInfo *verificationShowInfo; // @synthesize verificationShowInfo=_verificationShowInfo;
@property(copy, nonatomic) NSString *verifyCountdownWording; // @synthesize verifyCountdownWording=_verifyCountdownWording;
@property(nonatomic) unsigned int showSubDescTime; // @synthesize showSubDescTime=_showSubDescTime;
@property(nonatomic) unsigned int verifyButtonColdingTime; // @synthesize verifyButtonColdingTime=_verifyButtonColdingTime;
@property(nonatomic) unsigned int verifyTotalTime; // @synthesize verifyTotalTime=_verifyTotalTime;
@property(nonatomic) long long countdown; // @synthesize countdown=_countdown;
@property(copy, nonatomic) NSString *remoteSubDescStr; // @synthesize remoteSubDescStr=_remoteSubDescStr;
@property(copy, nonatomic) NSString *defaultSubDescStr; // @synthesize defaultSubDescStr=_defaultSubDescStr;
@property(copy, nonatomic) NSString *buttonCountdownTitle; // @synthesize buttonCountdownTitle=_buttonCountdownTitle;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(copy, nonatomic) NSString *contentStr; // @synthesize contentStr=_contentStr;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (id)description;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (id)anchorStatusItem;
- (void)onAnchorVerifyForceWaitStyleTimeout;
- (void)onAnchorVerifyWithTimeoutAndLimitPausedTimeout;
- (void)onAnchorVerifyWithCaptchaPausedTimeout;
- (void)onAnchorVerifyTimeoutPausedTimeout;
- (void)onResumeForAnchorVerifyForceWaitStylePaused;
- (void)onResumeForAnchorVerifyLimitedPaused;
- (void)onResumeForAnchorVerifyWithTimeoutAndLimitPaused;
- (void)onResumeForAnchorVerifyWithCaptchaPaused;
- (void)onResumeForAnchorVerifyWithTimeoutPaused;
- (void)stopPauseTimer;
- (void)updateResumeBtnEnable:(_Bool)arg1;
- (void)updateWithPauseType:(unsigned long long)arg1;
- (id)initWithLogic:(id)arg1 verificationShowInfo:(id)arg2;

@end

