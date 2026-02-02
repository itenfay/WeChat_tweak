//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameHaowanDatabaseHelper, NSMutableDictionary, NSString;

@interface GameHaowanPostMgr
{
    NSMutableDictionary *_reportEditProps;
    GameHaowanDatabaseHelper *_databaseHelper;
    NSMutableDictionary *_uploadTasks;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *uploadTasks; // @synthesize uploadTasks=_uploadTasks;
@property(retain, nonatomic) GameHaowanDatabaseHelper *databaseHelper; // @synthesize databaseHelper=_databaseHelper;
@property(retain, nonatomic) NSMutableDictionary *reportEditProps; // @synthesize reportEditProps=_reportEditProps;
- (int)ssidForTrackEventSource:(long long)arg1;
- (id)buildTrackEventProps:(id)arg1;
- (id)reportObjWithAction:(long long)arg1;
- (void)trackEventPostFailed:(id)arg1 errcode:(long long)arg2;
- (void)trackEventPostSucceed:(id)arg1 topicId:(unsigned int)arg2 postType:(long long)arg3 fileList:(id)arg4;
- (void)trackEventAddNewPost:(id)arg1;
- (void)resumeImagePost:(id)arg1 mediaItems:(id)arg2;
- (void)resumeVideoPost:(id)arg1 mediaItems:(id)arg2;
- (id)buildPBMediaListForImagePost:(id)arg1 fileList:(id)arg2;
- (id)buildPBMediaListForVideoPost:(id)arg1 fileList:(id)arg2 editFlag:(unsigned int)arg3;
- (void)sendHaowanPostRequest:(id)arg1 resIds:(id)arg2 fileList:(id)arg3;
- (_Bool)reachRetryLimit:(id)arg1;
- (void)uploadTask:(id)arg1 willRetryWithCount:(unsigned long long)arg2;
- (_Bool)uploadTask:(id)arg1 didFailedWithError:(id)arg2 canRetry:(_Bool)arg3;
- (void)updatePostFailed:(id)arg1 error:(id)arg2;
- (void)uploadTask:(id)arg1 didProgressChanged:(float)arg2;
- (void)uploadTask:(id)arg1 didSucceedWithResIds:(id)arg2;
- (void)handlePostCanceled:(id)arg1;
- (void)handlePostProgress:(id)arg1 progress:(float)arg2;
- (void)handlePostSucceed:(id)arg1;
- (void)handlePostFailed:(id)arg1 errMsg:(id)arg2 code:(long long)arg3;
- (id)createUploadTask:(long long)arg1 fileList:(id)arg2;
- (void)startUploadTask:(id)arg1 postId:(id)arg2;
- (id)prepareNewPost:(id)arg1 continueData:(id *)arg2;
- (id)startMediaPost:(id)arg1;
- (id)startTextPost:(id)arg1;
- (id)publishHaowanPost:(id)arg1;
- (id)getPost:(id)arg1;
- (id)getAllPost;
- (_Bool)removePost:(id)arg1;
- (void)removeAllPost;
- (void)stopAllUploadTask;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)readPostInfo;
- (void)transferImageMedias:(id)arg1 postId:(id)arg2;
- (void)transferVideoMedias:(id)arg1 postId:(id)arg2;
- (void)startTransferOldData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

