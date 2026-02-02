//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, FinderJumpInfo, FinderLiveErrorPage, FinderLiveGuideInfo, FinderLiveNoticeInfo, FinderLivePromptInfo, FinderLiveStreamDecor, FinderLiveTagInfo, MMFinderLiveAudioModeBackgroundUploadModel, MMFinderLiveCreateLotteryViewModel, MMFinderLiveTask, MMLiveTaskId, NSArray, NSData, NSMutableArray, NSString, UIImage, UIViewController, WCFinderDataItem, WCFinderLiveShareItem, WCFinderLiveStarterSwitchModeItem, WCLocationInfo;

@interface WCFinderLiveStartePublicModel : NSObject
{
    _Bool _isMemberFree;
    unsigned int _chargeUnitPriceInWecoin;
    unsigned int _trialTimeHour;
    unsigned int _trialTimeMinute;
    unsigned int _maxVisibilityChatroomCount;
    unsigned int _maxVisibilityFriendContactCount;
    int _liveMode;
    WCFinderLiveStarterSwitchModeItem *_switchModeItem;
    MMLiveTaskId *_liveTaskId;
    WCFinderDataItem *_dataItem;
    WCFinderLiveShareItem *_shareItem;
    FinderLiveNoticeInfo *_liveNoticeInfo;
    FinderLiveTagInfo *_audioTagInfo;
    FinderLiveTagInfo *_videoTagInfo;
    long long _visibilityMode;
    long long _chargeFlag;
    long long _purchaseLivePreviewType;
    NSArray *_freeOfChargeUsernameList;
    NSArray *_freeOfChargeChatroomIdList;
    NSArray *_fullFreeOfChargeContactList;
    NSArray *_selectedFreeRosterList;
    UIImage *_selfHeadImg;
    NSString *_selfHeadImgPath;
    MMFinderLiveAudioModeBackgroundUploadModel *_audioModeBackgroundUploadModel;
    NSArray *_roomContacts;
    CContact *_groupContact;
    NSArray *_visibilityFileList;
    long long _lastSelectMode;
    FinderLivePromptInfo *_promptInfo;
    FinderJumpInfo *_opPromptInfo;
    unsigned long long _action;
    FinderLiveStreamDecor *_liveDecor;
    FinderLiveErrorPage *_createLiveErrorPage;
    CDUnknownBlockType _noticeInfoUpdatedCallback;
    UIImage *_coverImageOrigin;
    UIImage *_coverImage4Vs3;
    WCLocationInfo *_poiInfo;
    NSArray *_liveNoticeList;
    FinderLiveNoticeInfo *_normalNoticeInfo;
    FinderLiveNoticeInfo *_memberNoticeInfo;
    NSMutableArray *_visibilityFileIdLists;
    NSArray *_visibilityChatRoomIdList;
    NSArray *_visibilityUsernameList;
    NSData *_spamCheckInfo;
    FinderLiveGuideInfo *_liveGuideInfo;
    MMFinderLiveCreateLotteryViewModel *_createLotteryViewModel;
    NSMutableArray *_lotteryArray;
    UIViewController *_currentStarterVC;
    unsigned long long _initialSelectAudioSubType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long initialSelectAudioSubType; // @synthesize initialSelectAudioSubType=_initialSelectAudioSubType;
@property(nonatomic) __weak UIViewController *currentStarterVC; // @synthesize currentStarterVC=_currentStarterVC;
@property(retain, nonatomic) NSMutableArray *lotteryArray; // @synthesize lotteryArray=_lotteryArray;
@property(retain, nonatomic) MMFinderLiveCreateLotteryViewModel *createLotteryViewModel; // @synthesize createLotteryViewModel=_createLotteryViewModel;
@property(retain, nonatomic) FinderLiveGuideInfo *liveGuideInfo; // @synthesize liveGuideInfo=_liveGuideInfo;
@property(retain, nonatomic) NSData *spamCheckInfo; // @synthesize spamCheckInfo=_spamCheckInfo;
@property(nonatomic) _Bool isMemberFree; // @synthesize isMemberFree=_isMemberFree;
@property(retain, nonatomic) NSArray *visibilityUsernameList; // @synthesize visibilityUsernameList=_visibilityUsernameList;
@property(retain, nonatomic) NSArray *visibilityChatRoomIdList; // @synthesize visibilityChatRoomIdList=_visibilityChatRoomIdList;
@property(retain, nonatomic) NSMutableArray *visibilityFileIdLists; // @synthesize visibilityFileIdLists=_visibilityFileIdLists;
@property(retain, nonatomic) FinderLiveNoticeInfo *memberNoticeInfo; // @synthesize memberNoticeInfo=_memberNoticeInfo;
@property(retain, nonatomic) FinderLiveNoticeInfo *normalNoticeInfo; // @synthesize normalNoticeInfo=_normalNoticeInfo;
@property(retain, nonatomic) NSArray *liveNoticeList; // @synthesize liveNoticeList=_liveNoticeList;
@property(retain, nonatomic) WCLocationInfo *poiInfo; // @synthesize poiInfo=_poiInfo;
@property(retain, nonatomic) UIImage *coverImage4Vs3; // @synthesize coverImage4Vs3=_coverImage4Vs3;
@property(retain, nonatomic) UIImage *coverImageOrigin; // @synthesize coverImageOrigin=_coverImageOrigin;
@property(copy, nonatomic) CDUnknownBlockType noticeInfoUpdatedCallback; // @synthesize noticeInfoUpdatedCallback=_noticeInfoUpdatedCallback;
@property(retain, nonatomic) FinderLiveErrorPage *createLiveErrorPage; // @synthesize createLiveErrorPage=_createLiveErrorPage;
@property(retain, nonatomic) FinderLiveStreamDecor *liveDecor; // @synthesize liveDecor=_liveDecor;
@property(nonatomic) int liveMode; // @synthesize liveMode=_liveMode;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
@property(retain, nonatomic) FinderJumpInfo *opPromptInfo; // @synthesize opPromptInfo=_opPromptInfo;
@property(retain, nonatomic) FinderLivePromptInfo *promptInfo; // @synthesize promptInfo=_promptInfo;
@property(nonatomic) long long lastSelectMode; // @synthesize lastSelectMode=_lastSelectMode;
@property(nonatomic) unsigned int maxVisibilityFriendContactCount; // @synthesize maxVisibilityFriendContactCount=_maxVisibilityFriendContactCount;
@property(nonatomic) unsigned int maxVisibilityChatroomCount; // @synthesize maxVisibilityChatroomCount=_maxVisibilityChatroomCount;
@property(retain, nonatomic) NSArray *visibilityFileList; // @synthesize visibilityFileList=_visibilityFileList;
@property(retain, nonatomic) CContact *groupContact; // @synthesize groupContact=_groupContact;
@property(retain, nonatomic) NSArray *roomContacts; // @synthesize roomContacts=_roomContacts;
@property(retain, nonatomic) MMFinderLiveAudioModeBackgroundUploadModel *audioModeBackgroundUploadModel; // @synthesize audioModeBackgroundUploadModel=_audioModeBackgroundUploadModel;
@property(retain, nonatomic) NSString *selfHeadImgPath; // @synthesize selfHeadImgPath=_selfHeadImgPath;
@property(retain, nonatomic) UIImage *selfHeadImg; // @synthesize selfHeadImg=_selfHeadImg;
@property(retain, nonatomic) NSArray *selectedFreeRosterList; // @synthesize selectedFreeRosterList=_selectedFreeRosterList;
@property(retain, nonatomic) NSArray *fullFreeOfChargeContactList; // @synthesize fullFreeOfChargeContactList=_fullFreeOfChargeContactList;
@property(retain, nonatomic) NSArray *freeOfChargeChatroomIdList; // @synthesize freeOfChargeChatroomIdList=_freeOfChargeChatroomIdList;
@property(retain, nonatomic) NSArray *freeOfChargeUsernameList; // @synthesize freeOfChargeUsernameList=_freeOfChargeUsernameList;
@property(nonatomic) unsigned int trialTimeMinute; // @synthesize trialTimeMinute=_trialTimeMinute;
@property(nonatomic) unsigned int trialTimeHour; // @synthesize trialTimeHour=_trialTimeHour;
@property(nonatomic) long long purchaseLivePreviewType; // @synthesize purchaseLivePreviewType=_purchaseLivePreviewType;
@property(nonatomic) unsigned int chargeUnitPriceInWecoin; // @synthesize chargeUnitPriceInWecoin=_chargeUnitPriceInWecoin;
@property(nonatomic) long long chargeFlag; // @synthesize chargeFlag=_chargeFlag;
@property(nonatomic) long long visibilityMode; // @synthesize visibilityMode=_visibilityMode;
@property(retain, nonatomic) FinderLiveTagInfo *videoTagInfo; // @synthesize videoTagInfo=_videoTagInfo;
@property(retain, nonatomic) FinderLiveTagInfo *audioTagInfo; // @synthesize audioTagInfo=_audioTagInfo;
@property(retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo; // @synthesize liveNoticeInfo=_liveNoticeInfo;
@property(retain, nonatomic) WCFinderLiveShareItem *shareItem; // @synthesize shareItem=_shareItem;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) MMLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(retain, nonatomic) WCFinderLiveStarterSwitchModeItem *switchModeItem; // @synthesize switchModeItem=_switchModeItem;
@property(readonly, nonatomic) MMFinderLiveTask *currentLiveTask;

@end

