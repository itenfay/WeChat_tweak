//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GroupNoticeUploadInfo, GroupNoticeUploadTask;
@protocol GroupNoticeDataUploadDelegate;

@interface GroupNoticeDataUploader : NSObject
{
    _Bool _isUploading;
    id <GroupNoticeDataUploadDelegate> _delegate;
    GroupNoticeUploadInfo *_uploadInfo;
    GroupNoticeUploadTask *_currentTask;
}

+ (id)uploaderWithUploadInfo:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isUploading; // @synthesize isUploading=_isUploading;
@property(retain, nonatomic) GroupNoticeUploadTask *currentTask; // @synthesize currentTask=_currentTask;
@property(retain, nonatomic) GroupNoticeUploadInfo *uploadInfo; // @synthesize uploadInfo=_uploadInfo;
@property(nonatomic) __weak id <GroupNoticeDataUploadDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notifyTaskComplete:(id)arg1;
- (void)notifyTaskProgress:(id)arg1;
- (void)startTask:(id)arg1;
- (void)startUploadData:(CDUnknownBlockType)arg1;
- (void)startUploadThumb:(CDUnknownBlockType)arg1;
- (void)clearUploadStatus;
- (void)stopUpload;
- (void)startUpload;

@end

