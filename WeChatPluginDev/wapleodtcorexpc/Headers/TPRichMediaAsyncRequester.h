//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TPPlayerLogContext;
@protocol ITPPlayerRichMediaAsyncRequesterWrapper, ITPRichMediaAsyncRequesterDelegate;

@interface TPRichMediaAsyncRequester : NSObject
{
    id <ITPRichMediaAsyncRequesterDelegate> delegate;
    id <ITPPlayerRichMediaAsyncRequesterWrapper> _requester;
    TPPlayerLogContext *_log;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPPlayerLogContext *log; // @synthesize log=_log;
@property(retain, nonatomic) id <ITPPlayerRichMediaAsyncRequesterWrapper> requester; // @synthesize requester=_requester;
@property(nonatomic) __weak id <ITPRichMediaAsyncRequesterDelegate> delegate; // @synthesize delegate;
- (void)onFeatureDataRequestSuccess:(id)arg1 requestId:(int)arg2 featureIndex:(int)arg3 featureData:(const void *)arg4;
- (void)onFeatureDataRequestFailure:(id)arg1 requestId:(int)arg2 featureIndex:(int)arg3 errorCode:(int)arg4;
- (void)onRequester:(id)arg1 errorCode:(int)arg2;
- (void)onRequesterPrepared:(id)arg1;
- (void)releaseRequester;
- (void)cancelRequestWithRequestId:(int)arg1;
- (int)requestFeatureDataAsyncWithIndex:(int)arg1 timeRangeArray:(id)arg2;
- (int)requestFeatureDataAsyncWithIndex:(int)arg1 timeRange:(id)arg2;
- (int)requestFeatureDataAsyncWithIndex:(int)arg1 timeMsArray:(id)arg2;
- (int)requestFeatureDataAsyncWithIndex:(int)arg1 timeMs:(long long)arg2;
- (id)features;
- (long long)prepareAsync;
- (long long)setRichMediaSource:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

