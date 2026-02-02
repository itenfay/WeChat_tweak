//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath, WCFinderFeedContentVM;

@protocol WCFinderNearbyFlowViewModelDelegate <NSObject>

@optional
- (void)nearByListChangedAtIndexPath:(NSIndexPath *)arg1 contentVM:(WCFinderFeedContentVM *)arg2 animated:(_Bool)arg3;
- (void)nearByListWillChangeOriginDataIndex;
- (void)nearByListDataWillRemoved:(WCFinderFeedContentVM *)arg1;
- (void)nearByListNextPageAppendData:(NSArray *)arg1;
- (void)nearByListDataSourceChanged;
- (void)nearByListSourceNoMoreData:(unsigned long long)arg1;
- (void)nearByListDataSourceFetchError:(unsigned long long)arg1;
@end

