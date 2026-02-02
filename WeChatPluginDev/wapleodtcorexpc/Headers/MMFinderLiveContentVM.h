//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FeedsPreviewJoinLiveMultiStyleInfo_ManueTriggerJoinLive, FinderLiveAppMsgLiveRewardInfo, FinderLiveGuideFollowAdInfo, FinderObjectAdvertisementInfo, ForwardMessageLogicController, MMFinderLiveFeedTransferLogic, MMFinderLiveNotifyBannerReportInfo, MMFinderRefSessionBufferKey, MMLiveEnterRoomActionModel, NSMutableArray, NSString, SessionForwardRecordLogic, SharePreConfirmSheetView, SharePreConfirmView, WCFinderContact, WCFinderDataItem, WCFinderFullShareListTemplatePlugin, WCFinderShareEntranceMessageInfo;

@interface MMFinderLiveContentVM : NSObject
{
    _Bool _isRead;
    _Bool _canNotRouteReplayView;
    _Bool _joinTeamStatusChanged;
    _Bool _assumeReplayAndGoToStopgap;
    _Bool _isConnectMicEnter;
    _Bool _useABRCfg;
    _Bool _disableInteractiveToMinimizeWindow;
    _Bool _isCertificateType;
    unsigned int _selectiveGoQrScenario;
    WCFinderDataItem *_dataItem;
    WCFinderContact *_contact;
    NSString *_sessionExtraKey;
    NSString *_customTransitionKey;
    unsigned long long _refObjectID;
    MMFinderRefSessionBufferKey *_refSessionBufferKey;
    NSString *_finderForwardSource;
    NSString *_tmpEntryScene;
    NSString *_srcUrl;
    NSString *_sourceLiteAppId;
    WCFinderFullShareListTemplatePlugin *_jsapiPlugin;
    id _userInfo;
    MMLiveEnterRoomActionModel *_enterActionModel;
    FinderLiveAppMsgLiveRewardInfo *_rewardInfo;
    NSString *_liveReplayEntryType;
    MMFinderLiveNotifyBannerReportInfo *_notifyBannerReportInfo;
    NSString *_entranceQRCodeURL;
    unsigned long long _adFlag;
    FinderObjectAdvertisementInfo *_adInfo;
    unsigned long long _shoppingProductId;
    FeedsPreviewJoinLiveMultiStyleInfo_ManueTriggerJoinLive *_feedStreamJoinLiveStyleInfo;
    MMFinderLiveFeedTransferLogic *_transferCtx;
    unsigned long long _fromSource;
    NSMutableArray *_guideAdInfos;
    FinderLiveGuideFollowAdInfo *_followGuideInfo;
    NSString *_notifyReportExtInfo;
    WCFinderShareEntranceMessageInfo *_entranceMessageInfo;
    unsigned long long _enterSessionId;
    NSString *_instantDiscountActivityKey;
    ForwardMessageLogicController *_forwardLogic;
    SharePreConfirmView *_sharePreConfirmView;
    SharePreConfirmSheetView *_sharePreConfirmSheetView;
    SessionForwardRecordLogic *_forwardRecordLogic;
    unsigned long long _temporaryObjectId;
    NSString *_temporaryNonceId;
}

+ (id)contentVMWithDataItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *temporaryNonceId; // @synthesize temporaryNonceId=_temporaryNonceId;
@property(nonatomic) unsigned long long temporaryObjectId; // @synthesize temporaryObjectId=_temporaryObjectId;
@property(nonatomic) _Bool isCertificateType; // @synthesize isCertificateType=_isCertificateType;
@property(retain, nonatomic) SessionForwardRecordLogic *forwardRecordLogic; // @synthesize forwardRecordLogic=_forwardRecordLogic;
@property(retain, nonatomic) SharePreConfirmSheetView *sharePreConfirmSheetView; // @synthesize sharePreConfirmSheetView=_sharePreConfirmSheetView;
@property(retain, nonatomic) SharePreConfirmView *sharePreConfirmView; // @synthesize sharePreConfirmView=_sharePreConfirmView;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(nonatomic) _Bool disableInteractiveToMinimizeWindow; // @synthesize disableInteractiveToMinimizeWindow=_disableInteractiveToMinimizeWindow;
@property(nonatomic) _Bool useABRCfg; // @synthesize useABRCfg=_useABRCfg;
@property(copy, nonatomic) NSString *instantDiscountActivityKey; // @synthesize instantDiscountActivityKey=_instantDiscountActivityKey;
@property(nonatomic) unsigned long long enterSessionId; // @synthesize enterSessionId=_enterSessionId;
@property(retain, nonatomic) WCFinderShareEntranceMessageInfo *entranceMessageInfo; // @synthesize entranceMessageInfo=_entranceMessageInfo;
@property(retain, nonatomic) NSString *notifyReportExtInfo; // @synthesize notifyReportExtInfo=_notifyReportExtInfo;
@property(retain, nonatomic) FinderLiveGuideFollowAdInfo *followGuideInfo; // @synthesize followGuideInfo=_followGuideInfo;
@property(retain, nonatomic) NSMutableArray *guideAdInfos; // @synthesize guideAdInfos=_guideAdInfos;
@property(nonatomic) unsigned long long fromSource; // @synthesize fromSource=_fromSource;
@property(retain, nonatomic) MMFinderLiveFeedTransferLogic *transferCtx; // @synthesize transferCtx=_transferCtx;
@property(retain, nonatomic) FeedsPreviewJoinLiveMultiStyleInfo_ManueTriggerJoinLive *feedStreamJoinLiveStyleInfo; // @synthesize feedStreamJoinLiveStyleInfo=_feedStreamJoinLiveStyleInfo;
@property(nonatomic) unsigned long long shoppingProductId; // @synthesize shoppingProductId=_shoppingProductId;
@property(retain, nonatomic) FinderObjectAdvertisementInfo *adInfo; // @synthesize adInfo=_adInfo;
@property(nonatomic) unsigned long long adFlag; // @synthesize adFlag=_adFlag;
@property(copy, nonatomic) NSString *entranceQRCodeURL; // @synthesize entranceQRCodeURL=_entranceQRCodeURL;
@property(nonatomic) unsigned int selectiveGoQrScenario; // @synthesize selectiveGoQrScenario=_selectiveGoQrScenario;
@property(retain, nonatomic) MMFinderLiveNotifyBannerReportInfo *notifyBannerReportInfo; // @synthesize notifyBannerReportInfo=_notifyBannerReportInfo;
@property(nonatomic) _Bool isConnectMicEnter; // @synthesize isConnectMicEnter=_isConnectMicEnter;
@property(retain, nonatomic) NSString *liveReplayEntryType; // @synthesize liveReplayEntryType=_liveReplayEntryType;
@property(retain, nonatomic) FinderLiveAppMsgLiveRewardInfo *rewardInfo; // @synthesize rewardInfo=_rewardInfo;
@property(nonatomic) _Bool assumeReplayAndGoToStopgap; // @synthesize assumeReplayAndGoToStopgap=_assumeReplayAndGoToStopgap;
@property(nonatomic) _Bool joinTeamStatusChanged; // @synthesize joinTeamStatusChanged=_joinTeamStatusChanged;
@property(retain, nonatomic) MMLiveEnterRoomActionModel *enterActionModel; // @synthesize enterActionModel=_enterActionModel;
@property(nonatomic) _Bool canNotRouteReplayView; // @synthesize canNotRouteReplayView=_canNotRouteReplayView;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) WCFinderFullShareListTemplatePlugin *jsapiPlugin; // @synthesize jsapiPlugin=_jsapiPlugin;
@property(retain, nonatomic) NSString *sourceLiteAppId; // @synthesize sourceLiteAppId=_sourceLiteAppId;
@property(retain, nonatomic) NSString *srcUrl; // @synthesize srcUrl=_srcUrl;
@property(retain, nonatomic) NSString *tmpEntryScene; // @synthesize tmpEntryScene=_tmpEntryScene;
@property(retain, nonatomic) NSString *finderForwardSource; // @synthesize finderForwardSource=_finderForwardSource;
@property(retain, nonatomic) MMFinderRefSessionBufferKey *refSessionBufferKey; // @synthesize refSessionBufferKey=_refSessionBufferKey;
@property(nonatomic) unsigned long long refObjectID; // @synthesize refObjectID=_refObjectID;
@property(retain, nonatomic) NSString *customTransitionKey; // @synthesize customTransitionKey=_customTransitionKey;
@property(nonatomic) _Bool isRead; // @synthesize isRead=_isRead;
@property(retain, nonatomic) NSString *sessionExtraKey; // @synthesize sessionExtraKey=_sessionExtraKey;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)OnSharePreConfirmSheetViewClose:(id)arg1;
- (void)OnSharePreConfirmSheetViewCancel:(id)arg1;
- (void)OnSharePreConfirmSheetViewSend:(id)arg1;
- (void)OnSharePreConfirmViewCancel:(id)arg1;
- (void)OnSharePreConfirmViewSend:(id)arg1;
- (void)onTextStatePublishCancelled;
- (void)onTextStatePublished;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)forwardViewController:(id)arg1 didFinishForwardingWithDataItem:(id)arg2;
- (void)forwardViewControllerDidCancel:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)shareLiveAndGoodsToFriends:(id)arg1;
- (id)getFinderShareToFriendMessageWrapWithExtra:(id)arg1 shareScene:(long long)arg2;
- (void)shareToFriend:(id)arg1 fromVC:(id)arg2 withShareScene:(long long)arg3;
- (void)shareToTextStateFromVC:(id)arg1 verifyInfo:(id)arg2 textStatusIconId:(id)arg3 liveBanner:(_Bool)arg4;
- (void)shareToTextStateFromVC:(id)arg1 verifyInfo:(id)arg2 textStatusIconId:(id)arg3;
- (void)shareToTextStateFromVC:(id)arg1 verifyInfo:(id)arg2;
- (void)shareToMomentFromVC:(id)arg1;
- (void)shareToMoment;
- (void)liveShareToMomentFromVC:(id)arg1 shareScene:(long long)arg2;
- (void)shareToFriendWithParams:(id)arg1;
- (void)copyExtraInfoFrom:(id)arg1;
- (unsigned int)currentContentInnerAppMsgType;
- (_Bool)isOpenLiveQuickShare;
- (_Bool)isSelfPrivate;
- (_Bool)disableForwardByPrivateAccount;
@property(readonly, nonatomic) _Bool needPlayOpenScreenAd;
@property(readonly, nonatomic) NSString *nonceId;
@property(readonly, nonatomic) NSString *tid;
@property(readonly, nonatomic) unsigned long long objectID;
- (void)clearJSApiInfo;
- (void)dealloc;
- (id)initWithContact:(id)arg1 objectId:(unsigned long long)arg2 nonceId:(id)arg3;
- (id)initWithContact:(id)arg1;
- (id)initWithDataItem:(id)arg1 sessionExtraKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

