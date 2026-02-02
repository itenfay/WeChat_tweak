//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameCenterLabelInfo, GameCenterLatestGameInfo, NSArray, NSString;

@interface GameCenterGameBriefInfo
{
    _Bool _hasEnableChatRoom;
    unsigned int _tag;
    int _appType;
    NSString *_appID;
    NSString *_name;
    NSString *_remark;
    NSString *_brief;
    long long _trend;
    NSString *_iconURL;
    NSString *_downloadURL;
    unsigned long long _showType;
    NSString *_imageURL;
    GameCenterLatestGameInfo *_latestGameInfo;
    NSString *_webURL;
    NSString *_noticeID;
    NSArray *_promotedFeeds;
    NSString *_titleForNewLabel;
    NSString *_tagForNewApp;
    GameCenterLabelInfo *_labelInfo;
    NSString *_recommendDesc;
    NSString *_externInfo;
    NSString *_h5GameAppid;
    NSString *_h5GameLaunchUrl;
    NSString *_h5GameDetailUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_h5GameDetailUrl;
+ (void)PBArrayAdd_h5GameLaunchUrl;
+ (void)PBArrayAdd_h5GameAppid;
+ (void)PBArrayAdd_appType;
+ (void)PBArrayAdd_externInfo;
+ (void)PBArrayAdd_recommendDesc;
+ (void)PBArrayAdd_labelInfo;
+ (void)PBArrayAdd_hasEnableChatRoom;
+ (void)PBArrayAdd_tagForNewApp;
+ (void)PBArrayAdd_titleForNewLabel;
+ (void)PBArrayAdd_promotedFeeds;
+ (void)PBArrayAdd_noticeID;
+ (void)PBArrayAdd_webURL;
+ (void)PBArrayAdd_latestGameInfo;
+ (void)PBArrayAdd_imageURL;
+ (void)PBArrayAdd_showType;
+ (void)PBArrayAdd_tag;
+ (void)PBArrayAdd_downloadURL;
+ (void)PBArrayAdd_iconURL;
+ (void)PBArrayAdd_trend;
+ (void)PBArrayAdd_brief;
+ (void)PBArrayAdd_remark;
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_appID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *h5GameDetailUrl; // @synthesize h5GameDetailUrl=_h5GameDetailUrl;
@property(retain, nonatomic) NSString *h5GameLaunchUrl; // @synthesize h5GameLaunchUrl=_h5GameLaunchUrl;
@property(retain, nonatomic) NSString *h5GameAppid; // @synthesize h5GameAppid=_h5GameAppid;
@property(nonatomic) int appType; // @synthesize appType=_appType;
@property(retain, nonatomic) NSString *externInfo; // @synthesize externInfo=_externInfo;
@property(retain, nonatomic) NSString *recommendDesc; // @synthesize recommendDesc=_recommendDesc;
@property(retain, nonatomic) GameCenterLabelInfo *labelInfo; // @synthesize labelInfo=_labelInfo;
@property(nonatomic) _Bool hasEnableChatRoom; // @synthesize hasEnableChatRoom=_hasEnableChatRoom;
@property(retain, nonatomic) NSString *tagForNewApp; // @synthesize tagForNewApp=_tagForNewApp;
@property(retain, nonatomic) NSString *titleForNewLabel; // @synthesize titleForNewLabel=_titleForNewLabel;
@property(retain, nonatomic) NSArray *promotedFeeds; // @synthesize promotedFeeds=_promotedFeeds;
@property(retain, nonatomic) NSString *noticeID; // @synthesize noticeID=_noticeID;
@property(retain, nonatomic) NSString *webURL; // @synthesize webURL=_webURL;
@property(retain, nonatomic) GameCenterLatestGameInfo *latestGameInfo; // @synthesize latestGameInfo=_latestGameInfo;
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(nonatomic) unsigned long long showType; // @synthesize showType=_showType;
@property(nonatomic) unsigned int tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(retain, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
@property(nonatomic) long long trend; // @synthesize trend=_trend;
@property(retain, nonatomic) NSString *brief; // @synthesize brief=_brief;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void)parseFromResp:(id)arg1;
- (void)parseFromAppItem:(id)arg1;
- (_Bool)isWithNew;
- (_Bool)canSubscribe;
- (_Bool)isValid;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)parseFromBriefInfo:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

