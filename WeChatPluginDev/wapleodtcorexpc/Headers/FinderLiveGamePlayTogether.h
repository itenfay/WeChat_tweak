//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveGameInfo, FinderLiveGamePlayTogether_AudienceThreeDimensionalTipsInfo, FinderLiveGamePlayTogether_TopRightCornerInfo, GamePlayTogetherDynamicItemList, NSString;

@interface FinderLiveGamePlayTogether : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bottomWording; // @dynamic bottomWording;
@property(retain, nonatomic) FinderLiveGamePlayTogether_TopRightCornerInfo *cornerInfo; // @dynamic cornerInfo;
@property(retain, nonatomic) GamePlayTogetherDynamicItemList *itemList; // @dynamic itemList;
@property(nonatomic) _Bool liveInThreeDimensionalDirecting; // @dynamic liveInThreeDimensionalDirecting;
@property(nonatomic) unsigned int platformId; // @dynamic platformId;
@property(retain, nonatomic) NSString *playTogetherBubbleWording; // @dynamic playTogetherBubbleWording;
@property(nonatomic) _Bool selfIsThreeDimensionalDirector; // @dynamic selfIsThreeDimensionalDirector;
@property(retain, nonatomic) FinderLiveGameInfo *teamUpInfo; // @dynamic teamUpInfo;
@property(retain, nonatomic) FinderLiveGamePlayTogether_AudienceThreeDimensionalTipsInfo *threeDimensionalTipsInfo; // @dynamic threeDimensionalTipsInfo;

@end

