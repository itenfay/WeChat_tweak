//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableSet, NSString, WCFinderContact;
@protocol WCFinderFeedLikeListViewModelDelegate;

@interface WCFinderFeedLikeListViewModel : NSObject
{
    _Bool _isFetchNetWork;
    _Bool _continueFlag;
    _Bool _shouldShowLikeGuide;
    _Bool _isLike;
    _Bool _highlightShowed;
    long long _totalCount;
    NSMutableArray *_likeInfoArray;
    id <WCFinderFeedLikeListViewModelDelegate> _delegate;
    NSString *_tid;
    NSString *_nonceID;
    NSData *_lastBuff;
    NSMutableSet *_likeIDSet;
    unsigned long long _commentMaxDisplayNameCount;
    WCFinderContact *_contact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(nonatomic) unsigned long long commentMaxDisplayNameCount; // @synthesize commentMaxDisplayNameCount=_commentMaxDisplayNameCount;
@property(retain, nonatomic) NSMutableSet *likeIDSet; // @synthesize likeIDSet=_likeIDSet;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) _Bool highlightShowed; // @synthesize highlightShowed=_highlightShowed;
@property(nonatomic) __weak id <WCFinderFeedLikeListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isLike; // @synthesize isLike=_isLike;
@property(retain, nonatomic) NSMutableArray *likeInfoArray; // @synthesize likeInfoArray=_likeInfoArray;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) _Bool shouldShowLikeGuide; // @synthesize shouldShowLikeGuide=_shouldShowLikeGuide;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(nonatomic) _Bool isFetchNetWork; // @synthesize isFetchNetWork=_isFetchNetWork;
- (id)calDisplayNameWithCommentDidsplayName:(id)arg1;
- (void)onFinderDataItemIsLikedUpdateByKeyExtention:(id)arg1;
- (void)changeFeedLikeStatus;
- (void)addToBlackList:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)fetchMoreLikeInfo;
- (id)likeUsernameSet;
- (void)setDisplayNameWithLikeInfo:(id)arg1;
- (id)init;
- (id)initWithTid:(id)arg1 nonceID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

