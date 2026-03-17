//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderStreamLayoutInfo, NSArray, NSString;

@protocol WCFinderNearbyStreamFetchMgrExt <NSObject>
- (void)onNearbyStreamLayoutInfoChange:(FinderStreamLayoutInfo *)arg1;
- (void)onNearbyStreamFetchHistory:(unsigned long long)arg1 dataItems:(NSArray *)arg2;
- (void)onNearbyStreamFetchSuccess:(unsigned long long)arg1 dataItems:(NSArray *)arg2 userLocation:(NSString *)arg3 preFetchNextPageIndex:(unsigned long long)arg4;
- (void)onNearbyStreamFetchWillSuccess:(unsigned long long)arg1;
- (void)onNearbyStreamFetchNoMoreData:(unsigned long long)arg1;
- (void)onNearbyStreamFetchError:(unsigned long long)arg1;
- (void)onNearbyStreamFetchTriggerCleanAction:(unsigned long long)arg1;
@end

