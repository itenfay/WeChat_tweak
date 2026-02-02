//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CMMotionManager, MMTimer, MMTipsViewController, MMUIActivityIndicatorView, NSMutableArray, NSString, UIButton, UIImageView, WCPayFaceHBFaceView, WCPayFaceHBQRCodeInfo, WCPayFaceHBQRCodeView, WCPayFaceReceiverView, WCPayFaceRedEnvelopesReceiverInfo, WCPayGoldenStatusView;
@protocol MMUIViewControllerDelegate, WCPayFaceHBPayViewDelegate;

@interface WCPayFaceHBPayView : UIView
{
    id <WCPayFaceHBPayViewDelegate> m_delegate;
    id <MMUIViewControllerDelegate> m_vcDelegate;
    WCPayFaceHBQRCodeInfo *m_qrInfo;
    double _oldBrightness;
    UIView *_whiteView;
    UIView *_hbsView;
    UIImageView *_hbFirstView;
    UIButton *_payBtn;
    WCPayGoldenStatusView *_scanFanTip;
    WCPayGoldenStatusView *_scanTip;
    WCPayGoldenStatusView *_countTip;
    WCPayFaceHBFaceView *_hbOnePersonView;
    WCPayFaceHBQRCodeView *_imageQRCodeView;
    MMUIActivityIndicatorView *_activityIndicatorView;
    WCPayFaceReceiverView *_receiverView;
    UIView *_bottomSafeAreaView;
    int m_lastTouchViewIndex;
    int m_lastPanViewIndex;
    int m_lastSelectViewIndex;
    int m_lastTouchBeginIndex;
    NSMutableArray *m_boPlays;
    int m_boPlayIndex;
    NSMutableArray *m_selectPlays;
    int m_selectPlayIndex;
    NSMutableArray *m_musicPlays;
    _Bool m_bShowTipAlert;
    CMMotionManager *m_cmManager;
    _Bool m_bStartManager;
    _Bool m_bHasMotion;
    MMTimer *m_motionTimer;
    WCPayFaceRedEnvelopesReceiverInfo *_lastReceiverInfo;
    MMTipsViewController *_tipsViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTipsViewController *tipsViewController; // @synthesize tipsViewController=_tipsViewController;
- (void)setDelegate:(id)arg1;
- (id)getReceiverInfos;
- (void)batchSetReceiverInfos:(id)arg1 balanceNum:(long long)arg2;
- (void)clearReceiverView;
- (void)hasOpenHBFor:(id)arg1;
- (void)setReceiverViewHidden:(_Bool)arg1 Animate:(_Bool)arg2;
- (void)updateQRCode:(id)arg1;
- (void)checkQRCode;
- (void)giveHBAnimate:(id)arg1;
- (void)OnBangAnimateStop;
- (void)showDeleteHBTips:(id)arg1;
- (void)hideLoading;
- (void)showLoading;
- (void)setViewController:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onMore;
- (void)onManage;
- (void)closeView;
- (void)onCancel;
- (void)layoutHBsView;
- (void)OnLoadMoreRedEnvelopesList;
- (void)OnFaceHBViewDetail;
- (void)layoutSubviews;
- (int)changeToTouchPoint:(struct CGPoint)arg1;
- (void)handleChangeTouch:(int)arg1 Select:(int)arg2 Pan:(int)arg3 TouchBegin:(_Bool)arg4;
- (void)handlePanGes:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)makeHBViews;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)handleUserStartScreenCapture;
- (_Bool)hasValidQrCodeInfo;
- (void)userDidChangeScreenCapture:(id)arg1;
- (void)userDidTakeScreenshot:(id)arg1;
- (void)onIKnow;
- (void)fadeAnimate;
- (void)setNoMotion;
- (void)deviceMotion:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

