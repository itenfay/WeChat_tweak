//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableSet, WCFinderContact, WCFinderFeedContentVM;
@protocol WCFinderFeedFavListViewModelDelegate;

@interface WCFinderFeedFavListViewModel : NSObject
{
    _Bool _isFetchNetWork;
    _Bool _continueFlag;
    _Bool _highlightShowed;
    long long _totalCount;
    unsigned long long _privateLikeCount;
    unsigned long long _snsPrivateLikeCount;
    unsigned long long _commentPrivateLikeCount;
    NSMutableArray *_favInfoArray;
    id <WCFinderFeedFavListViewModelDelegate> _delegate;
    WCFinderFeedContentVM *_contentVM;
    NSData *_lastBuff;
    NSMutableSet *_favIDSet;
    unsigned long long _commentMaxDisplayNameCount;
    WCFinderContact *_contact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(nonatomic) unsigned long long commentMaxDisplayNameCount; // @synthesize commentMaxDisplayNameCount=_commentMaxDisplayNameCount;
@property(retain, nonatomic) NSMutableSet *favIDSet; // @synthesize favIDSet=_favIDSet;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(nonatomic) _Bool highlightShowed; // @synthesize highlightShowed=_highlightShowed;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) __weak id <WCFinderFeedFavListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *favInfoArray; // @synthesize favInfoArray=_favInfoArray;
@property(nonatomic) unsigned long long commentPrivateLikeCount; // @synthesize commentPrivateLikeCount=_commentPrivateLikeCount;
@property(nonatomic) unsigned long long snsPrivateLikeCount; // @synthesize snsPrivateLikeCount=_snsPrivateLikeCount;
@property(nonatomic) unsigned long long privateLikeCount; // @synthesize privateLikeCount=_privateLikeCount;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(nonatomic) _Bool isFetchNetWork; // @synthesize isFetchNetWork=_isFetchNetWork;
- (void)addToBlackList:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)calDisplayNameWithCommentDidsplayName:(id)arg1;
- (void)setDisplayNameWithFavInfo:(id)arg1;
- (id)likeCountDescriptionText;
- (id)likeCountTipsText;
- (void)fetchMoreFavInfo;
- (id)initWithContentVM:(id)arg1;

@end

