//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSString;

@protocol CheckQRCodeLoginDelegate <NSObject>
- (MMUIViewController *)OnCheckQRCodeLogicGetCurrentViewController;
- (void)OnCheckQRCodeLoginUUIDExpired;
- (void)OnCheckQRCodeLoginCancel;
- (void)OnCheckQRCodeLoginExpried;
- (void)OnCheckQRCodeLoginConfirmedWithUserName:(NSString *)arg1 pwd:(NSString *)arg2 nickName:(NSString *)arg3 headImageURL:(NSString *)arg4;
- (void)OnCheckQRCodeLoginScaned:(NSString *)arg1 nickName:(NSString *)arg2 authUrl:(NSString *)arg3;
- (void)OnCheckQRCodeLoginFail;
@end

