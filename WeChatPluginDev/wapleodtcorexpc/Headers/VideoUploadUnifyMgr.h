//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, VideoUploadTaskController;
@protocol UploadVideoCDNMgrDelegate;

@interface VideoUploadUnifyMgr : NSObject
{
    _Bool _bJustUploadDataWithoutMD5Hit;
    id <UploadVideoCDNMgrDelegate> _delegate;
    VideoUploadTaskController *_currentSendingTask;
    VideoUploadTaskController *_currentUploadingTask;
    NSMutableArray *_arrSendingTask;
    NSMutableArray *_arrUploadingTask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrUploadingTask; // @synthesize arrUploadingTask=_arrUploadingTask;
@property(retain, nonatomic) NSMutableArray *arrSendingTask; // @synthesize arrSendingTask=_arrSendingTask;
@property(retain, nonatomic) VideoUploadTaskController *currentUploadingTask; // @synthesize currentUploadingTask=_currentUploadingTask;
@property(retain, nonatomic) VideoUploadTaskController *currentSendingTask; // @synthesize currentSendingTask=_currentSendingTask;
@property(nonatomic) __weak id <UploadVideoCDNMgrDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool bJustUploadDataWithoutMD5Hit; // @synthesize bJustUploadDataWithoutMD5Hit=_bJustUploadDataWithoutMD5Hit;
- (void)OnWillRevokeMsg:(id)arg1 revokeContext:(id)arg2;
- (void)onSendOccupyMsgFail:(id)arg1 errorType:(int)arg2;
- (void)onSendOccupyMsgSucc:(id)arg1;
- (void)onUploadTaskFail:(id)arg1 errorType:(int)arg2;
- (void)onUploadTaskSuccess:(id)arg1;
- (void)checkUploadingQueue;
- (void)checkSendingQueue;
- (void)checkQueue;
- (void)Stop;
- (void)StopUploadByChatName:(id)arg1;
- (_Bool)stopTaskWithMsgWrap:(id)arg1;
- (void)PauseUpload:(id)arg1;
- (void)StopUpload:(id)arg1 fromDelete:(_Bool)arg2;
- (void)StartUpload:(id)arg1;
- (_Bool)IsMsgInUploadQueue:(id)arg1;
- (id)getTaskWithMsgWrap:(id)arg1;
- (id)getExistTaskDescript;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

