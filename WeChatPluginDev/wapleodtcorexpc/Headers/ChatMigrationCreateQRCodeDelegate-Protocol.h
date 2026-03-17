//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BakChatCreateQRcodeOfflineResponse, BakChatCreateQRcodeResponse;

@protocol ChatMigrationCreateQRCodeDelegate <NSObject>
- (void)onGetQRCodeOffline:(BakChatCreateQRcodeOfflineResponse *)arg1;
- (void)onGetQRCode:(BakChatCreateQRcodeResponse *)arg1;
@end

