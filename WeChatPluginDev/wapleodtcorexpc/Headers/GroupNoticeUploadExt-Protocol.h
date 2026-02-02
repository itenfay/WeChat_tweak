//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GroupNoticeItem, GroupNoticeItemDataField;

@protocol GroupNoticeUploadExt <NSObject>
- (void)onPreparingUploadGroupNoticeData:(GroupNoticeItemDataField *)arg1;
- (void)onUploadGroupNoticeData:(GroupNoticeItemDataField *)arg1 finishedLength:(unsigned long long)arg2 totalLength:(unsigned long long)arg3;
- (void)onUploadGroupNoticeData:(GroupNoticeItemDataField *)arg1 success:(_Bool)arg2;
- (void)onUploadGroupNoticeItem:(GroupNoticeItem *)arg1 success:(_Bool)arg2;
@end

