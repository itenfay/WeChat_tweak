//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GroupNoticeUploadInfo;

@protocol GroupNoticeDataUploadDelegate <NSObject>
- (void)onUploadGroupNoticeData:(GroupNoticeUploadInfo *)arg1 retCode:(int)arg2;

@optional
- (void)onUploadGroupNoticeData:(GroupNoticeUploadInfo *)arg1 finishedLength:(unsigned long long)arg2 totalLength:(unsigned long long)arg3;
@end

