//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, FinderLiveAggregationCardBulletMsgList, FinderLiveAggregationCardButton, FinderThemeLiveStreamAppearance, FinderThemeLiveStreamPreLoadConfig, NSData, NSMutableArray, NSString;

@interface FinderLiveAggregationCard : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *anchorGroup; // @dynamic anchorGroup;
@property(retain, nonatomic) FinderLiveAggregationCardBulletMsgList *bulletMsgList; // @dynamic bulletMsgList;
@property(retain, nonatomic) FinderLiveAggregationCardButton *button; // @dynamic button;
@property(retain, nonatomic) NSMutableArray *cardBackgroundColor; // @dynamic cardBackgroundColor;
@property(retain, nonatomic) NSString *cardBackgroundImgUrl; // @dynamic cardBackgroundImgUrl;
@property(nonatomic) unsigned int cardBackgroundMode; // @dynamic cardBackgroundMode;
@property(retain, nonatomic) NSData *cardBuffer; // @dynamic cardBuffer;
@property(retain, nonatomic) NSString *cardId; // @dynamic cardId;
@property(nonatomic) unsigned int cardMode; // @dynamic cardMode;
@property(nonatomic) unsigned int cardType; // @dynamic cardType;
@property(nonatomic) unsigned int groupRefreshTimeIntervalMs; // @dynamic groupRefreshTimeIntervalMs;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) NSMutableArray *liveBackgroundColor; // @dynamic liveBackgroundColor;
@property(retain, nonatomic) NSMutableArray *object; // @dynamic object;
@property(nonatomic) unsigned int playTogetherLiveType; // @dynamic playTogetherLiveType;
@property(retain, nonatomic) NSMutableArray *productGroup; // @dynamic productGroup;
@property(retain, nonatomic) FinderThemeLiveStreamAppearance *themeAppearance; // @dynamic themeAppearance;
@property(retain, nonatomic) NSString *themeId; // @dynamic themeId;
@property(retain, nonatomic) NSString *themeImgUrl; // @dynamic themeImgUrl;
@property(retain, nonatomic) FinderThemeLiveStreamPreLoadConfig *themePreloadConfig; // @dynamic themePreloadConfig;
@property(retain, nonatomic) NSString *themeSubText; // @dynamic themeSubText;
@property(retain, nonatomic) NSMutableArray *themeSubTextColor; // @dynamic themeSubTextColor;
@property(retain, nonatomic) NSString *themeText; // @dynamic themeText;
@property(retain, nonatomic) NSMutableArray *themeTextColor; // @dynamic themeTextColor;

@end

