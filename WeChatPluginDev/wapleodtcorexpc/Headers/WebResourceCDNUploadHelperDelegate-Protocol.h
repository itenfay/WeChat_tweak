//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WebviewLocalResItem;

@protocol WebResourceCDNUploadHelperDelegate <NSObject>

@optional
- (void)onItemUploadCDNFinishedWithoutMediaId:(int)arg1 Item:(WebviewLocalResItem *)arg2;
- (void)onItemUploadProgressWithoutMediaId:(int)arg1 Item:(WebviewLocalResItem *)arg2;
- (void)onItemUploadCDNFinished:(int)arg1 Item:(WebviewLocalResItem *)arg2;
- (void)onItemUploadProgress:(int)arg1 Item:(WebviewLocalResItem *)arg2;
@end

