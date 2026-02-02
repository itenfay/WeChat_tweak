//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EcsJumpInfo, NSString, TemplateAdvertiseOPWrap, TemplateFinderFeedOPWrap, TemplateFinderGameLiveOPWrap, TemplateFinderLiveOPWrap, TemplateFinderMemberCenterOPWrap, TemplateFooterOPWrap, TemplateLiteAppOPWrap, TemplateScheduleOPWrap, TemplateTingPlayListOPWrap, TemplateWeappOPWrap, TemplateWebSearchOPWrap, UIColor;

@interface OPItemWrap : NSObject
{
    _Bool _isRichText;
    _Bool _isShowRedDot;
    _Bool _opItemThumbnalShowPlaybtn;
    unsigned int _opType;
    unsigned int _tag;
    unsigned int _numberOfLines;
    NSString *_word;
    NSString *_detailTitle;
    NSString *_url;
    UIColor *_wordColor;
    NSString *_icon;
    NSString *_darkModeIcon;
    TemplateWeappOPWrap *_weappOpWrap;
    TemplateTingPlayListOPWrap *_tingPlaylistOpWrap;
    TemplateScheduleOPWrap *_scheduleOpWrap;
    TemplateAdvertiseOPWrap *_advertiseOpWrap;
    TemplateFinderLiveOPWrap *_finderLiveOpWrap;
    TemplateFooterOPWrap *_footerOpWrap;
    TemplateFinderGameLiveOPWrap *_finderGameLiveOpWrap;
    TemplateFinderFeedOPWrap *_finderFeedOpWrap;
    TemplateLiteAppOPWrap *_liteAppOpWrap;
    TemplateFinderMemberCenterOPWrap *_finderMemberCenterOpWrap;
    TemplateWebSearchOPWrap *_webSearchOpWrap;
    NSString *_extId;
    NSString *_businessId;
    NSString *_opItemThumbnail;
    EcsJumpInfo *_ecsJumpInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EcsJumpInfo *ecsJumpInfo; // @synthesize ecsJumpInfo=_ecsJumpInfo;
@property(nonatomic) _Bool opItemThumbnalShowPlaybtn; // @synthesize opItemThumbnalShowPlaybtn=_opItemThumbnalShowPlaybtn;
@property(retain, nonatomic) NSString *opItemThumbnail; // @synthesize opItemThumbnail=_opItemThumbnail;
@property(retain, nonatomic) NSString *businessId; // @synthesize businessId=_businessId;
@property(retain, nonatomic) NSString *extId; // @synthesize extId=_extId;
@property(nonatomic) _Bool isShowRedDot; // @synthesize isShowRedDot=_isShowRedDot;
@property(retain, nonatomic) TemplateWebSearchOPWrap *webSearchOpWrap; // @synthesize webSearchOpWrap=_webSearchOpWrap;
@property(retain, nonatomic) TemplateFinderMemberCenterOPWrap *finderMemberCenterOpWrap; // @synthesize finderMemberCenterOpWrap=_finderMemberCenterOpWrap;
@property(retain, nonatomic) TemplateLiteAppOPWrap *liteAppOpWrap; // @synthesize liteAppOpWrap=_liteAppOpWrap;
@property(retain, nonatomic) TemplateFinderFeedOPWrap *finderFeedOpWrap; // @synthesize finderFeedOpWrap=_finderFeedOpWrap;
@property(retain, nonatomic) TemplateFinderGameLiveOPWrap *finderGameLiveOpWrap; // @synthesize finderGameLiveOpWrap=_finderGameLiveOpWrap;
@property(retain, nonatomic) TemplateFooterOPWrap *footerOpWrap; // @synthesize footerOpWrap=_footerOpWrap;
@property(retain, nonatomic) TemplateFinderLiveOPWrap *finderLiveOpWrap; // @synthesize finderLiveOpWrap=_finderLiveOpWrap;
@property(retain, nonatomic) TemplateAdvertiseOPWrap *advertiseOpWrap; // @synthesize advertiseOpWrap=_advertiseOpWrap;
@property(retain, nonatomic) TemplateScheduleOPWrap *scheduleOpWrap; // @synthesize scheduleOpWrap=_scheduleOpWrap;
@property(retain, nonatomic) TemplateTingPlayListOPWrap *tingPlaylistOpWrap; // @synthesize tingPlaylistOpWrap=_tingPlaylistOpWrap;
@property(retain, nonatomic) TemplateWeappOPWrap *weappOpWrap; // @synthesize weappOpWrap=_weappOpWrap;
@property(nonatomic) unsigned int numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) _Bool isRichText; // @synthesize isRichText=_isRichText;
@property(nonatomic) unsigned int tag; // @synthesize tag=_tag;
@property(nonatomic) unsigned int opType; // @synthesize opType=_opType;
@property(retain, nonatomic) NSString *darkModeIcon; // @synthesize darkModeIcon=_darkModeIcon;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIColor *wordColor; // @synthesize wordColor=_wordColor;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *detailTitle; // @synthesize detailTitle=_detailTitle;
@property(retain, nonatomic) NSString *word; // @synthesize word=_word;

@end

