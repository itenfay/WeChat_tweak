//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderPoiGroupBuyListViewModelDelegate <NSObject>
- (void)finderPoiGroupBuyRequestFailWithErrorCode:(int)arg1;
- (void)finderPoiGroupBuyNoMoreData;
- (void)finderPoiGroupBuyAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)finderPoiGroupBuyReloadAllData;
@end

