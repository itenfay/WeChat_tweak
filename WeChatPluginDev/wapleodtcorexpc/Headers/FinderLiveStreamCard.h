//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderAdExtInfo, FinderBannerExtInfo, FinderLiveAggregationCard, FinderLiveCardHighlightTag, FinderLiveCardProductShowcase, FinderLiveRelatedExtInfo, FinderLiveStreamJumper, FinderLiveStreamNoticeCard, FinderLiveStreamPlayTogetherInfo, FinderLiveThemeTag, FinderObject, NSMutableArray, NSString;

@interface FinderLiveStreamCard : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderAdExtInfo *adExtinfo; // @dynamic adExtinfo;
@property(retain, nonatomic) FinderLiveAggregationCard *aggregationCard; // @dynamic aggregationCard;
@property(retain, nonatomic) FinderBannerExtInfo *bannerExtinfo; // @dynamic bannerExtinfo;
@property(retain, nonatomic) NSString *h5Url; // @dynamic h5Url;
@property(retain, nonatomic) FinderLiveCardHighlightTag *highlightTag; // @dynamic highlightTag;
@property(retain, nonatomic) FinderLiveStreamJumper *jumper; // @dynamic jumper;
@property(nonatomic) unsigned long long layoutId; // @dynamic layoutId;
@property(retain, nonatomic) FinderLiveStreamNoticeCard *noticeInfo; // @dynamic noticeInfo;
@property(retain, nonatomic) FinderObject *object; // @dynamic object;
@property(retain, nonatomic) NSString *objectWording; // @dynamic objectWording;
@property(retain, nonatomic) FinderLiveStreamPlayTogetherInfo *playTogetherInfo; // @dynamic playTogetherInfo;
@property(retain, nonatomic) FinderLiveCardProductShowcase *productShowcase; // @dynamic productShowcase;
@property(retain, nonatomic) NSMutableArray *relateLiving; // @dynamic relateLiving;
@property(retain, nonatomic) FinderLiveRelatedExtInfo *relatedExtInfo; // @dynamic relatedExtInfo;
@property(nonatomic) unsigned int style; // @dynamic style;
@property(nonatomic) unsigned int subStyle; // @dynamic subStyle;
@property(retain, nonatomic) FinderLiveThemeTag *themeTag; // @dynamic themeTag;

@end

