//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UIImageView, UIView;
@protocol WCRedEnvelopesMadeHBSuccessViewDelegate;

@interface WCRedEnvelopesMadeHBSuccessView
{
    id <WCRedEnvelopesMadeHBSuccessViewDelegate> m_delegate;
    UIImageView *m_backgroundView;
    UIButton *openRedEnvelopesButton;
    _Bool m_bEndAnmation;
    UIView *oRedView;
    UIView *oTopHeaderView;
}

- (void).cxx_destruct;
- (void)onMainWindowFrameChanged;
- (void)removeView;
- (void)endAnimation;
- (void)showAnimation;
- (void)stopReceiveAnimation;
- (void)startReceiveAnimation;
- (void)OnSendHBDone;
- (void)OnCancelButtonDone;
- (void)initUIWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

