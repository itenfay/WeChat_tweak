//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, NSMutableArray, NSString, WCFinderContact, WCFinderMemberShipActivityViewModel, WCFinderMemberShipDraftViewModel, WCFinderMemberShipFeedTabViewModel, WCFinderMemberShipHomePageViewModel, WCFinderMemberShipPlaybackTabViewModel, WCFinderMemberShipZoneHeaderData, WCFinderMemberShipZonePushParams;
@protocol WCFinderMemberShipZoneViewModelDelegate;

@interface WCFinderMemberShipZoneViewModel
{
    _Bool _isBlocked;
    NSMutableArray *_tabModels;
    id <WCFinderMemberShipZoneViewModelDelegate> _delegate;
    WCFinderMemberShipZonePushParams *_params;
    WCFinderMemberShipZoneHeaderData *_headerData;
    WCFinderContact *_contact;
    unsigned long long _memberShipStatus;
    unsigned long long _unsubscribeMsId;
    ForwardMessageLogicController *_forwardLogic;
    unsigned long long _visitorStatus;
    WCFinderMemberShipFeedTabViewModel *_feedTabViewModel;
    WCFinderMemberShipPlaybackTabViewModel *_playbackTabViewModel;
    WCFinderMemberShipDraftViewModel *_draftViewModel;
    WCFinderMemberShipActivityViewModel *_activityViewModel;
    WCFinderMemberShipHomePageViewModel *_homePageViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMemberShipHomePageViewModel *homePageViewModel; // @synthesize homePageViewModel=_homePageViewModel;
@property(retain, nonatomic) WCFinderMemberShipActivityViewModel *activityViewModel; // @synthesize activityViewModel=_activityViewModel;
@property(retain, nonatomic) WCFinderMemberShipDraftViewModel *draftViewModel; // @synthesize draftViewModel=_draftViewModel;
@property(retain, nonatomic) WCFinderMemberShipPlaybackTabViewModel *playbackTabViewModel; // @synthesize playbackTabViewModel=_playbackTabViewModel;
@property(retain, nonatomic) WCFinderMemberShipFeedTabViewModel *feedTabViewModel; // @synthesize feedTabViewModel=_feedTabViewModel;
@property(nonatomic) unsigned long long visitorStatus; // @synthesize visitorStatus=_visitorStatus;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(nonatomic) _Bool isBlocked; // @synthesize isBlocked=_isBlocked;
@property(nonatomic) unsigned long long unsubscribeMsId; // @synthesize unsubscribeMsId=_unsubscribeMsId;
@property(nonatomic) unsigned long long memberShipStatus; // @synthesize memberShipStatus=_memberShipStatus;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) WCFinderMemberShipZoneHeaderData *headerData; // @synthesize headerData=_headerData;
@property(retain, nonatomic) WCFinderMemberShipZonePushParams *params; // @synthesize params=_params;
@property(nonatomic) __weak id <WCFinderMemberShipZoneViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *tabModels; // @synthesize tabModels=_tabModels;
- (void)requestSearchData:(unsigned long long)arg1;
- (void)finderMemberShipZoneDraftTabDataChanged;
- (void)finderMemberShipZoneDraftTabInsertItemAtIdx:(long long)arg1;
- (void)finderMemberShipZoneDraftTabViewFetchListSuc;
- (void)finderMemberShipZonePlaybackTabViewFetchListSuc;
- (void)finderMemberShipZoneFeedTabViewFetchListSuc;
@property(readonly, nonatomic) int currentCommentScene;
@property(readonly, nonatomic) unsigned int profileEnterType;
@property(readonly, nonatomic) _Bool isAuthorPerspective;
- (void)checkShouldShowConcertTicketAfterFirstReservation:(id)arg1;
- (void)handleLiveNoticeForUser:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)shareNameCardToFriend;
- (void)removeDraftTabModels;
- (unsigned long long)getHomePageTabIndex;
- (long long)getDiscussionTabDataCount;
- (unsigned long long)getDiscussionTabIndex;
- (unsigned long long)getVideoTabIndex;
- (unsigned long long)getPlaybackTabIndex;
- (unsigned long long)getDraftTabIndex;
- (void)onGetDetailInfo:(id)arg1;
- (void)getRemoteDatas;
- (void)getLocalDatas;
- (id)initWithParams:(id)arg1;
- (id)blockDescStr;
- (id)blockTitleStr;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

