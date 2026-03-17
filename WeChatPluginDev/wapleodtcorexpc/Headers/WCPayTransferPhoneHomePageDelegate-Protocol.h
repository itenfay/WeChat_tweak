//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class JumpItem, NSString, TransferPhoneHomePageResp;

@protocol WCPayTransferPhoneHomePageDelegate <NSObject>
- (void)onWCPayTransferPhoneHomePageClickJumpItem:(JumpItem *)arg1;
- (void)onWCPayTransferPhoneHomePageBack;
- (void)onWCPayTransferPhoneHomePageToNext:(NSString *)arg1;
- (void)onWCPayTransferPhoneHomePageToHistory;
- (TransferPhoneHomePageResp *)onWCPayTransferPhoneHomePage;
@end

