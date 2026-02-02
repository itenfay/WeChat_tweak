//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderAdExtInfo, FinderBannerExtInfo, FinderLiveCardHighlightTag, FinderLiveRelatedExtInfo, FinderLiveStreamPlayTogetherInfo, NSMutableArray, NSString, WCFinderDataItem, WCFinderLiveAggregationCard, WCFinderLiveCardProductShowcase, WCFinderLiveStreamJumpModel, WCFinderLiveStreamNoticeCard, WCFinderLiveThemeTag;

@interface WCFinderLiveStreamElementModel : NSObject
{
    int _style;
    unsigned long long _layoutId;
    WCFinderDataItem *_dataItem;
    NSString *_h5Url;
    WCFinderLiveStreamNoticeCard *_noticeCard;
    NSMutableArray *_relateLivingDataItems;
    WCFinderLiveStreamJumpModel *_jumpModel;
    FinderBannerExtInfo *_bannerExtInfo;
    FinderLiveRelatedExtInfo *_relatedExtInfo;
    NSString *_objectWording;
    FinderAdExtInfo *_adExtInfo;
    FinderLiveCardHighlightTag *_highlightTag;
    WCFinderLiveAggregationCard *_aggregationCard;
    WCFinderLiveThemeTag *_themeTag;
    WCFinderLiveCardProductShowcase *_productShowcase;
    FinderLiveStreamPlayTogetherInfo *_entertainmentInfo;
    unsigned long long _subStyle;
}

+ (id)finderLiveStreamElementModelFrom:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long subStyle; // @synthesize subStyle=_subStyle;
@property(retain, nonatomic) FinderLiveStreamPlayTogetherInfo *entertainmentInfo; // @synthesize entertainmentInfo=_entertainmentInfo;
@property(retain, nonatomic) WCFinderLiveCardProductShowcase *productShowcase; // @synthesize productShowcase=_productShowcase;
@property(retain, nonatomic) WCFinderLiveThemeTag *themeTag; // @synthesize themeTag=_themeTag;
@property(retain, nonatomic) WCFinderLiveAggregationCard *aggregationCard; // @synthesize aggregationCard=_aggregationCard;
@property(retain, nonatomic) FinderLiveCardHighlightTag *highlightTag; // @synthesize highlightTag=_highlightTag;
@property(retain, nonatomic) FinderAdExtInfo *adExtInfo; // @synthesize adExtInfo=_adExtInfo;
@property(retain, nonatomic) NSString *objectWording; // @synthesize objectWording=_objectWording;
@property(retain, nonatomic) FinderLiveRelatedExtInfo *relatedExtInfo; // @synthesize relatedExtInfo=_relatedExtInfo;
@property(retain, nonatomic) FinderBannerExtInfo *bannerExtInfo; // @synthesize bannerExtInfo=_bannerExtInfo;
@property(retain, nonatomic) WCFinderLiveStreamJumpModel *jumpModel; // @synthesize jumpModel=_jumpModel;
@property(retain, nonatomic) NSMutableArray *relateLivingDataItems; // @synthesize relateLivingDataItems=_relateLivingDataItems;
@property(retain, nonatomic) WCFinderLiveStreamNoticeCard *noticeCard; // @synthesize noticeCard=_noticeCard;
@property(retain, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) unsigned long long layoutId; // @synthesize layoutId=_layoutId;
- (id)toFinderLiveStreamCard;
- (void)resetExposeSession;
- (void)setAutoPlayTime:(unsigned int)arg1;
- (unsigned int)getAutoPlayTime;
- (void)setAutoPlayStartTs:(unsigned long long)arg1;
- (unsigned long long)getAutoPlayStartTs;
- (void)setExposeValidRatioTime:(unsigned int)arg1;
- (unsigned int)getExposeValidRatioTime;
- (void)setExposeValidRatioStartTs:(unsigned long long)arg1;
- (unsigned long long)getExposeValidRatioStartTs;
- (void)setExposeValidRatioFirstStartTs:(unsigned long long)arg1;
- (unsigned long long)getExposeValidRatioFirstStartTs;
- (void)setExposeStartTs:(unsigned long long)arg1;
- (unsigned long long)getExposeStartTs;

@end

