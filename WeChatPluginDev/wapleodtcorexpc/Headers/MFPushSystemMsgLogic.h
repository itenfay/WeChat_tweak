//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MFBannerBtn, MMTimer, NetworkCheckViewController, UIButton, UIViewController;
@protocol MFBanner, MFPushSystemMsgDelegate;

@interface MFPushSystemMsgLogic
{
    MFBannerBtn *m_banner;
    NetworkCheckViewController *m_networkCheckViewController;
    unsigned int m_uiTipStatus;
    MMTimer *m_progressTimer;
    id <MFPushSystemMsgDelegate> _delegate;
    UIViewController *_viewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <MFPushSystemMsgDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIButton<MFBanner> *bannerBtn; // @synthesize bannerBtn=m_banner;
- (void)showDisconnetStatusNetworkTip;
- (id)disconnetStatusBannerDesc;
- (void)updateSystemNetworkNotification:(unsigned int)arg1;
- (void)onNetworkCheckFinished:(_Bool)arg1 baseNetOK:(_Bool)arg2 longLinkOK:(_Bool)arg3 kvString:(id)arg4;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)dismissSystemMessage;
- (void)updateProgress;
- (void)onBannerClick:(id)arg1;
- (void)makeNewPushSymtemView:(id)arg1;
- (id)init;

@end

