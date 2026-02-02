//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderContactLiveInfo, FinderJumpInfo, FinderLiveAnchorQuestEntrance, FinderLiveErrorPage, FinderLiveGuideInfo, FinderLiveKtvSettingsInfo, FinderLiveMicInfo, FinderLiveModModifyLiveCoverImageResponse, FinderLivePromotionEntrance, FinderLivePromptInfo, FinderLiveStickerBubble, FinderLiveStickerFont, FinderLiveTagInfo, FinderLiveUserAttrUserSetting, LiveRoomImg, LiveWeappJumpInfo, MMFinderLiveGestureCreateLivePrepareModel, MMLiveBeautyResourcesDescriptor, MMLiveKtvResourcesDescriptor, NSArray, NSData, NSMutableArray, NSString, SongListInfo, SpamRisk, WCFinderDataItem;

@interface WCFinderCreateLivePrepareResponseModel : NSObject
{
    _Bool _enableDescExtend;
    unsigned int _userFlag;
    unsigned int _liveGlobalFlag;
    unsigned int _maxVisibilityChatroomCount;
    unsigned int _maxVisibilityFriendContactCount;
    unsigned int _maxRedPacketChatroomCount;
    unsigned int _shoppingNotAvailableFlag;
    unsigned int _randomConnectMicWaitTime;
    unsigned int _anchorPushMode;
    NSArray *_liveModeControlInfoArray;
    FinderLiveMicInfo *_liveMicInfo;
    NSArray *_liveNoticeList;
    WCFinderDataItem *_recoverDataItem;
    NSArray *_fullTagInfos;
    FinderLiveTagInfo *_lastSelectTag;
    NSMutableArray *_visibilityFileList;
    long long _redPacketChatroomSelectionStyle;
    SpamRisk *_spamRiskInfo;
    NSString *_finderUsername;
    FinderContactLiveInfo *_contactLiveInfo;
    FinderLiveUserAttrUserSetting *_userSetting;
    SongListInfo *_songListInfo;
    LiveWeappJumpInfo *_weappJumpInfo;
    LiveRoomImg *_liveRoomImages;
    FinderLivePromptInfo *_promptInfo;
    FinderJumpInfo *_opPromptInfo;
    FinderLivePromotionEntrance *_promotionEntrance;
    MMFinderLiveGestureCreateLivePrepareModel *_gestureModel;
    FinderJumpInfo *_creatorCenterEntrance;
    FinderJumpInfo *_creatorCenterEntrance2;
    FinderLiveModModifyLiveCoverImageResponse *_liveCoverImgModifyInfo;
    NSData *_createLiveToken;
    FinderLiveErrorPage *_createLiveErrorPage;
    FinderLiveStickerBubble *_stickerTextTemplatesEntities;
    FinderLiveStickerFont *_stickerTextTemplateFontsEntities;
    NSArray *_resourcePackages;
    MMLiveBeautyResourcesDescriptor *_beautyResourcesDescriptor;
    FinderJumpInfo *_applyEligibilityJumpInfo;
    FinderLiveGuideInfo *_liveGuideInfo;
    MMLiveKtvResourcesDescriptor *_ktvResourcesDescriptor;
    FinderLiveKtvSettingsInfo *_ktvSettingsInfo;
    unsigned long long _liveFunctionSwitchFlags;
    FinderLiveAnchorQuestEntrance *_anchorQuestEntance;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableDescExtend; // @synthesize enableDescExtend=_enableDescExtend;
@property(retain, nonatomic) FinderLiveAnchorQuestEntrance *anchorQuestEntance; // @synthesize anchorQuestEntance=_anchorQuestEntance;
@property(nonatomic) unsigned long long liveFunctionSwitchFlags; // @synthesize liveFunctionSwitchFlags=_liveFunctionSwitchFlags;
@property(retain, nonatomic) FinderLiveKtvSettingsInfo *ktvSettingsInfo; // @synthesize ktvSettingsInfo=_ktvSettingsInfo;
@property(retain, nonatomic) MMLiveKtvResourcesDescriptor *ktvResourcesDescriptor; // @synthesize ktvResourcesDescriptor=_ktvResourcesDescriptor;
@property(retain, nonatomic) FinderLiveGuideInfo *liveGuideInfo; // @synthesize liveGuideInfo=_liveGuideInfo;
@property(retain, nonatomic) FinderJumpInfo *applyEligibilityJumpInfo; // @synthesize applyEligibilityJumpInfo=_applyEligibilityJumpInfo;
@property(retain, nonatomic) MMLiveBeautyResourcesDescriptor *beautyResourcesDescriptor; // @synthesize beautyResourcesDescriptor=_beautyResourcesDescriptor;
@property(retain, nonatomic) NSArray *resourcePackages; // @synthesize resourcePackages=_resourcePackages;
@property(retain, nonatomic) FinderLiveStickerFont *stickerTextTemplateFontsEntities; // @synthesize stickerTextTemplateFontsEntities=_stickerTextTemplateFontsEntities;
@property(retain, nonatomic) FinderLiveStickerBubble *stickerTextTemplatesEntities; // @synthesize stickerTextTemplatesEntities=_stickerTextTemplatesEntities;
@property(retain, nonatomic) FinderLiveErrorPage *createLiveErrorPage; // @synthesize createLiveErrorPage=_createLiveErrorPage;
@property(retain, nonatomic) NSData *createLiveToken; // @synthesize createLiveToken=_createLiveToken;
@property(retain, nonatomic) FinderLiveModModifyLiveCoverImageResponse *liveCoverImgModifyInfo; // @synthesize liveCoverImgModifyInfo=_liveCoverImgModifyInfo;
@property(retain, nonatomic) FinderJumpInfo *creatorCenterEntrance2; // @synthesize creatorCenterEntrance2=_creatorCenterEntrance2;
@property(retain, nonatomic) FinderJumpInfo *creatorCenterEntrance; // @synthesize creatorCenterEntrance=_creatorCenterEntrance;
@property(nonatomic) unsigned int anchorPushMode; // @synthesize anchorPushMode=_anchorPushMode;
@property(retain, nonatomic) MMFinderLiveGestureCreateLivePrepareModel *gestureModel; // @synthesize gestureModel=_gestureModel;
@property(retain, nonatomic) FinderLivePromotionEntrance *promotionEntrance; // @synthesize promotionEntrance=_promotionEntrance;
@property(retain, nonatomic) FinderJumpInfo *opPromptInfo; // @synthesize opPromptInfo=_opPromptInfo;
@property(retain, nonatomic) FinderLivePromptInfo *promptInfo; // @synthesize promptInfo=_promptInfo;
@property(retain, nonatomic) LiveRoomImg *liveRoomImages; // @synthesize liveRoomImages=_liveRoomImages;
@property(retain, nonatomic) LiveWeappJumpInfo *weappJumpInfo; // @synthesize weappJumpInfo=_weappJumpInfo;
@property(retain, nonatomic) SongListInfo *songListInfo; // @synthesize songListInfo=_songListInfo;
@property(retain, nonatomic) FinderLiveUserAttrUserSetting *userSetting; // @synthesize userSetting=_userSetting;
@property(retain, nonatomic) FinderContactLiveInfo *contactLiveInfo; // @synthesize contactLiveInfo=_contactLiveInfo;
@property(nonatomic) unsigned int randomConnectMicWaitTime; // @synthesize randomConnectMicWaitTime=_randomConnectMicWaitTime;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) unsigned int shoppingNotAvailableFlag; // @synthesize shoppingNotAvailableFlag=_shoppingNotAvailableFlag;
@property(retain, nonatomic) SpamRisk *spamRiskInfo; // @synthesize spamRiskInfo=_spamRiskInfo;
@property(nonatomic) long long redPacketChatroomSelectionStyle; // @synthesize redPacketChatroomSelectionStyle=_redPacketChatroomSelectionStyle;
@property(nonatomic) unsigned int maxRedPacketChatroomCount; // @synthesize maxRedPacketChatroomCount=_maxRedPacketChatroomCount;
@property(nonatomic) unsigned int maxVisibilityFriendContactCount; // @synthesize maxVisibilityFriendContactCount=_maxVisibilityFriendContactCount;
@property(nonatomic) unsigned int maxVisibilityChatroomCount; // @synthesize maxVisibilityChatroomCount=_maxVisibilityChatroomCount;
@property(retain, nonatomic) NSMutableArray *visibilityFileList; // @synthesize visibilityFileList=_visibilityFileList;
@property(retain, nonatomic) FinderLiveTagInfo *lastSelectTag; // @synthesize lastSelectTag=_lastSelectTag;
@property(retain, nonatomic) NSArray *fullTagInfos; // @synthesize fullTagInfos=_fullTagInfos;
@property(nonatomic) unsigned int liveGlobalFlag; // @synthesize liveGlobalFlag=_liveGlobalFlag;
@property(nonatomic) unsigned int userFlag; // @synthesize userFlag=_userFlag;
@property(retain, nonatomic) WCFinderDataItem *recoverDataItem; // @synthesize recoverDataItem=_recoverDataItem;
@property(retain, nonatomic) NSArray *liveNoticeList; // @synthesize liveNoticeList=_liveNoticeList;
@property(retain, nonatomic) FinderLiveMicInfo *liveMicInfo; // @synthesize liveMicInfo=_liveMicInfo;
@property(retain, nonatomic) NSArray *liveModeControlInfoArray; // @synthesize liveModeControlInfoArray=_liveModeControlInfoArray;

@end

