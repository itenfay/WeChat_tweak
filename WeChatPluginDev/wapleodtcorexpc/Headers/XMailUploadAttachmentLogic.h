//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OrderedDictionary, XMailUploadAttachmentTask;

@interface XMailUploadAttachmentLogic : NSObject
{
    _Bool _shouldAlertErrMsg;
    CDUnknownBlockType _uploadResultBlock;
    XMailUploadAttachmentTask *_curTask;
    OrderedDictionary *_taskList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldAlertErrMsg; // @synthesize shouldAlertErrMsg=_shouldAlertErrMsg;
@property(retain, nonatomic) OrderedDictionary *taskList; // @synthesize taskList=_taskList;
@property(retain, nonatomic) XMailUploadAttachmentTask *curTask; // @synthesize curTask=_curTask;
@property(copy, nonatomic) CDUnknownBlockType uploadResultBlock; // @synthesize uploadResultBlock=_uploadResultBlock;
- (void)OnCdnUpload:(id)arg1;
- (void)endCurTask;
- (void)startUploadCurTask;
- (void)checkQueue;
- (_Bool)addUploadAttachmentTaskWithFileName:(id)arg1 filePath:(id)arg2;

@end

