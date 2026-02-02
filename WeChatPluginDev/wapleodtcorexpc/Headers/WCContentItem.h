//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMMusicShareItem, NSMutableArray, NSString, TingShareCategoryItem, TingShareListenItem, TingShareLyricsItem, WCAppMsgShareInfo, WCBrandMpVideoItem, WCFinderContentColumnSharedItem, WCFinderLiveShareItem, WCFinderLiveShopWindowShareItem, WCFinderShareItemContainer, WCFinderShareToMomentsItem, WCFinderThemeLiveStreamShareItem, WCFinderTopicShareItem, WCMegaVideoShareItem, WCMomentsDragonInfo, WCMomentsRabbitInfo, WCMomentsTigerInfo, WCNoteInfo;

@interface WCContentItem : NSObject
{
    int _type;
    int _flag;
    unsigned int _createtime;
    NSString *_title;
    NSString *_desc;
    NSString *_titlePattern;
    NSString *_descPattern;
    NSString *_linkUrl;
    NSString *_linkUrl2;
    long long _subType;
    NSString *_username;
    NSString *_nickname;
    NSMutableArray *_mediaList;
    WCNoteInfo *_noteInfo;
    WCAppMsgShareInfo *_appMsgShareInfo;
    NSString *_emojiMd5;
    WCFinderShareToMomentsItem *_finderShareToMomentsItem;
    WCMegaVideoShareItem *_finderLongVideoShareItem;
    WCFinderTopicShareItem *_finderTopicShareItem;
    WCFinderContentColumnSharedItem *_finderContentColumnSharedItem;
    WCBrandMpVideoItem *_brandMpVideoItem;
    WCFinderLiveShareItem *_finderLiveShareItem;
    WCFinderShareItemContainer *_finderShareItem;
    WCFinderLiveShopWindowShareItem *_finderShopWindowShare;
    MMMusicShareItem *_musicShareItem;
    TingShareListenItem *_tingListenItem;
    TingShareCategoryItem *_tingCategoryItem;
    TingShareLyricsItem *_tingLyricsItem;
    WCMomentsTigerInfo *_tigerInfo;
    WCMomentsRabbitInfo *_rabbitInfo;
    WCMomentsDragonInfo *_dragonInfo;
    WCFinderThemeLiveStreamShareItem *_finderThemeLiveShareItem;
}

+ (_Bool)isVideoType:(long long)arg1;
+ (_Bool)isTypeThatSupportsLivePhoto:(long long)arg1;
+ (_Bool)isPhotoType:(long long)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_dragonInfo;
+ (void)PBArrayAdd_finderThemeLiveShareItem;
+ (void)PBArrayAdd_rabbitInfo;
+ (void)PBArrayAdd_tingLyricsItem;
+ (void)PBArrayAdd_tingCategoryItem;
+ (void)PBArrayAdd_tingListenItem;
+ (void)PBArrayAdd_tigerInfo;
+ (void)PBArrayAdd_musicShareItem;
+ (void)PBArrayAdd_finderShareItem;
+ (void)PBArrayAdd_finderContentColumnSharedItem;
+ (void)PBArrayAdd_finderLiveShareItem;
+ (void)PBArrayAdd_finderLongVideoShareItem;
+ (void)PBArrayAdd_brandMpVideoItem;
+ (void)PBArrayAdd_finderTopicShareItem;
+ (void)PBArrayAdd_finderShareToMomentsItem;
+ (void)PBArrayAdd_appMsgShareInfo;
+ (void)PBArrayAdd_noteInfo;
+ (void)PBArrayAdd_mediaList;
+ (void)PBArrayAdd_createtime;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_flag;
+ (void)PBArrayAdd_subType;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_linkUrl2;
+ (void)PBArrayAdd_linkUrl;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_title;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderThemeLiveStreamShareItem *finderThemeLiveShareItem; // @synthesize finderThemeLiveShareItem=_finderThemeLiveShareItem;
@property(retain, nonatomic) WCMomentsDragonInfo *dragonInfo; // @synthesize dragonInfo=_dragonInfo;
@property(retain, nonatomic) WCMomentsRabbitInfo *rabbitInfo; // @synthesize rabbitInfo=_rabbitInfo;
@property(retain, nonatomic) WCMomentsTigerInfo *tigerInfo; // @synthesize tigerInfo=_tigerInfo;
@property(retain, nonatomic) TingShareLyricsItem *tingLyricsItem; // @synthesize tingLyricsItem=_tingLyricsItem;
@property(retain, nonatomic) TingShareCategoryItem *tingCategoryItem; // @synthesize tingCategoryItem=_tingCategoryItem;
@property(retain, nonatomic) TingShareListenItem *tingListenItem; // @synthesize tingListenItem=_tingListenItem;
@property(retain, nonatomic) MMMusicShareItem *musicShareItem; // @synthesize musicShareItem=_musicShareItem;
@property(retain, nonatomic) WCFinderLiveShopWindowShareItem *finderShopWindowShare; // @synthesize finderShopWindowShare=_finderShopWindowShare;
@property(retain, nonatomic) WCFinderShareItemContainer *finderShareItem; // @synthesize finderShareItem=_finderShareItem;
@property(retain, nonatomic) WCFinderLiveShareItem *finderLiveShareItem; // @synthesize finderLiveShareItem=_finderLiveShareItem;
@property(retain, nonatomic) WCBrandMpVideoItem *brandMpVideoItem; // @synthesize brandMpVideoItem=_brandMpVideoItem;
@property(retain, nonatomic) WCFinderContentColumnSharedItem *finderContentColumnSharedItem; // @synthesize finderContentColumnSharedItem=_finderContentColumnSharedItem;
@property(retain, nonatomic) WCFinderTopicShareItem *finderTopicShareItem; // @synthesize finderTopicShareItem=_finderTopicShareItem;
@property(retain, nonatomic) WCMegaVideoShareItem *finderLongVideoShareItem; // @synthesize finderLongVideoShareItem=_finderLongVideoShareItem;
@property(retain, nonatomic) WCFinderShareToMomentsItem *finderShareToMomentsItem; // @synthesize finderShareToMomentsItem=_finderShareToMomentsItem;
@property(retain, nonatomic) NSString *emojiMd5; // @synthesize emojiMd5=_emojiMd5;
@property(retain, nonatomic) WCAppMsgShareInfo *appMsgShareInfo; // @synthesize appMsgShareInfo=_appMsgShareInfo;
@property(retain, nonatomic) WCNoteInfo *noteInfo; // @synthesize noteInfo=_noteInfo;
@property(retain, nonatomic) NSMutableArray *mediaList; // @synthesize mediaList=_mediaList;
@property(nonatomic) unsigned int createtime; // @synthesize createtime=_createtime;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) int flag; // @synthesize flag=_flag;
@property(nonatomic) long long subType; // @synthesize subType=_subType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *linkUrl2; // @synthesize linkUrl2=_linkUrl2;
@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(retain, nonatomic) NSString *descPattern; // @synthesize descPattern=_descPattern;
@property(retain, nonatomic) NSString *titlePattern; // @synthesize titlePattern=_titlePattern;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (_Bool)isValid;
- (_Bool)isVideoType;
- (_Bool)hasLivePhoto;
- (_Bool)isTypeThatSupportsLivePhoto;
- (_Bool)isPhotoType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;
- (id)usedFinderTopicShareItem;
- (_Bool)isFinderTopicLikeShareType;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

