//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MPLandingPageCgiHandler
{
    unsigned int _enterId;
}

@property(nonatomic) unsigned int enterId; // @synthesize enterId=_enterId;
- (void)reportReqSvrErr:(id)arg1;
- (void)reportReqNetWorkFail:(id)arg1;
- (_Bool)checkCGIBaseRespSuccess:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callbackGetVideoUrlWithSuccess:(_Bool)arg1 reqVid:(id)arg2 newUrl:(id)arg3 isBlock:(_Bool)arg4 errorWording:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)handleGetVideoUrlResp:(id)arg1 eventID:(unsigned int)arg2;
- (void)requestVideoStateByVid:(id)arg1 mpUrl:(id)arg2 oldVideoUrl:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleLikeCommentResp:(id)arg1 eventID:(unsigned int)arg2;
- (void)callbackLikeCommentWithSuccess:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)callbackLikeCommentFail:(CDUnknownBlockType)arg1;
- (void)setCommentLikeStatus:(id)arg1 isLike:(_Bool)arg2 isLikeReply:(_Bool)arg3 replyId:(unsigned int)arg4 openParam:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)handleDeleteCommmentResp:(id)arg1 eventID:(unsigned int)arg2;
- (void)callbackDeleteCommentWithSuccess:(_Bool)arg1 errMsg:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)callbackDeleteCommentFail:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteWithOpenParam:(id)arg1 commentMsg:(id)arg2 isDeleteReply:(_Bool)arg3 commentReply:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)deleteReplyWithOpenParam:(id)arg1 commentMsg:(id)arg2 commentReply:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)deleteCommentWithOpenParam:(id)arg1 commentMsg:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleAddCommentResp:(id)arg1 eventID:(unsigned int)arg2;
- (void)callbackAddCommentWithSuccess:(_Bool)arg1 personalCommentId:(unsigned int)arg2 errMsg:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)callbackAddCommentFail:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addCommentCommen:(id)arg1 content:(id)arg2 actionType:(int)arg3 personalCommentId:(unsigned int)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)addCommentReplysWithOpenParam:(id)arg1 content:(id)arg2 personalCommentId:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addCommentsWithOpenParam:(id)arg1 content:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleGetCommentResp:(id)arg1 eventID:(unsigned int)arg2;
- (void)callbackGetCommentWithSuccess:(_Bool)arg1 commentMsgArr:(id)arg2 funcEnable:(_Bool)arg3 nextOffset:(int)arg4 onlyFansCanComment:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)callbackGetCommentFail:(CDUnknownBlockType)arg1;
- (void)getCommentsWithOpenParam:(id)arg1 offset:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cancelAllRequest;
- (void)dealloc;

@end

