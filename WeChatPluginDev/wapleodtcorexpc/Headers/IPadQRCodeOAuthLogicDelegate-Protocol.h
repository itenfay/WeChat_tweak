//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, QRCodeOAuthData;

@protocol IPadQRCodeOAuthLogicDelegate <NSObject>
- (void)onConfirmAuth:(NSString *)arg1 confirmRedirectUrl:(NSString *)arg2 confirmWording:(NSString *)arg3 nickName:(NSString *)arg4 appIconUrl:(NSString *)arg5 appNickname:(NSString *)arg6;
- (void)onCancelAuth;
- (void)onQRCodeExpire;
- (void)onScanQRCode;
- (void)onAuthFailWithErrMsg:(NSString *)arg1 errCode:(int)arg2 errType:(unsigned int)arg3;
- (void)onGetAuthData:(QRCodeOAuthData *)arg1;
@end

