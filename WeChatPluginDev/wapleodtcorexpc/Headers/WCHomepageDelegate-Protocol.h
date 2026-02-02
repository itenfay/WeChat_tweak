//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WCBGUserInfo, WCHomepageMgr;

@protocol WCHomepageDelegate <NSObject>
- (void)onHomepageMgrClearJumpState:(WCHomepageMgr *)arg1;
- (void)onHomepageMgr:(WCHomepageMgr *)arg1 prePageUpdate:(NSArray *)arg2;
- (void)onHomepageMgr:(WCHomepageMgr *)arg1 fetchDataBeforeJumpWithNewItems:(NSArray *)arg2 success:(_Bool)arg3;
- (void)onHomepageMgr:(WCHomepageMgr *)arg1 yearMonthInfosUpdated:(NSArray *)arg2;
- (void)onHomepageMgr:(WCHomepageMgr *)arg1 limitFeedIdChanged:(unsigned long long)arg2;
- (void)onHomepageMgr:(WCHomepageMgr *)arg1 BGImgChanged:(WCBGUserInfo *)arg2;
- (void)onHomepageMgr:(WCHomepageMgr *)arg1 updateWithResult:(long long)arg2 tips:(NSString *)arg3 withAdded:(NSArray *)arg4 andChanged:(NSArray *)arg5 andDeleted:(NSArray *)arg6;
@end

