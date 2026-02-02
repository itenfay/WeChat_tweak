//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCDataItem, WCMediaItem, WCSnsOperation;

@protocol WCCdnDownloadImageDelegate <NSObject>
- (WCDataItem *)dataItemWithId:(NSString *)arg1;
- (WCSnsOperation *)cdnGetSnsOperationsWithFeedId:(NSString *)arg1;
- (void)onCdnDownloadImageCancel:(WCMediaItem *)arg1 downloadType:(long long)arg2;
- (void)onCdnDownloadImageFail:(WCMediaItem *)arg1 downloadType:(long long)arg2;
- (void)onCdnDownloadImageFinish:(WCMediaItem *)arg1 downloadType:(long long)arg2;
- (void)onCdnDownloadImageProcessChanged:(WCMediaItem *)arg1 downloadType:(long long)arg2 current:(long long)arg3 total:(long long)arg4;
- (void)onCdnDownloadImageAddedQueue:(WCMediaItem *)arg1 downloadType:(long long)arg2;
- (void)onCdnDownloadImageBegin:(WCMediaItem *)arg1 downloadType:(long long)arg2;
@end

