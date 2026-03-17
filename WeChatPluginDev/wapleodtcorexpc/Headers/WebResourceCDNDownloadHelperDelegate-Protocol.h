//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WebviewLocalResItem;

@protocol WebResourceCDNDownloadHelperDelegate <NSObject>
- (void)onItemCDNDownloadFinished:(int)arg1 Item:(WebviewLocalResItem *)arg2;
- (void)onItemDownloadProgress:(int)arg1 Item:(WebviewLocalResItem *)arg2;
@end

