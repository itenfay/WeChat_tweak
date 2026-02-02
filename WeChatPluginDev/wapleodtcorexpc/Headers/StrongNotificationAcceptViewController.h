//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, NSString, UIButton, UIImageView, UILabel, UIView, WeToast;

@interface StrongNotificationAcceptViewController
{
    UIImageView *m_logoView;
    MMUILabel *m_titleView;
    UILabel *m_contentView;
    UIButton *m_iAcceptBtn;
    UIButton *m_iCancelBtn;
    WeToast *toastVC;
    MMUIButton *m_iCloseBtn;
    UIView *m_backgroundView;
    NSString *m_strongNotificationContent;
    NSString *m_strongNotificationQRCode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_strongNotificationQRCode; // @synthesize m_strongNotificationQRCode;
@property(retain, nonatomic) NSString *m_strongNotificationContent; // @synthesize m_strongNotificationContent;
- (void)onAcceptWeAppStrongNotification:(id)arg1 resultFlag:(_Bool)arg2 errorMsg:(id)arg3;
- (void)onCancelBtnClicked:(id)arg1;
- (void)doIAccept;
- (void)layoutIAcceptBtn;
- (void)layoutICancelBtn;
- (void)layoutHeadView;
- (void)layoutCloseButton;
- (void)layoutBackgroundView;
- (void)layoutView;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

