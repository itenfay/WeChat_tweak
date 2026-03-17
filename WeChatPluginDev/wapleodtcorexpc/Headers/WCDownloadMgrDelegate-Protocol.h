//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCMediaItem;

@protocol WCDownloadMgrDelegate <NSObject>
- (void)onAddDownloadQueue:(WCMediaItem *)arg1 downloadType:(long long)arg2;
- (void)onBeginDownload:(WCMediaItem *)arg1 downloadType:(long long)arg2;
- (void)onCancelDownloadSuccess:(WCMediaItem *)arg1 downloadType:(long long)arg2;
- (void)onDownloadFinish:(WCMediaItem *)arg1 downloadType:(long long)arg2;
- (void)onDownloadMediaProcessChange:(WCMediaItem *)arg1 downloadType:(long long)arg2 current:(int)arg3 total:(int)arg4;
@end

