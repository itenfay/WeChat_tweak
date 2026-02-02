//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderJumpInfo, FinderLiveAggregationCardBulletMsgList, FinderLiveAggregationCardButton, FinderThemeLiveStreamAppearance, FinderThemeLiveStreamPreLoadConfig, NSData, NSMutableArray, NSString;

@interface WCFinderLiveAggregationCard : NSObject
{
    unsigned int _cardMode;
    unsigned int _cardBackgroundMode;
    unsigned int _cardType;
    unsigned int _playTogetherLiveType;
    unsigned int _groupRefreshTimeIntervalMs;
    NSString *_cardId;
    NSMutableArray *_cardBackgroundColor;
    NSString *_cardBackgroundImgUrl;
    NSString *_themeText;
    NSString *_themeImgUrl;
    NSMutableArray *_themeTextColor;
    NSString *_themeId;
    NSMutableArray *_object;
    NSMutableArray *_liveBackgroundColor;
    FinderThemeLiveStreamAppearance *_themeAppearance;
    NSString *_themeSubText;
    NSMutableArray *_themeSubTextColor;
    NSData *_cardBuffer;
    NSMutableArray *_anchorGroup;
    NSMutableArray *_productGroup;
    FinderLiveAggregationCardButton *_button;
    FinderLiveAggregationCardBulletMsgList *_bulletMsgList;
    FinderThemeLiveStreamPreLoadConfig *_themePreloadConfig;
    FinderJumpInfo *_jumpInfo;
}

+ (id)finderLiveStreamAggregationCardFrom:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int groupRefreshTimeIntervalMs; // @synthesize groupRefreshTimeIntervalMs=_groupRefreshTimeIntervalMs;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) FinderThemeLiveStreamPreLoadConfig *themePreloadConfig; // @synthesize themePreloadConfig=_themePreloadConfig;
@property(nonatomic) unsigned int playTogetherLiveType; // @synthesize playTogetherLiveType=_playTogetherLiveType;
@property(retain, nonatomic) FinderLiveAggregationCardBulletMsgList *bulletMsgList; // @synthesize bulletMsgList=_bulletMsgList;
@property(retain, nonatomic) FinderLiveAggregationCardButton *button; // @synthesize button=_button;
@property(nonatomic) unsigned int cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) NSMutableArray *productGroup; // @synthesize productGroup=_productGroup;
@property(retain, nonatomic) NSMutableArray *anchorGroup; // @synthesize anchorGroup=_anchorGroup;
@property(retain, nonatomic) NSData *cardBuffer; // @synthesize cardBuffer=_cardBuffer;
@property(retain, nonatomic) NSMutableArray *themeSubTextColor; // @synthesize themeSubTextColor=_themeSubTextColor;
@property(retain, nonatomic) NSString *themeSubText; // @synthesize themeSubText=_themeSubText;
@property(retain, nonatomic) FinderThemeLiveStreamAppearance *themeAppearance; // @synthesize themeAppearance=_themeAppearance;
@property(retain, nonatomic) NSMutableArray *liveBackgroundColor; // @synthesize liveBackgroundColor=_liveBackgroundColor;
@property(retain, nonatomic) NSMutableArray *object; // @synthesize object=_object;
@property(retain, nonatomic) NSString *themeId; // @synthesize themeId=_themeId;
@property(retain, nonatomic) NSMutableArray *themeTextColor; // @synthesize themeTextColor=_themeTextColor;
@property(retain, nonatomic) NSString *themeImgUrl; // @synthesize themeImgUrl=_themeImgUrl;
@property(retain, nonatomic) NSString *themeText; // @synthesize themeText=_themeText;
@property(retain, nonatomic) NSString *cardBackgroundImgUrl; // @synthesize cardBackgroundImgUrl=_cardBackgroundImgUrl;
@property(retain, nonatomic) NSMutableArray *cardBackgroundColor; // @synthesize cardBackgroundColor=_cardBackgroundColor;
@property(nonatomic) unsigned int cardBackgroundMode; // @synthesize cardBackgroundMode=_cardBackgroundMode;
@property(nonatomic) unsigned int cardMode; // @synthesize cardMode=_cardMode;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
- (id)toFinderLiveStreamAggregationCard;

@end

