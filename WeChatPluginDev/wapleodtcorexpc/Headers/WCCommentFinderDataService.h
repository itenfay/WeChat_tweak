//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCCommentFinderDataService
{
    int _viewScene;
    unsigned long long _reportScene;
}

@property(nonatomic) int viewScene; // @synthesize viewScene=_viewScene;
@property(nonatomic) unsigned long long reportScene; // @synthesize reportScene=_reportScene;
- (void)onFinderDataItemCommentLikeStatusChangeWithTid:(id)arg1 commentID:(unsigned long long)arg2 rootCommentID:(unsigned long long)arg3 likeStatus:(_Bool)arg4;
- (void)onFinderDataItemPostSubCommentFail:(id)arg1 tid:(id)arg2 rootCommentID:(unsigned long long)arg3 retCode:(int)arg4;
- (void)onFinderDataItemPostSubCommentSuccessful:(id)arg1 tid:(id)arg2 rootCommentID:(unsigned long long)arg3;
- (void)onFinderDataItemPostSubComment:(id)arg1 tid:(id)arg2 rootCommentID:(unsigned long long)arg3;
- (void)onFinderDataItemPostCommentSuccessful:(id)arg1 tid:(id)arg2;
- (void)onFinderDataItemPostCommentFailBySpecialError:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (void)onFinderDataItemPostCommentFail:(id)arg1 tid:(id)arg2;
- (void)onFinderDataItemPostComment:(id)arg1 tid:(id)arg2;
- (id)getPostingFailComment;
- (void)deletePostingCommentWithComment:(id)arg1;
- (void)commentLikeChangedWithSelectedFlag:(_Bool)arg1 isDislike:(_Bool)arg2 comment:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)deleteComment:(id)arg1 rootCommentID:(unsigned long long)arg2 successful:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)postCommentWithComment:(id)arg1;
- (void)postFinderComment:(id)arg1;
- (void)repostCommentWith:(id)arg1;
- (void)postSubCommentWith:(id)arg1;
- (void)postCommentWith:(id)arg1;
- (void)fetchSubCommentListWithRootCommentBuffer:(id)arg1 rootCommentID:(unsigned long long)arg2 direction:(int)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (_Bool)markObjectFailCommentsRead;
- (void)getCommentWithLastBuffer:(id)arg1 refCommentId:(unsigned long long)arg2 direction:(int)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (unsigned long long)finderCommentAndLikeScene;
- (unsigned long long)finderCommentAndLikeSceneFromUniCommentScene:(unsigned long long)arg1;
- (int)commentViewScene;
- (id)finderNonceId;
- (id)finderObjectId;
- (unsigned long long)finderCommentListDirectionFromUniCommentDirection:(int)arg1;
- (void)setCommentObject:(id)arg1;
- (id)init;

@end

