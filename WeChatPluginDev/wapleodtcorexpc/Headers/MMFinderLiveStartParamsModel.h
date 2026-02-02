//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderContactLiveInfo, FinderJumpInfo, FinderLiveErrorPage, FinderLiveGuideInfo, FinderLiveModModifyLiveCoverImageResponse, FinderLivePromotionEntrance, FinderLiveStickerBubble, FinderLiveStickerFont, FinderLiveTagInfo, FinderLiveUserAttrUserSetting, LiveRoomImg, LiveWeappJumpInfo, MMFinderLiveContentVM, MMLiveBeautyResourcesDescriptor, NSArray, NSData, NSMutableArray, NSString, SongListInfo, SpamRisk, WCFinderCreateLivePrepareResponseModel, WCFinderStarterLiveViewModel;

@interface MMFinderLiveStartParamsModel : NSObject
{
    unsigned int _userFlag;
    unsigned int _liveGlobalFlag;
    unsigned int _maxVisibilityChatroomCount;
    unsigned int _maxVisibilityFriendContactCount;
    unsigned int _maxRedPacketChatroomCount;
    unsigned int _shoppingNotAvailableFlag;
    unsigned int _randomConnectMicWaitTime;
    unsigned int _anchorPushMode;
    NSArray *_liveModeControlInfoArray;
    NSString *_finderUsername;
    NSArray *_liveNoticeList;
    MMFinderLiveContentVM *_recoverVM;
    NSArray *_allTags;
    FinderLiveTagInfo *_currentTag;
    NSMutableArray *_visibilityFileList;
    long long _redPacketChatroomSelectionStyle;
    SpamRisk *_spamJumpInfo;
    NSString *_anchorUsername;
    FinderContactLiveInfo *_contactLiveInfo;
    FinderLiveUserAttrUserSetting *_userSetting;
    SongListInfo *_songListInfo;
    LiveWeappJumpInfo *_weappJumpInfo;
    FinderLivePromotionEntrance *_promotionEntrance;
    LiveRoomImg *_liveRoomImages;
    WCFinderStarterLiveViewModel *_starterViewModel;
    FinderJumpInfo *_creatorCenterEntrance;
    FinderJumpInfo *_creatorCenterEntrance2;
    FinderLiveErrorPage *_createLiveErrorPage;
    FinderLiveModModifyLiveCoverImageResponse *_liveCoverImgModifyInfo;
    NSData *_createLiveToken;
    FinderLiveStickerBubble *_stickerTextTemplatesEntities;
    FinderLiveStickerFont *_stickerTextTemplateFontsEntities;
    MMLiveBeautyResourcesDescriptor *_beautyResourcesDescriptor;
    NSArray *_resourcePackages;
    FinderLiveGuideInfo *_liveGuideInfo;
    WCFinderCreateLivePrepareResponseModel *_responseModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCreateLivePrepareResponseModel *responseModel; // @synthesize responseModel=_responseModel;
@property(retain, nonatomic) FinderLiveGuideInfo *liveGuideInfo; // @synthesize liveGuideInfo=_liveGuideInfo;
@property(retain, nonatomic) NSArray *resourcePackages; // @synthesize resourcePackages=_resourcePackages;
@property(retain, nonatomic) MMLiveBeautyResourcesDescriptor *beautyResourcesDescriptor; // @synthesize beautyResourcesDescriptor=_beautyResourcesDescriptor;
@property(retain, nonatomic) FinderLiveStickerFont *stickerTextTemplateFontsEntities; // @synthesize stickerTextTemplateFontsEntities=_stickerTextTemplateFontsEntities;
@property(retain, nonatomic) FinderLiveStickerBubble *stickerTextTemplatesEntities; // @synthesize stickerTextTemplatesEntities=_stickerTextTemplatesEntities;
@property(retain, nonatomic) NSData *createLiveToken; // @synthesize createLiveToken=_createLiveToken;
@property(retain, nonatomic) FinderLiveModModifyLiveCoverImageResponse *liveCoverImgModifyInfo; // @synthesize liveCoverImgModifyInfo=_liveCoverImgModifyInfo;
@property(retain, nonatomic) FinderLiveErrorPage *createLiveErrorPage; // @synthesize createLiveErrorPage=_createLiveErrorPage;
@property(retain, nonatomic) FinderJumpInfo *creatorCenterEntrance2; // @synthesize creatorCenterEntrance2=_creatorCenterEntrance2;
@property(retain, nonatomic) FinderJumpInfo *creatorCenterEntrance; // @synthesize creatorCenterEntrance=_creatorCenterEntrance;
@property(nonatomic) unsigned int anchorPushMode; // @synthesize anchorPushMode=_anchorPushMode;
@property(retain, nonatomic) WCFinderStarterLiveViewModel *starterViewModel; // @synthesize starterViewModel=_starterViewModel;
@property(retain, nonatomic) LiveRoomImg *liveRoomImages; // @synthesize liveRoomImages=_liveRoomImages;
@property(retain, nonatomic) FinderLivePromotionEntrance *promotionEntrance; // @synthesize promotionEntrance=_promotionEntrance;
@property(retain, nonatomic) LiveWeappJumpInfo *weappJumpInfo; // @synthesize weappJumpInfo=_weappJumpInfo;
@property(retain, nonatomic) SongListInfo *songListInfo; // @synthesize songListInfo=_songListInfo;
@property(retain, nonatomic) FinderLiveUserAttrUserSetting *userSetting; // @synthesize userSetting=_userSetting;
@property(retain, nonatomic) FinderContactLiveInfo *contactLiveInfo; // @synthesize contactLiveInfo=_contactLiveInfo;
@property(nonatomic) unsigned int randomConnectMicWaitTime; // @synthesize randomConnectMicWaitTime=_randomConnectMicWaitTime;
@property(retain, nonatomic) NSString *anchorUsername; // @synthesize anchorUsername=_anchorUsername;
@property(nonatomic) unsigned int shoppingNotAvailableFlag; // @synthesize shoppingNotAvailableFlag=_shoppingNotAvailableFlag;
@property(retain, nonatomic) SpamRisk *spamJumpInfo; // @synthesize spamJumpInfo=_spamJumpInfo;
@property(nonatomic) long long redPacketChatroomSelectionStyle; // @synthesize redPacketChatroomSelectionStyle=_redPacketChatroomSelectionStyle;
@property(nonatomic) unsigned int maxRedPacketChatroomCount; // @synthesize maxRedPacketChatroomCount=_maxRedPacketChatroomCount;
@property(nonatomic) unsigned int maxVisibilityFriendContactCount; // @synthesize maxVisibilityFriendContactCount=_maxVisibilityFriendContactCount;
@property(nonatomic) unsigned int maxVisibilityChatroomCount; // @synthesize maxVisibilityChatroomCount=_maxVisibilityChatroomCount;
@property(retain, nonatomic) NSMutableArray *visibilityFileList; // @synthesize visibilityFileList=_visibilityFileList;
@property(retain, nonatomic) FinderLiveTagInfo *currentTag; // @synthesize currentTag=_currentTag;
@property(retain, nonatomic) NSArray *allTags; // @synthesize allTags=_allTags;
@property(nonatomic) unsigned int liveGlobalFlag; // @synthesize liveGlobalFlag=_liveGlobalFlag;
@property(nonatomic) unsigned int userFlag; // @synthesize userFlag=_userFlag;
@property(retain, nonatomic) MMFinderLiveContentVM *recoverVM; // @synthesize recoverVM=_recoverVM;
@property(retain, nonatomic) NSArray *liveNoticeList; // @synthesize liveNoticeList=_liveNoticeList;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) NSArray *liveModeControlInfoArray; // @synthesize liveModeControlInfoArray=_liveModeControlInfoArray;
- (id)initWithPrepareResponseModel:(id)arg1;

@end

