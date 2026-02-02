//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController;

@interface StrongNotificationScanLogic
{
    MMUIViewController *m_sourceViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController *m_sourceViewController; // @synthesize m_sourceViewController;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)goToStrongNotificationAcceptViewControllerWithStrongNotificationContent:(id)arg1 qrCode:(id)arg2;
- (void)OnScanWeAppStrongNotificationResp:(id)arg1;
- (_Bool)scanWeAppStrongNotificationWithQrcode:(id)arg1;

@end

