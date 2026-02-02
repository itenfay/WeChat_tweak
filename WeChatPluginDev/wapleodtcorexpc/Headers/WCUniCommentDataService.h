//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, WCCommentPostManager, WCCommentWCDB;

@interface WCUniCommentDataService
{
    WCCommentPostManager *_postManager;
    WCCommentWCDB *_dataBase;
    NSMutableArray *_tasks;
}

+ (void)sendLikeRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (int)operationIdentityTypeFromScene:(unsigned long long)arg1;
+ (void)commentLikeChangedWithEntityId:(id)arg1 uniCommentAppName:(id)arg2 bypassBuffer:(id)arg3 bypassBufferType:(int)arg4 scene:(unsigned long long)arg5 selectedFlag:(_Bool)arg6 isDislike:(_Bool)arg7 comment:(id)arg8 successBlock:(CDUnknownBlockType)arg9 failureBlock:(CDUnknownBlockType)arg10;
+ (void)commentLikeChangedWithCommentObject:(id)arg1 scene:(unsigned long long)arg2 selectedFlag:(_Bool)arg3 isDislike:(_Bool)arg4 comment:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
+ (id)genFinderBaseRequest;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *tasks; // @synthesize tasks=_tasks;
@property(retain, nonatomic) WCCommentWCDB *dataBase; // @synthesize dataBase=_dataBase;
@property(retain, nonatomic) WCCommentPostManager *postManager; // @synthesize postManager=_postManager;
- (id)commentDbDirectory;
- (id)commentPostingDirectory;
- (id)commentBaseDirectory;
- (void)commentPostSuccessfulWitComment:(id)arg1;
- (void)commentPostFailWithComment:(id)arg1;
- (void)handleSendCommentFailWithRet:(int)arg1 errorMessage:(id)arg2 comment:(id)arg3;
- (void)handleSendCommentSuccessWithCommentId:(unsigned long long)arg1 clientId:(id)arg2 comment:(id)arg3;
- (void)commentStartPostWithComment:(id)arg1;
- (void)commentLikeChangedWithSelectedFlag:(_Bool)arg1 isDislike:(_Bool)arg2 comment:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)deleteComment:(id)arg1 rootCommentID:(unsigned long long)arg2 successful:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)sendUniCommentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)repostCommentWith:(id)arg1 entityId:(id)arg2;
- (void)repostCommentWith:(id)arg1;
- (void)postSubCommentWith:(id)arg1 scene:(unsigned long long)arg2 entityId:(id)arg3;
- (void)postSubCommentWith:(id)arg1;
- (void)postCommentWith:(id)arg1 scene:(unsigned long long)arg2 entityId:(id)arg3;
- (void)postCommentWith:(id)arg1;
- (void)setupCommentBaseElementBeforePosting:(id)arg1;
- (void)fetchSubCommentListWithRootCommentBuffer:(id)arg1 rootCommentID:(unsigned long long)arg2 direction:(int)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (_Bool)markObjectFailCommentsRead;
- (id)getPostingFailComment;
- (void)deletePostingCommentWithComment:(id)arg1;
- (id)getPostingFailCommentWithObjectId:(id)arg1;
- (id)commentFromPbComment:(id)arg1;
- (void)sendGetCommentRequest:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)getCommentWithLastBuffer:(id)arg1 refCommentId:(unsigned long long)arg2 direction:(int)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)generateFinderBaseRequest;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

