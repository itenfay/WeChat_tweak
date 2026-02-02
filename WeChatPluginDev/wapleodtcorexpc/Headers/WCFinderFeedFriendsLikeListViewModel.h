//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSMutableArray, NSMutableSet, NSString, WCFinderDataItem;
@protocol WCFinderFeedFriendsLikeListViewModelDelegate;

@interface WCFinderFeedFriendsLikeListViewModel
{
    _Bool _continueFlag;
    int _finderObjectType;
    int _reportScene;
    unsigned long long _friendsLikeTotalCount;
    NSMutableArray *_friendsLikeInfoArray;
    id <WCFinderFeedFriendsLikeListViewModelDelegate> _delegate;
    NSString *_objectID;
    NSString *_nonceID;
    unsigned long long _fetchScene;
    NSMutableSet *_likeIdSet;
    NSData *_lastBuffer;
    WCFinderDataItem *_dataItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSMutableSet *likeIdSet; // @synthesize likeIdSet=_likeIdSet;
@property(nonatomic) int reportScene; // @synthesize reportScene=_reportScene;
@property(nonatomic) unsigned long long fetchScene; // @synthesize fetchScene=_fetchScene;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(nonatomic) int finderObjectType; // @synthesize finderObjectType=_finderObjectType;
@property(nonatomic) __weak id <WCFinderFeedFriendsLikeListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *friendsLikeInfoArray; // @synthesize friendsLikeInfoArray=_friendsLikeInfoArray;
@property(nonatomic) unsigned long long friendsLikeTotalCount; // @synthesize friendsLikeTotalCount=_friendsLikeTotalCount;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
- (void)onFinderFeedLocalFriendsLikeListDataUpdateByKeyExtension:(id)arg1;
- (void)onFinderFeedFriendsLikeStatusChangedWithObjectID:(id)arg1 index:(unsigned long long)arg2 likeStatus:(_Bool)arg3;
- (unsigned long long)likeInfoIndexWithWXUsername:(id)arg1;
- (id)deafultTitleFormatString;
@property(readonly, nonatomic) NSString *titleFormatString;
- (void)notifyAddedRefuseFriends;
- (id)convertFinderLikeInfoToFinderComment:(id)arg1;
- (void)fetchFriendsLikeInfoIsFirstPage:(_Bool)arg1;
- (void)friendsLikeDoLikeWithIndex:(unsigned long long)arg1 doLike:(_Bool)arg2;
- (void)friendsLikeOptionWithObjectID:(id)arg1 index:(unsigned long long)arg2 optionType:(unsigned long long)arg3;
- (void)fetchNextFriendsLikeInfo;
- (void)fetchFirstFriendsLikeInfo;
- (void)getLocalFriendsLikeInfo;
- (id)initWithDataItem:(id)arg1 feedLikedListScene:(unsigned long long)arg2 reportScene:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

