//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol ITPPlayerRichMediaAsyncRequesterWrapper;

@protocol ITPPlayerRichMediaAsyncRequesterWrapperCallback <NSObject>
- (void)onFeatureDataRequestFailure:(id <ITPPlayerRichMediaAsyncRequesterWrapper>)arg1 requestId:(int)arg2 featureIndex:(int)arg3 errorCode:(int)arg4;
- (void)onFeatureDataRequestSuccess:(id <ITPPlayerRichMediaAsyncRequesterWrapper>)arg1 requestId:(int)arg2 featureIndex:(int)arg3 featureData:(const void *)arg4;
- (void)onRequester:(id <ITPPlayerRichMediaAsyncRequesterWrapper>)arg1 errorCode:(int)arg2;
- (void)onRequesterPrepared:(id <ITPPlayerRichMediaAsyncRequesterWrapper>)arg1;
@end

