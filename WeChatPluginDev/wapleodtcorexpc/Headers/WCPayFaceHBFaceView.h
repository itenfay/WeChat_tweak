//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class AVAudioPlayer, CAEmitterLayer, MMHeadImageView, MMTimer, MMUILabel, NSMutableArray, NSString, UIImageView, WCPayFaceRedEnvelopesReceiverInfo;
@protocol WCPayFaceHBFaceViewDelegate;

@interface WCPayFaceHBFaceView : UIView
{
    MMHeadImageView *_headView;
    MMUILabel *_nameView;
    MMUILabel *_moneyView;
    UIView *_hbView;
    UIImageView *_hbBigView;
    UIImageView *_hbSmallView;
    UIView *_streamerView;
    CAEmitterLayer *_streamerLayer;
    UIView *_streamerBackView;
    CAEmitterLayer *_streamerBackLayer;
    UIView *_contentsView;
    UIView *_maskView;
    WCPayFaceRedEnvelopesReceiverInfo *m_info;
    _Bool m_bAnimating;
    unsigned long long m_t;
    NSMutableArray *m_blockArr;
    unsigned int lCount;
    unsigned int vCount;
    struct CGRect m_contentFrame;
    UIView *m_view;
    id <WCPayFaceHBFaceViewDelegate> m_delegate;
    AVAudioPlayer *m_sendOKPlayer;
    AVAudioPlayer *m_luckyPlayer;
    AVAudioPlayer *m_whistlePlayer;
    MMTimer *m_stimer;
    MMTimer *m_timer;
    struct CGSize m_bigSize;
    struct CGSize m_normalSize;
    _Bool _bAnimating;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bAnimating; // @synthesize bAnimating=_bAnimating;
- (void)updateFaceHB:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)startBandAnimate;
- (void)startAnimate:(struct CGRect)arg1;
- (void)startFlyAnimation;
- (void)startStreamersAnimation;
- (void)stopStreamersAnimation;
- (void)playWhistle;
- (id)getStreamerLayer:(_Bool)arg1;
- (id)getEmitterCell:(id)arg1 image:(id)arg2 isMore:(_Bool)arg3 isBack:(_Bool)arg4;
- (void)updateUser:(id)arg1;
- (id)getMoneyString;
- (id)getSmallHBView;
- (id)getHeadView;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

