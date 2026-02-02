//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCCommentObject;
@protocol WCCommentDataServiceDelegate;

@interface WCCommentDataService : NSObject
{
    WCCommentObject *_commentObject;
    unsigned long long _pullScene;
    unsigned long long _commentAndLikeScene;
    id <WCCommentDataServiceDelegate> _delegate;
}

+ (void)updateFinderComment:(id)arg1 withSelectedFlag:(_Bool)arg2 isDislike:(_Bool)arg3 entityId:(id)arg4;
+ (void)commentLikeChangedWithCommentObject:(id)arg1 scene:(unsigned long long)arg2 selectedFlag:(_Bool)arg3 isDislike:(_Bool)arg4 comment:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCommentDataServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long commentAndLikeScene; // @synthesize commentAndLikeScene=_commentAndLikeScene;
@property(nonatomic) unsigned long long pullScene; // @synthesize pullScene=_pullScene;
@property(retain, nonatomic) WCCommentObject *commentObject; // @synthesize commentObject=_commentObject;
- (id)getPostingFailComment;
- (void)deletePostingCommentWithComment:(id)arg1;
- (void)commentLikeChangedWithSelectedFlag:(_Bool)arg1 isDislike:(_Bool)arg2 comment:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)deleteComment:(id)arg1 rootCommentID:(unsigned long long)arg2 successful:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)repostCommentWith:(id)arg1;
- (void)postSubCommentWith:(id)arg1;
- (void)postCommentWith:(id)arg1;
- (void)fetchSubCommentListWithRootCommentBuffer:(id)arg1 rootCommentID:(unsigned long long)arg2 direction:(int)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (_Bool)markObjectFailCommentsRead;
- (void)getCommentWithLastBuffer:(id)arg1 refCommentId:(unsigned long long)arg2 direction:(int)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;

@end

