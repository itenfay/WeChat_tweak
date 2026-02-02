//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderCheckPrefetchConfig, FinderDescCarouselConfig, FinderFriendTabConfig, FinderHelpPromotionConfig, FinderJoinLiveVisibleInfo, FinderNicknameCustomCharacters, FinderPlaceHolderConfig, FinderRedDotExposeInfoConfig, FinderRingtoneConfig, FinderSnsCreateUserInfo, FinderTeenModeSetting, FinderTeenModeTipsConfig, FinderUploadGetTempUrl, FinderWxPersonalizedSetting, LongVideoInfo, NewLifeConfig, PCFinderExptInfo, SimpleCommonConfig;

@interface WCFinderInitConfigInfo : NSObject
{
    _Bool _usefindergetcommentlist;
    _Bool _needFaceVerify;
    _Bool _supportCommentEmoticon;
    unsigned int _retryDelaySecond;
    unsigned int _pcCardShowStyle;
    unsigned int _useNewNoticeIconStyleInFeed;
    unsigned int _supportCommentRecommend;
    FinderTeenModeTipsConfig *_teenmodeTipsConfig;
    FinderTeenModeSetting *_teenmodeSetting;
    FinderWxPersonalizedSetting *_wxPersonalizedSetting;
    FinderRingtoneConfig *_ringtoneConfig;
    FinderDescCarouselConfig *_carouselConfig;
    NewLifeConfig *_newlifeConfig;
    FinderSnsCreateUserInfo *_snsCreateUserInfo;
    FinderCheckPrefetchConfig *_finderCheckPrefetchConf;
    PCFinderExptInfo *_pcFinderExptInfo;
    FinderNicknameCustomCharacters *_nicknameCustomCharacters;
    LongVideoInfo *_longvideoInfo;
    FinderUploadGetTempUrl *_uploadGetTempUrl;
    FinderHelpPromotionConfig *_helpPromotionConfig;
    FinderRedDotExposeInfoConfig *_reddotExposeInfoConfig;
    FinderPlaceHolderConfig *_finderPlaceHolderConf;
    FinderJoinLiveVisibleInfo *_joinliveVisibleInfo;
    FinderFriendTabConfig *_friendTabConfig;
    SimpleCommonConfig *_simpleCommonConfig;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool supportCommentEmoticon; // @synthesize supportCommentEmoticon=_supportCommentEmoticon;
@property(retain, nonatomic) SimpleCommonConfig *simpleCommonConfig; // @synthesize simpleCommonConfig=_simpleCommonConfig;
@property(retain, nonatomic) FinderFriendTabConfig *friendTabConfig; // @synthesize friendTabConfig=_friendTabConfig;
@property(retain, nonatomic) FinderJoinLiveVisibleInfo *joinliveVisibleInfo; // @synthesize joinliveVisibleInfo=_joinliveVisibleInfo;
@property(retain, nonatomic) FinderPlaceHolderConfig *finderPlaceHolderConf; // @synthesize finderPlaceHolderConf=_finderPlaceHolderConf;
@property(nonatomic) unsigned int supportCommentRecommend; // @synthesize supportCommentRecommend=_supportCommentRecommend;
@property(nonatomic) unsigned int useNewNoticeIconStyleInFeed; // @synthesize useNewNoticeIconStyleInFeed=_useNewNoticeIconStyleInFeed;
@property(retain, nonatomic) FinderRedDotExposeInfoConfig *reddotExposeInfoConfig; // @synthesize reddotExposeInfoConfig=_reddotExposeInfoConfig;
@property(retain, nonatomic) FinderHelpPromotionConfig *helpPromotionConfig; // @synthesize helpPromotionConfig=_helpPromotionConfig;
@property(retain, nonatomic) FinderUploadGetTempUrl *uploadGetTempUrl; // @synthesize uploadGetTempUrl=_uploadGetTempUrl;
@property(retain, nonatomic) LongVideoInfo *longvideoInfo; // @synthesize longvideoInfo=_longvideoInfo;
@property(nonatomic) _Bool needFaceVerify; // @synthesize needFaceVerify=_needFaceVerify;
@property(retain, nonatomic) FinderNicknameCustomCharacters *nicknameCustomCharacters; // @synthesize nicknameCustomCharacters=_nicknameCustomCharacters;
@property(nonatomic) _Bool usefindergetcommentlist; // @synthesize usefindergetcommentlist=_usefindergetcommentlist;
@property(retain, nonatomic) PCFinderExptInfo *pcFinderExptInfo; // @synthesize pcFinderExptInfo=_pcFinderExptInfo;
@property(retain, nonatomic) FinderCheckPrefetchConfig *finderCheckPrefetchConf; // @synthesize finderCheckPrefetchConf=_finderCheckPrefetchConf;
@property(retain, nonatomic) FinderSnsCreateUserInfo *snsCreateUserInfo; // @synthesize snsCreateUserInfo=_snsCreateUserInfo;
@property(nonatomic) unsigned int pcCardShowStyle; // @synthesize pcCardShowStyle=_pcCardShowStyle;
@property(retain, nonatomic) NewLifeConfig *newlifeConfig; // @synthesize newlifeConfig=_newlifeConfig;
@property(retain, nonatomic) FinderDescCarouselConfig *carouselConfig; // @synthesize carouselConfig=_carouselConfig;
@property(retain, nonatomic) FinderRingtoneConfig *ringtoneConfig; // @synthesize ringtoneConfig=_ringtoneConfig;
@property(retain, nonatomic) FinderWxPersonalizedSetting *wxPersonalizedSetting; // @synthesize wxPersonalizedSetting=_wxPersonalizedSetting;
@property(retain, nonatomic) FinderTeenModeSetting *teenmodeSetting; // @synthesize teenmodeSetting=_teenmodeSetting;
@property(nonatomic) unsigned int retryDelaySecond; // @synthesize retryDelaySecond=_retryDelaySecond;
@property(retain, nonatomic) FinderTeenModeTipsConfig *teenmodeTipsConfig; // @synthesize teenmodeTipsConfig=_teenmodeTipsConfig;
- (id)customPropertyKeyMap:(id)arg1;
- (id)customMapDict;
- (void)voidFunctionWithConfigItem:(id)arg1;
- (id)convertCamelFromUnderline:(id)arg1;
- (id)getStringValueFromData:(id)arg1;
- (id)getValueWithClass:(Class)arg1 configValue:(id)arg2;
- (void)_updateConfigInfoWithItemArray:(id)arg1;
- (void)updateConfigInfoWithItemArray:(id)arg1;
- (id)initWithConfigArray:(id)arg1;

@end

