//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderFeedContentVM, WCFinderLiteAppParams;

@protocol WCFinderLandScapeVideoVMDelegate <NSObject>
- (void)endRequestReleatedDataWithPullType:(unsigned long long)arg1 isPrefetchCache:(_Bool)arg2 success:(_Bool)arg3 cgiTimeCost:(unsigned long long)arg4;
- (void)startRequestReleatedDataWithPullType:(unsigned long long)arg1;
- (void)onFinderLandScapeVMGetNeedOpenLiteApp:(WCFinderLiteAppParams *)arg1;
- (void)onFinderLandScapeVMGetNeedOpenComplaintUrlData:(NSString *)arg1;
- (void)onFinderLandScapeVMGetNotExistDataWithMsg:(NSString *)arg1;
- (void)onFinderLandScapeVMNeedStopVideo;
- (void)onFinderLandScapeVMGetFirstPlayAbleVideo:(WCFinderFeedContentVM *)arg1;
- (void)onFinderLandScapeVMFetchDatafailed;
- (void)onFinderLandScapeVMFetchDataSuccessful;
@end

