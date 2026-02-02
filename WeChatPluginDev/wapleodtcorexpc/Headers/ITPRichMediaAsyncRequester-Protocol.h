//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, TPTimeRange;
@protocol ITPRichMediaAsyncRequesterDelegate;

@protocol ITPRichMediaAsyncRequester <NSObject>
@property(nonatomic) __weak id <ITPRichMediaAsyncRequesterDelegate> delegate;
- (void)releaseRequester;
- (void)cancelRequestWithRequestId:(int)arg1;
- (int)requestFeatureDataAsyncWithIndex:(int)arg1 timeRangeArray:(NSArray *)arg2;
- (int)requestFeatureDataAsyncWithIndex:(int)arg1 timeRange:(TPTimeRange *)arg2;
- (int)requestFeatureDataAsyncWithIndex:(int)arg1 timeMsArray:(NSArray *)arg2;
- (int)requestFeatureDataAsyncWithIndex:(int)arg1 timeMs:(long long)arg2;
- (NSArray *)features;
- (long long)prepareAsync;
- (long long)setRichMediaSource:(NSString *)arg1;
@end

