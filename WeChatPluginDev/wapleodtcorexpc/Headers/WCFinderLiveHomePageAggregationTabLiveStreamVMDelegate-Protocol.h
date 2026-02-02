//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AggregationHomePageTabInfoDataModel;

@protocol WCFinderLiveHomePageAggregationTabLiveStreamVMDelegate <NSObject>

@optional
- (void)onLiveHomePageAggregationTabLiveStreamFetchFailWithErrorCode:(int)arg1;
- (void)onLiveHomePageAggregationTabLiveStreamNoMoreData;
- (void)onLiveHomePageAggregationTabLiveStreamBatchReplaceDataFromRange:(struct _NSRange)arg1 insertRange:(struct _NSRange)arg2 removeRange:(struct _NSRange)arg3;
- (void)onLiveHomePageAggregationTabLiveStreamAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)onLiveHomePageAggregationTabLiveStreamReloadAllData:(AggregationHomePageTabInfoDataModel *)arg1;
@end

