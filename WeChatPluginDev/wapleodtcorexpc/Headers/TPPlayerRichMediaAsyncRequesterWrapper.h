//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPPlayerRichMediaAsyncRequesterWrapper : NSObject
{
    struct shared_ptr<ITPPlayerRichMediaAsyncRequester> _richMediaAsyncRequester;
    struct TPPlayerRichMediaAsyncRequesterCallbackWrapper *_richMediaAsyncRequesterCallbackWrapper;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)requestFeatureDataAsyncWithIndex:(int)arg1 timeRangeArray:(const void *)arg2;
- (int)requestFeatureDataAsyncWithIndex:(int)arg1 timeRange:(const struct TPPlayerRichMediaTimeRange *)arg2;
- (int)requestFeatureDataAsyncWithIndex:(int)arg1 timeMsArray:(const void *)arg2;
- (int)requestFeatureDataAsyncWithIndex:(int)arg1 timeMs:(long long)arg2;
- (void)releaseRequester;
- (vector_f4e3e6bf)features;
- (void)cancelRequestWithRequestId:(int)arg1;
- (int)prepareAsync;
- (int)setRichMediaSource:(id)arg1;
- (void)setRequesterCallback:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

