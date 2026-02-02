//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GroupNoticeDownloadInfo, GroupNoticeItem;

@protocol GroupNoticeItemDownloaderDelegate <NSObject>
- (void)onGroupNoticeDownloadData:(GroupNoticeDownloadInfo *)arg1 finishedLength:(unsigned long long)arg2 totalLength:(unsigned long long)arg3;
- (void)onGroupNoticeDownloadData:(GroupNoticeDownloadInfo *)arg1 retCode:(int)arg2;
- (void)onGroupNoticeDownloadItem:(GroupNoticeItem *)arg1 retCode:(int)arg2;
@end

