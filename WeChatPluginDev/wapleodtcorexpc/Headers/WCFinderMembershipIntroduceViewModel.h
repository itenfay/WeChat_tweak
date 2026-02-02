//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, NSMutableSet, NSString, WCFinderContact, WCFinderMemberShipIntroducePushParams, WCFinderMemberShipZoneIntroduceHeaderData;
@protocol WCFinderMembershipIntroduceViewModelDelegate;

@interface WCFinderMembershipIntroduceViewModel
{
    _Bool _isPreviewMode;
    _Bool _isBlocked;
    id <WCFinderMembershipIntroduceViewModelDelegate> _delegate;
    WCFinderMemberShipZoneIntroduceHeaderData *_headerData;
    WCFinderMemberShipIntroducePushParams *_params;
    WCFinderContact *_contact;
    unsigned long long _memberShipStatus;
    unsigned long long _unsubscribeMsId;
    NSString *_wecoinProductId;
    ForwardMessageLogicController *_forwardLogic;
    unsigned long long _visitorStatus;
    NSMutableSet *_tidContainSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *tidContainSet; // @synthesize tidContainSet=_tidContainSet;
@property(nonatomic) unsigned long long visitorStatus; // @synthesize visitorStatus=_visitorStatus;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(nonatomic) _Bool isBlocked; // @synthesize isBlocked=_isBlocked;
@property(nonatomic) _Bool isPreviewMode; // @synthesize isPreviewMode=_isPreviewMode;
@property(copy, nonatomic) NSString *wecoinProductId; // @synthesize wecoinProductId=_wecoinProductId;
@property(nonatomic) unsigned long long unsubscribeMsId; // @synthesize unsubscribeMsId=_unsubscribeMsId;
@property(nonatomic) unsigned long long memberShipStatus; // @synthesize memberShipStatus=_memberShipStatus;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) WCFinderMemberShipIntroducePushParams *params; // @synthesize params=_params;
@property(retain, nonatomic) WCFinderMemberShipZoneIntroduceHeaderData *headerData; // @synthesize headerData=_headerData;
@property(nonatomic) __weak id <WCFinderMembershipIntroduceViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int profileEnterType;
@property(readonly, nonatomic) _Bool isAuthorPerspective;
- (void)handleLiveNoticeForUser:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (id)transformPreviewInfoToMediaWrap:(id)arg1;
- (id)transformFinderDataItemToContentVM:(id)arg1 uiModel:(_Bool)arg2;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)shareNameCardToFriend;
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

