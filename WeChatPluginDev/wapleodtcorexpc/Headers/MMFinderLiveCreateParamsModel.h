//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, FinderLiveTagInfo, MMFinderLiveAudioModeBackgroundUploadModel, MMFinderLiveCreateImageSpamCheckItem, MMFinderLiveTaskId, NSData, NSMutableArray, NSString, UIImage, WCFinderDataItem, WCFinderLiveShareItem, WCFinderLiveStarterReporter, WCFinderUploadTask;

@interface MMFinderLiveCreateParamsModel
{
    _Bool _isLiveCoverImageUpdated;
    _Bool _useFinderHeadAsCoverImage;
    _Bool _isMemberFree;
    _Bool _isMiniGameLive;
    _Bool _isLandscapeLive;
    unsigned int _finderLiveMode;
    unsigned int _finderLiveSubMode;
    unsigned int _chargeFlag;
    unsigned int _chargeUnitPriceInWecoin;
    unsigned int _trialDurationTime;
    unsigned int _ackSpamMsg;
    int _liveMode;
    unsigned int _notificationmsgtriggertype;
    unsigned int _gameLiveStreamType;
    MMFinderLiveTaskId *_liveTaskId;
    WCFinderDataItem *_dataItem;
    WCFinderLiveShareItem *_shareItem;
    WCFinderUploadTask *_uploadTask;
    WCFinderLiveStarterReporter *_starterReporter;
    long long _purchaseLivePreviewType;
    NSMutableArray *_freeOfChargeChatroomIdList;
    NSMutableArray *_freeOfChargeUsernameList;
    NSMutableArray *_freeOfChargeRosterIdsList;
    FinderLiveTagInfo *_liveTagInfo;
    long long _visibilityMode;
    NSMutableArray *_visibilityFileIdLists;
    NSMutableArray *_visibilityChatRoomIdLists;
    NSMutableArray *_visibilityusernameLists;
    NSData *_spamCheckInfo;
    UIImage *_coverImg;
    NSString *_coverPath;
    UIImage *_headImg;
    NSString *_headPath;
    NSString *_noticeId;
    CContact *_fromGroupContact;
    MMFinderLiveAudioModeBackgroundUploadModel *_audioModeBackgroundUploadModel;
    MMFinderLiveCreateImageSpamCheckItem *_coverImageSpamCheckItem;
    MMFinderLiveCreateImageSpamCheckItem *_headImageSpamCheckItem;
    NSMutableArray *_lastLiveCoverImgs;
    NSString *_descriptionExtend;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *descriptionExtend; // @synthesize descriptionExtend=_descriptionExtend;
@property(nonatomic) unsigned int gameLiveStreamType; // @synthesize gameLiveStreamType=_gameLiveStreamType;
@property(nonatomic) unsigned int notificationmsgtriggertype; // @synthesize notificationmsgtriggertype=_notificationmsgtriggertype;
@property(nonatomic) _Bool isLandscapeLive; // @synthesize isLandscapeLive=_isLandscapeLive;
@property(retain, nonatomic) NSMutableArray *lastLiveCoverImgs; // @synthesize lastLiveCoverImgs=_lastLiveCoverImgs;
@property(nonatomic) int liveMode; // @synthesize liveMode=_liveMode;
@property(retain, nonatomic) MMFinderLiveCreateImageSpamCheckItem *headImageSpamCheckItem; // @synthesize headImageSpamCheckItem=_headImageSpamCheckItem;
@property(retain, nonatomic) MMFinderLiveCreateImageSpamCheckItem *coverImageSpamCheckItem; // @synthesize coverImageSpamCheckItem=_coverImageSpamCheckItem;
@property(retain, nonatomic) MMFinderLiveAudioModeBackgroundUploadModel *audioModeBackgroundUploadModel; // @synthesize audioModeBackgroundUploadModel=_audioModeBackgroundUploadModel;
@property(retain, nonatomic) CContact *fromGroupContact; // @synthesize fromGroupContact=_fromGroupContact;
@property(retain, nonatomic) NSString *noticeId; // @synthesize noticeId=_noticeId;
@property(retain, nonatomic) NSString *headPath; // @synthesize headPath=_headPath;
@property(retain, nonatomic) UIImage *headImg; // @synthesize headImg=_headImg;
@property(retain, nonatomic) NSString *coverPath; // @synthesize coverPath=_coverPath;
@property(retain, nonatomic) UIImage *coverImg; // @synthesize coverImg=_coverImg;
@property(retain, nonatomic) NSData *spamCheckInfo; // @synthesize spamCheckInfo=_spamCheckInfo;
@property(nonatomic) unsigned int ackSpamMsg; // @synthesize ackSpamMsg=_ackSpamMsg;
@property(nonatomic) _Bool isMiniGameLive; // @synthesize isMiniGameLive=_isMiniGameLive;
@property(retain, nonatomic) NSMutableArray *visibilityusernameLists; // @synthesize visibilityusernameLists=_visibilityusernameLists;
@property(retain, nonatomic) NSMutableArray *visibilityChatRoomIdLists; // @synthesize visibilityChatRoomIdLists=_visibilityChatRoomIdLists;
@property(retain, nonatomic) NSMutableArray *visibilityFileIdLists; // @synthesize visibilityFileIdLists=_visibilityFileIdLists;
@property(nonatomic) long long visibilityMode; // @synthesize visibilityMode=_visibilityMode;
@property(retain, nonatomic) FinderLiveTagInfo *liveTagInfo; // @synthesize liveTagInfo=_liveTagInfo;
@property(nonatomic) _Bool isMemberFree; // @synthesize isMemberFree=_isMemberFree;
@property(retain, nonatomic) NSMutableArray *freeOfChargeRosterIdsList; // @synthesize freeOfChargeRosterIdsList=_freeOfChargeRosterIdsList;
@property(retain, nonatomic) NSMutableArray *freeOfChargeUsernameList; // @synthesize freeOfChargeUsernameList=_freeOfChargeUsernameList;
@property(retain, nonatomic) NSMutableArray *freeOfChargeChatroomIdList; // @synthesize freeOfChargeChatroomIdList=_freeOfChargeChatroomIdList;
@property(nonatomic) unsigned int trialDurationTime; // @synthesize trialDurationTime=_trialDurationTime;
@property(nonatomic) long long purchaseLivePreviewType; // @synthesize purchaseLivePreviewType=_purchaseLivePreviewType;
@property(nonatomic) unsigned int chargeUnitPriceInWecoin; // @synthesize chargeUnitPriceInWecoin=_chargeUnitPriceInWecoin;
@property(nonatomic) unsigned int chargeFlag; // @synthesize chargeFlag=_chargeFlag;
@property(retain, nonatomic) WCFinderLiveStarterReporter *starterReporter; // @synthesize starterReporter=_starterReporter;
@property(retain, nonatomic) WCFinderUploadTask *uploadTask; // @synthesize uploadTask=_uploadTask;
@property(nonatomic) _Bool useFinderHeadAsCoverImage; // @synthesize useFinderHeadAsCoverImage=_useFinderHeadAsCoverImage;
@property(nonatomic) _Bool isLiveCoverImageUpdated; // @synthesize isLiveCoverImageUpdated=_isLiveCoverImageUpdated;
@property(retain, nonatomic) WCFinderLiveShareItem *shareItem; // @synthesize shareItem=_shareItem;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(nonatomic) unsigned int finderLiveSubMode; // @synthesize finderLiveSubMode=_finderLiveSubMode;
@property(nonatomic) unsigned int finderLiveMode; // @synthesize finderLiveMode=_finderLiveMode;
- (id)description;

@end

