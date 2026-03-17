//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WCBGUserInfo;

@protocol WCHomePageDataProviderDelegate <NSObject>
- (void)onFetchDataBeforeJumpToItemId:(NSString *)arg1 dataList:(NSArray *)arg2 success:(_Bool)arg3;
- (void)onHomepagePrePageUpdate:(NSArray *)arg1 withChangedTime:(unsigned int)arg2 prePageEnd:(_Bool)arg3 success:(_Bool)arg4;
- (void)onYearMonthInfosUpdated:(NSArray *)arg1;
- (void)onReturnBGUserInfo:(WCBGUserInfo *)arg1;
- (void)onResetOnceReturnAllDataRenderNoMore;
- (void)onOnceReturnAllDataRenderNoMore;
- (void)onOnceReturnAllDataWithRet:(long long)arg1 andTip:(NSString *)arg2;
- (void)onReturnIsAllData:(NSArray *)arg1 andAdData:(NSArray *)arg2;
- (void)onReturnLimitFeedId:(unsigned long long)arg1;
- (void)onNoMoreDataWithRet:(long long)arg1 andTip:(NSString *)arg2;
- (void)onDataUpdated:(NSArray *)arg1 maxItemID:(unsigned long long)arg2 minItemID:(unsigned long long)arg3 reqFirstPageMd5:(NSString *)arg4;
@end

