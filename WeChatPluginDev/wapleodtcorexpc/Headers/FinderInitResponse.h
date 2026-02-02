//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderCheckPrefetchConfig, FinderDescCarouselConfig, FinderEnterStreamTips, FinderHelpPromotionConfig, FinderJumpInfo, FinderLbsLifeConfig, FinderMentionConfig, FinderNegativeFeedbackConfig, FinderPoiConfig, FinderRecommendCloseConfig, FinderReddotFreqConfig, FinderRingtoneConfig, FinderSnsCreateUserInfo, FinderTeenModeSetting, FinderTeenModeTipsConfig, FinderTeenagerInfo, FinderUploadOriginConfig, FinderWxPersonalizedSetting, FinderWxUserSettingInfo, NSData, NSMutableArray, NSString, PCFinderExptInfo, SKBuiltinBuffer_t, WXUserAttr;

@interface FinderInitResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *aliasInfo; // @dynamic aliasInfo;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderDescCarouselConfig *carouselConfig; // @dynamic carouselConfig;
@property(retain, nonatomic) NSMutableArray *cmdlist; // @dynamic cmdlist;
@property(retain, nonatomic) NSMutableArray *contacts; // @dynamic contacts;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) NSString *curFinderUsername; // @dynamic curFinderUsername;
@property(nonatomic) unsigned int currentAliasRoleType; // @dynamic currentAliasRoleType;
@property(retain, nonatomic) FinderJumpInfo *datacenterJumpInfo; // @dynamic datacenterJumpInfo;
@property(retain, nonatomic) FinderEnterStreamTips *enterStreamTip; // @dynamic enterStreamTip;
@property(retain, nonatomic) NSMutableArray *exptBuffers; // @dynamic exptBuffers;
@property(retain, nonatomic) FinderCheckPrefetchConfig *finderCheckPrefetchConf; // @dynamic finderCheckPrefetchConf;
@property(retain, nonatomic) NSMutableArray *finderConfigItem; // @dynamic finderConfigItem;
@property(retain, nonatomic) FinderReddotFreqConfig *finderReddotFreqConfig; // @dynamic finderReddotFreqConfig;
@property(retain, nonatomic) NSMutableArray *finderUsernameList; // @dynamic finderUsernameList;
@property(retain, nonatomic) FinderHelpPromotionConfig *helpPromotionConfig; // @dynamic helpPromotionConfig;
@property(retain, nonatomic) SKBuiltinBuffer_t *keybuf; // @dynamic keybuf;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) FinderLbsLifeConfig *lbslifeConfig; // @dynamic lbslifeConfig;
@property(retain, nonatomic) NSString *mainFinderUsername; // @dynamic mainFinderUsername;
@property(retain, nonatomic) FinderMentionConfig *mentionConfig; // @dynamic mentionConfig;
@property(retain, nonatomic) NSMutableArray *myFinderTabShowInfoList; // @dynamic myFinderTabShowInfoList;
@property(retain, nonatomic) NSMutableArray *myacct; // @dynamic myacct;
@property(retain, nonatomic) NSMutableArray *navigationTitles; // @dynamic navigationTitles;
@property(retain, nonatomic) FinderNegativeFeedbackConfig *negativeFeedbackConf; // @dynamic negativeFeedbackConf;
@property(nonatomic) unsigned long long nextAliasModAvailableTime; // @dynamic nextAliasModAvailableTime;
@property(nonatomic) unsigned int pcCardShowStyle; // @dynamic pcCardShowStyle;
@property(retain, nonatomic) PCFinderExptInfo *pcFinderExptInfo; // @dynamic pcFinderExptInfo;
@property(retain, nonatomic) FinderPoiConfig *poiConfig; // @dynamic poiConfig;
@property(retain, nonatomic) FinderRecommendCloseConfig *recommendCloseConfig; // @dynamic recommendCloseConfig;
@property(nonatomic) unsigned int retryDelaySecond; // @dynamic retryDelaySecond;
@property(retain, nonatomic) FinderRingtoneConfig *ringtoneConfig; // @dynamic ringtoneConfig;
@property(retain, nonatomic) NSString *showInWxFinderUsername; // @dynamic showInWxFinderUsername;
@property(retain, nonatomic) NSMutableArray *slideUpGuideConfig; // @dynamic slideUpGuideConfig;
@property(retain, nonatomic) FinderSnsCreateUserInfo *snsCreateUserInfo; // @dynamic snsCreateUserInfo;
@property(retain, nonatomic) NSMutableArray *tabInfos; // @dynamic tabInfos;
@property(retain, nonatomic) FinderTeenagerInfo *teenagerInfo; // @dynamic teenagerInfo;
@property(retain, nonatomic) FinderTeenModeSetting *teenmodeSetting; // @dynamic teenmodeSetting;
@property(retain, nonatomic) FinderTeenModeTipsConfig *teenmodeTipsConfig; // @dynamic teenmodeTipsConfig;
@property(retain, nonatomic) FinderUploadOriginConfig *uploadOriginConfig; // @dynamic uploadOriginConfig;
@property(nonatomic) unsigned int userNotCreatedFlag; // @dynamic userNotCreatedFlag;
@property(nonatomic) unsigned int userver; // @dynamic userver;
@property(nonatomic) unsigned int userverForH5; // @dynamic userverForH5;
@property(retain, nonatomic) FinderWxPersonalizedSetting *wxPersonalizedSetting; // @dynamic wxPersonalizedSetting;
@property(retain, nonatomic) WXUserAttr *wxUserAttr; // @dynamic wxUserAttr;
@property(retain, nonatomic) FinderWxUserSettingInfo *wxUserSettingInfo; // @dynamic wxUserSettingInfo;
@property(retain, nonatomic) NSString *wxUsernameForH5; // @dynamic wxUsernameForH5;

@end

