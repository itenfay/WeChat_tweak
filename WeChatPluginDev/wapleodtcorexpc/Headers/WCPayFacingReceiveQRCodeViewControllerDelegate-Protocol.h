//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSString, UIImage;

@protocol WCPayFacingReceiveQRCodeViewControllerDelegate <NSObject>

@optional
- (void)doGetMchShortTermQrCodeWithLoading:(_Bool)arg1;
- (void)doGetMchShortTermQrCode:(_Bool)arg1;
- (void)doGetUserShortTermQrCode:(_Bool)arg1;
- (void)needRefreshMchCodeDataFromSvr;
- (void)userChangeFacingReceiveCodeType:(int)arg1;
- (int)getCurrentFacingReceiveCodeType;
- (void)WCPayFacingReceiveNotifySaveQRCode:(unsigned int)arg1 isFixedCode:(_Bool)arg2;
- (void)WCPayFacingReceiveSaveQRCode:(NSString *)arg1 feeType:(NSString *)arg2 usage:(NSString *)arg3 latitude:(NSString *)arg4 longtitude:(NSString *)arg5 timeStamp:(NSString *)arg6 saveNotifyInfo:(NSData *)arg7 desc:(NSString *)arg8;
- (void)WCPayFacingReceiveApplyQRCode:(NSData *)arg1;
- (UIImage *)WCPayFacingReceiveGetOfflineSlogan;
- (UIImage *)WCPayFacingReceiveGetOfflineLogo;
- (void)WCPayFacingReceiveSaveQRCodeImageFromAlert;
- (void)WCPayFacingReceiveSaveQRCodeImage;
- (void)WCPayFacingReceiveRefreshVoiceOperationSetting;
- (void)WCPayFacingReceiveViewReceiveDetail;
- (void)WCPayFacingReceiveSettingSoundSwicthState:(_Bool)arg1;
- (void)WCPayFacingReceiveNoTruthNameBtnDone;
- (void)WCPayFacingReceiveWitchBalance;
- (void)WCPayFacingReceiveChangeToUnFixedAmount;
- (void)WCPayFacingReceiveChangeToFixedAmount;
- (void)WCPayFacingReceiveQRCodeViewControllerCancel;
@end

