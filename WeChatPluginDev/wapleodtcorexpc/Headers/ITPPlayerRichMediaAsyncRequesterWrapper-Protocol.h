//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol ITPPlayerRichMediaAsyncRequesterWrapperCallback;

@protocol ITPPlayerRichMediaAsyncRequesterWrapper <NSObject>
- (void)releaseRequester;
- (void)cancelRequestWithRequestId:(int)arg1;
- (int)requestFeatureDataAsyncWithIndex:(int)arg1 timeRangeArray:(const void *)arg2;
- (int)requestFeatureDataAsyncWithIndex:(int)arg1 timeRange:(const struct TPPlayerRichMediaTimeRange *)arg2;
- (int)requestFeatureDataAsyncWithIndex:(int)arg1 timeMsArray:(const void *)arg2;
- (int)requestFeatureDataAsyncWithIndex:(int)arg1 timeMs:(long long)arg2;
- (vector_f4e3e6bf)features;
- (int)prepareAsync;
- (int)setRichMediaSource:(NSString *)arg1;
- (void)setRequesterCallback:(id <ITPPlayerRichMediaAsyncRequesterWrapperCallback>)arg1;
@end

