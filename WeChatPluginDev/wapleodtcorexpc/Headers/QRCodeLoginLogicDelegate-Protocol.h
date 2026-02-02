//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSData, NSString;

@protocol QRCodeLoginLogicDelegate <NSObject>

@optional
- (MMUIViewController *)OnQRCodeLogicGetCurrentViewController;
- (void)OnQRCodeLoginCancel;
- (void)OnQRCodeLoginExpired;
- (void)OnQRCodeLoginConfirmedWithUserName:(NSString *)arg1 pwd:(NSString *)arg2 nickName:(NSString *)arg3 headImgURL:(NSString *)arg4;
- (void)OnQRCodeLoginScaned:(NSString *)arg1 nickName:(NSString *)arg2 authUrl:(NSString *)arg3;
- (void)OnQRCodeLoginReciveImage:(NSData *)arg1 expiredTime:(unsigned int)arg2 loginURL:(NSString *)arg3;
- (void)OnQRCodeLoginFail;
- (void)OnQRCodeLoginUUIDExipred;
@end

