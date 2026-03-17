//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, WCCommentDetailViewModel, WCFinderComment;

@protocol WCCommentDetailViewModelDelegate <NSObject>

@optional
- (void)commentDetailViewModel:(WCCommentDetailViewModel *)arg1 willPostSubcomment:(WCFinderComment *)arg2;
- (void)commentDetailViewModelcommentEntityCloseStatusChange:(WCCommentDetailViewModel *)arg1;
- (void)commentDetailViewModelCommentEntityWasDeleted:(WCCommentDetailViewModel *)arg1;
- (void)commentDetailViewModel:(WCCommentDetailViewModel *)arg1 subCommentFetchFailWithCommentID:(unsigned long long)arg2 direction:(int)arg3 retCode:(int)arg4;
- (void)commentDetailViewModel:(WCCommentDetailViewModel *)arg1 subCommentPostEntity:(NSString *)arg2 rootCommentID:(unsigned long long)arg3;
- (void)commentDetailViewModel:(WCCommentDetailViewModel *)arg1 commentFetchByRefCommentWithEntityId:(NSString *)arg2 refCommentID:(unsigned long long)arg3 refCommentIndexPath:(NSIndexPath *)arg4;
- (void)commentDetailViewModel:(WCCommentDetailViewModel *)arg1 commentEntityUpdate:(NSString *)arg2;
- (void)commentDetailViewModel:(WCCommentDetailViewModel *)arg1 commentPostNetworkError:(int)arg2 errorMessage:(NSString *)arg3 comment:(WCFinderComment *)arg4;
- (void)commentDetailViewModel:(WCCommentDetailViewModel *)arg1 commentPostWithEntityId:(NSString *)arg2 commentId:(unsigned long long)arg3;
- (void)commentDetailViewModel:(WCCommentDetailViewModel *)arg1 commentWithNetworkError:(int)arg2 entityId:(NSString *)arg3 direction:(int)arg4;
- (void)commentDetailViewModel:(WCCommentDetailViewModel *)arg1 commentFetchWithSpecialCode:(int)arg2;
- (void)commentDetailViewModel:(WCCommentDetailViewModel *)arg1 onClickRefcontentFullTextWithEntityId:(NSString *)arg2 rootCommentID:(unsigned long long)arg3;
- (void)commentDetailViewModel:(WCCommentDetailViewModel *)arg1 onCommentClickFullTextWithEntityId:(NSString *)arg2 rootCommentId:(unsigned long long)arg3;
- (void)commentDetailViewModel:(WCCommentDetailViewModel *)arg1 onCommentClickLikeWithEntityId:(NSString *)arg2 rootCommentId:(unsigned long long)arg3;
- (void)commentDetailViewModel:(WCCommentDetailViewModel *)arg1 onSubCommentDataChangedWithRootCommentId:(unsigned long long)arg2;
- (void)commentDetailViewModel:(WCCommentDetailViewModel *)arg1 onCommentEntityDataChanged:(NSString *)arg2;
- (void)commentDetailViewModel:(WCCommentDetailViewModel *)arg1 onCommentEmptyWithEntityId:(NSString *)arg2;
- (void)commentDetailViewModel:(WCCommentDetailViewModel *)arg1 onNoMoreMoreDataWithEntityId:(NSString *)arg2;
@end

