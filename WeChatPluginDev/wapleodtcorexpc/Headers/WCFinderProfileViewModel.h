//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableSet, NSString, WCFinderContact, WCFinderFeedArray, WCFinderProfileADPlugin, WCFinderProfileFeedManager, WCFinderShareEntranceMessageInfo;
@protocol WCFinderProfileDataFetcher, WCFinderProfileViewModelProtocol;

@interface WCFinderProfileViewModel : NSObject
{
    _Bool _isAuthorPerspective;
    int _commentScene;
    int _customCommentScene;
    id <WCFinderProfileViewModelProtocol> _delegate;
    WCFinderContact *_contact;
    NSString *_username;
    unsigned long long _reportScene;
    unsigned long long _refreshTime;
    NSString *_fromLiveId;
    NSString *_fromScene;
    unsigned long long _fromEntranceType;
    NSDictionary *_additionalClientUdfKV;
    long long _initOffset;
    id <WCFinderProfileDataFetcher> _dataFetcher;
    WCFinderFeedArray *_feedArray;
    WCFinderProfileFeedManager *_feedManager;
    WCFinderShareEntranceMessageInfo *_entranceMessageInfo;
    unsigned long long _entryScene;
    NSMutableSet *_lastStreamItemIds;
    WCFinderProfileADPlugin *_adPlugin;
}

+ (int)displayCommentSceneForIsAuthor:(_Bool)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderProfileADPlugin *adPlugin; // @synthesize adPlugin=_adPlugin;
@property(retain, nonatomic) NSMutableSet *lastStreamItemIds; // @synthesize lastStreamItemIds=_lastStreamItemIds;
@property(nonatomic) unsigned long long entryScene; // @synthesize entryScene=_entryScene;
@property(retain, nonatomic) WCFinderShareEntranceMessageInfo *entranceMessageInfo; // @synthesize entranceMessageInfo=_entranceMessageInfo;
@property(retain, nonatomic) WCFinderProfileFeedManager *feedManager; // @synthesize feedManager=_feedManager;
@property(retain, nonatomic) WCFinderFeedArray *feedArray; // @synthesize feedArray=_feedArray;
@property(retain, nonatomic) id <WCFinderProfileDataFetcher> dataFetcher; // @synthesize dataFetcher=_dataFetcher;
@property(nonatomic) long long initOffset; // @synthesize initOffset=_initOffset;
@property(copy, nonatomic) NSDictionary *additionalClientUdfKV; // @synthesize additionalClientUdfKV=_additionalClientUdfKV;
@property(nonatomic) int customCommentScene; // @synthesize customCommentScene=_customCommentScene;
@property(nonatomic) unsigned long long fromEntranceType; // @synthesize fromEntranceType=_fromEntranceType;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(copy, nonatomic) NSString *fromScene; // @synthesize fromScene=_fromScene;
@property(copy, nonatomic) NSString *fromLiveId; // @synthesize fromLiveId=_fromLiveId;
@property(readonly, nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) unsigned long long reportScene; // @synthesize reportScene=_reportScene;
@property(nonatomic) _Bool isAuthorPerspective; // @synthesize isAuthorPerspective=_isAuthorPerspective;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <WCFinderProfileViewModelProtocol> delegate; // @synthesize delegate=_delegate;
- (void)removeAdFeedWithTid:(id)arg1;
- (_Bool)removeUnexposedAdFeedIfNeeded:(id)arg1;
- (void)insertAdFeedAtPosIfNeeded:(unsigned long long)arg1;
- (unsigned long long)_calAdFeedInsertPos;
- (id)mapDataItems:(id)arg1;
- (id)formatStickyTopFailedErrorMessage:(long long)arg1 serverMsg:(id)arg2;
- (void)changeStickyTopState:(id)arg1 isStickTop:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)updateContact:(id)arg1;
- (void)onFinderContactFollowStatusUpdateFailure:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)onFinderContactUpdate:(id)arg1;
- (void)onFinderDataItemDeleteFromScene:(int)arg1 tid:(id)arg2 toastWording:(id)arg3;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)deleteFeedWithTid:(id)arg1;
- (void)requestPrePageData;
- (void)requestNextPageData;
@property(readonly, nonatomic) _Bool shouldHiddenContentForPrivateAccount;
- (id)pullingState;
- (id)loadingState;
- (void)setupCreatorCenterEntranceInfo;
- (void)dealloc;
- (id)initWithUsername:(id)arg1 fetcher:(id)arg2 feedArray:(id)arg3 isAuthor:(_Bool)arg4 adPlugin:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

