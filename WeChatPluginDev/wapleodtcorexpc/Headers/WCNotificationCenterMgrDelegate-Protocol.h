//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MyWCDB, NSArray, SnsActionGroup, WCAdvertiseDataHelper, WCDataItem;

@protocol WCNotificationCenterMgrDelegate <NSObject>
- (WCAdvertiseDataHelper *)adDataHelper;
- (MyWCDB *)database;
- (void)onMessageUnReadCountChanged;
- (void)onReveiceStrangerMessage:(SnsActionGroup *)arg1;
- (void)onReveiceWCMessages:(NSArray *)arg1;
- (void)onLatestWCObjectChanged:(WCDataItem *)arg1;
@end

