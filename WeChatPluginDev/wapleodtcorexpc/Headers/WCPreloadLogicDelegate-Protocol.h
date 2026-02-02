//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCDataItem, WCDownloadImageCdnMgr, WCDownloadMgr, WCPreloadLogicMgr, WCTimelineMgr;

@protocol WCPreloadLogicDelegate <NSObject>
- (void)preloadLogicMgr:(WCPreloadLogicMgr *)arg1 preloadSightForDataItem:(WCDataItem *)arg2;
- (_Bool)preloadLogicMgr:(WCPreloadLogicMgr *)arg1 canPreloadBigImageForUsername:(NSString *)arg2 clickRatio:(int)arg3;
- (WCDownloadImageCdnMgr *)preloadLogicMgr:(WCPreloadLogicMgr *)arg1 imageDownloadCdnMgrForCategory:(long long)arg2;
- (WCDownloadMgr *)downloadMgrForPreloadLogicMgr:(WCPreloadLogicMgr *)arg1;
- (WCTimelineMgr *)timelineMgrForPreloadLogicMgr:(WCPreloadLogicMgr *)arg1;
@end

