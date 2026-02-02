//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WCCommentDataService, WCCommentObject;
@protocol WCCommentDetailViewModelDelegate;

@interface WCCommentDetailViewModel : NSObject
{
    _Bool _shouldShowHightlightComment;
    _Bool _hasFetchCGIData;
    _Bool _upContinue;
    _Bool _downContinue;
    _Bool _shouldShowAuthenticationTips;
    _Bool _isLoadingComment;
    _Bool _isCloseComment;
    _Bool _hasShowFriendLabel;
    _Bool _isDefaultComment;
    _Bool _hasAddFriendLabel;
    _Bool _hasAddOtherLabel;
    _Bool _autoExpandSubCommentList;
    unsigned long long _refCommentID;
    NSMutableArray *_allComments;
    WCCommentObject *_commentObject;
    id <WCCommentDetailViewModelDelegate> _delegate;
    NSString *_tid;
    NSMutableDictionary *_heightDict;
    NSString *_lastVCName;
    unsigned long long _viewScene;
    unsigned long long _preFetchNextPageCount;
    unsigned long long _reportScene;
    unsigned long long _replyScene;
    NSString *_replyNickname;
    WCCommentDataService *_dataService;
    CDUnknownBlockType _didSendCommentCallback;
    CDUnknownBlockType _didDeleteCommentCallback;
    CDUnknownBlockType _commentLikeChangedCallback;
    NSData *_lastBuffer;
    NSMutableSet *_commentIdSet;
    unsigned long long _scene;
    unsigned long long _commentMaxDisplayNameCount;
    NSMutableSet *_showSubCommentListIDSet;
    NSMutableArray *_pastedStrArray;
    NSMutableArray *_commitPastedStrArray;
    struct _NSRange _commentTextViewLatestSelectionRange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *commitPastedStrArray; // @synthesize commitPastedStrArray=_commitPastedStrArray;
@property(retain, nonatomic) NSMutableArray *pastedStrArray; // @synthesize pastedStrArray=_pastedStrArray;
@property(nonatomic) _Bool autoExpandSubCommentList; // @synthesize autoExpandSubCommentList=_autoExpandSubCommentList;
@property(nonatomic) _Bool hasAddOtherLabel; // @synthesize hasAddOtherLabel=_hasAddOtherLabel;
@property(nonatomic) _Bool hasAddFriendLabel; // @synthesize hasAddFriendLabel=_hasAddFriendLabel;
@property(retain, nonatomic) NSMutableSet *showSubCommentListIDSet; // @synthesize showSubCommentListIDSet=_showSubCommentListIDSet;
@property(nonatomic) unsigned long long commentMaxDisplayNameCount; // @synthesize commentMaxDisplayNameCount=_commentMaxDisplayNameCount;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSMutableSet *commentIdSet; // @synthesize commentIdSet=_commentIdSet;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(copy, nonatomic) CDUnknownBlockType commentLikeChangedCallback; // @synthesize commentLikeChangedCallback=_commentLikeChangedCallback;
@property(copy, nonatomic) CDUnknownBlockType didDeleteCommentCallback; // @synthesize didDeleteCommentCallback=_didDeleteCommentCallback;
@property(copy, nonatomic) CDUnknownBlockType didSendCommentCallback; // @synthesize didSendCommentCallback=_didSendCommentCallback;
@property(retain, nonatomic) WCCommentDataService *dataService; // @synthesize dataService=_dataService;
@property(nonatomic) struct _NSRange commentTextViewLatestSelectionRange; // @synthesize commentTextViewLatestSelectionRange=_commentTextViewLatestSelectionRange;
@property(nonatomic) _Bool isDefaultComment; // @synthesize isDefaultComment=_isDefaultComment;
@property(copy, nonatomic) NSString *replyNickname; // @synthesize replyNickname=_replyNickname;
@property(nonatomic) unsigned long long replyScene; // @synthesize replyScene=_replyScene;
@property(nonatomic) _Bool hasShowFriendLabel; // @synthesize hasShowFriendLabel=_hasShowFriendLabel;
@property(nonatomic) _Bool isCloseComment; // @synthesize isCloseComment=_isCloseComment;
@property(nonatomic) unsigned long long reportScene; // @synthesize reportScene=_reportScene;
@property(nonatomic) unsigned long long preFetchNextPageCount; // @synthesize preFetchNextPageCount=_preFetchNextPageCount;
@property(nonatomic) _Bool isLoadingComment; // @synthesize isLoadingComment=_isLoadingComment;
@property(nonatomic) unsigned long long viewScene; // @synthesize viewScene=_viewScene;
@property(copy, nonatomic) NSString *lastVCName; // @synthesize lastVCName=_lastVCName;
@property(nonatomic) _Bool shouldShowAuthenticationTips; // @synthesize shouldShowAuthenticationTips=_shouldShowAuthenticationTips;
@property(nonatomic) _Bool downContinue; // @synthesize downContinue=_downContinue;
@property(nonatomic) _Bool upContinue; // @synthesize upContinue=_upContinue;
@property(retain, nonatomic) NSMutableDictionary *heightDict; // @synthesize heightDict=_heightDict;
@property(readonly, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) _Bool hasFetchCGIData; // @synthesize hasFetchCGIData=_hasFetchCGIData;
@property(nonatomic) _Bool shouldShowHightlightComment; // @synthesize shouldShowHightlightComment=_shouldShowHightlightComment;
@property(nonatomic) __weak id <WCCommentDetailViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCCommentObject *commentObject; // @synthesize commentObject=_commentObject;
@property(retain, nonatomic) NSMutableArray *allComments; // @synthesize allComments=_allComments;
@property(nonatomic) unsigned long long refCommentID; // @synthesize refCommentID=_refCommentID;
- (void)didCommitPastedArray;
- (void)cleanPastedTextArray;
- (void)addPastedText:(id)arg1;
- (id)commentIdentityNickname;
- (unsigned long long)getCommentIdentityType;
- (void)updateCommentIdentityType:(unsigned long long)arg1;
- (void)updateReplyScene:(unsigned long long)arg1;
- (void)onFinderDataItemPostingCommentFailBySpecialError:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (void)onCommentLikeStatusChanged:(id)arg1 entityId:(id)arg2;
- (void)commentDataService:(id)arg1 onCommentEntityDeleted:(id)arg2;
- (void)commentDataService:(id)arg1 onPostSubCommentFail:(id)arg2 entityId:(id)arg3 rootCommetnId:(unsigned long long)arg4 retCode:(int)arg5;
- (void)commentDataService:(id)arg1 onPostSubCommentSuccessfully:(id)arg2 entityId:(id)arg3 rootCommetnId:(unsigned long long)arg4;
- (void)commentDataService:(id)arg1 onPostSubComment:(id)arg2 entityId:(id)arg3 rootCommetnId:(unsigned long long)arg4;
- (void)commentDataSErvice:(id)arg1 onCommentPostFail:(id)arg2 entityId:(id)arg3;
- (void)commentDataSErvice:(id)arg1 onCommentPostSuccessfully:(id)arg2 entityId:(id)arg3;
- (void)commentDataService:(id)arg1 onPostComment:(id)arg2 entityId:(id)arg3;
- (long long)getPostCommentIndexWithComment:(id)arg1;
- (void)showSubCommentListWithSection:(unsigned long long)arg1;
- (id)cacheCommentWithCommentID:(unsigned long long)arg1 wrappedTextHeight:(double)arg2 fullTextHeight:(double)arg3;
- (id)heightModelWithCommentID:(unsigned long long)arg1;
- (void)clickCommentRefcontentFullTextAction:(id)arg1 commentID:(unsigned long long)arg2 isExpand:(_Bool)arg3;
- (void)clickCommentFullTextAction:(id)arg1 commentID:(unsigned long long)arg2 isExpand:(_Bool)arg3;
- (void)sendLikeOrDislikeRequsetWithFlag:(_Bool)arg1 isDislike:(_Bool)arg2 commentItem:(id)arg3;
- (void)clickCommentLikeAction:(id)arg1;
- (void)clickCommentDisLikeAction:(id)arg1;
- (id)calDisplayNameWithCommentDidsplayName:(id)arg1;
- (void)calCommentDisplayNameWithCommentArray:(id)arg1;
- (void)defineCommentsByFriend:(id)arg1;
- (void)retryPostCommentWithComment:(id)arg1 rootCommentID:(unsigned long long)arg2;
- (id)createCommentWithContent:(id)arg1 mentionArray:(id)arg2;
- (void)deleteComment:(id)arg1 rootCommentID:(unsigned long long)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (_Bool)privateRootComment:(unsigned long long)arg1;
- (void)privateDeleteComment:(id)arg1;
- (unsigned long long)getIndexWithRootCommentID:(unsigned long long)arg1;
- (id)getSectionViewModelWithRootCommentID:(unsigned long long)arg1;
- (id)getCommentAtIndexPath:(id)arg1;
- (id)getCommentAtSection:(unsigned long long)arg1;
- (void)replyWithSubComment:(id)arg1;
- (void)replayComment:(id)arg1 repalyStr:(id)arg2 rootCommentID:(unsigned long long)arg3 mentionArray:(id)arg4;
- (void)postCommentWithComment:(id)arg1;
- (void)updateMentionArray:(id)arg1;
- (void)postComment:(id)arg1 mentionArray:(id)arg2;
- (void)requestSubCommentWithRootCommentID:(unsigned long long)arg1 direction:(int)arg2;
- (void)requestNextPageCommentData;
- (void)fetchCommentPageIsFirstPage:(_Bool)arg1 direction:(int)arg2;
- (id)generateUniCommentDataService;
- (id)generateFinderCommentDataService;
- (id)generateDataService;
- (void)clearShowHightlightComment;
- (void)refreshLatestCommentData;
- (void)requestFirstPageCommentData;
- (id)createCommentSectionViewModelArrayWithComments:(id)arg1 isFirstPage:(_Bool)arg2;
- (void)fetchLoaclCommentData;
- (id)commentObjectId;
- (unsigned long long)totalCommentCount;
- (id)initWithCommentObject:(id)arg1 scene:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

