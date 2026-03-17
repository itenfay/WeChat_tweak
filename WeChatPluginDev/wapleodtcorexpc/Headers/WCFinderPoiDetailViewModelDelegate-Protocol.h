//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderPoiDetailViewModelDelegate <NSObject>
- (void)finderPoiDetailRequestFailWithErrorCode:(int)arg1;
- (void)finderPoiDetailNoMoreData;
- (void)finderPoiDetailAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)finderPoiDetailReloadAllData;
@end

