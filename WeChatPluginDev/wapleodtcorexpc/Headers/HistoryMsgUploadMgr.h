//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;
@protocol HistoryMsgUploadMgrDelegate;

@interface HistoryMsgUploadMgr : NSObject
{
    _Bool _uploadMediaWithoutMsgList;
    id <HistoryMsgUploadMgrDelegate> _delegate;
    NSString *_taskId;
    NSString *_taskID;
    NSString *_roomID;
    NSArray *_msgList;
    NSMutableArray *_arrReadyAddMsg;
    NSMutableArray *_arrUploadTask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrUploadTask; // @synthesize arrUploadTask=_arrUploadTask;
@property(retain, nonatomic) NSMutableArray *arrReadyAddMsg; // @synthesize arrReadyAddMsg=_arrReadyAddMsg;
@property(retain, nonatomic) NSArray *msgList; // @synthesize msgList=_msgList;
@property(retain, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
@property(retain, nonatomic) NSString *taskID; // @synthesize taskID=_taskID;
@property(nonatomic) _Bool uploadMediaWithoutMsgList; // @synthesize uploadMediaWithoutMsgList=_uploadMediaWithoutMsgList;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <HistoryMsgUploadMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onUploadTaskFailWithMsg:(id)arg1 uploadTask:(id)arg2;
- (void)onUploadTaskSuccessWithMsg:(id)arg1 uploadTask:(id)arg2;
- (void)uploadHistoryMsgList:(id)arg1;
- (void)onAllTaskFinish;
- (void)stopUpload;
- (void)startUpload;
- (void)generateUploadTask;
- (id)initWithMsgList:(id)arg1 roomID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

