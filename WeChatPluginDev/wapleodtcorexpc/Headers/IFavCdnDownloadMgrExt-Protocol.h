//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FavoritesDownloadCDNInfo;

@protocol IFavCdnDownloadMgrExt <NSObject>

@optional
- (void)OnFavCdnDownload:(FavoritesDownloadCDNInfo *)arg1 RetCode:(int)arg2;
- (void)OnFavCdnDownload:(FavoritesDownloadCDNInfo *)arg1 TotalLength:(unsigned long long)arg2 FinishLength:(unsigned long long)arg3;
@end

