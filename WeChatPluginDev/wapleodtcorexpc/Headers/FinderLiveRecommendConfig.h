//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, NSMutableArray;

@interface FinderLiveRecommendConfig : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderJumpInfo *citySelectorJumpInfo; // @dynamic citySelectorJumpInfo;
@property(nonatomic) _Bool noRecommendToAllCity; // @dynamic noRecommendToAllCity;
@property(nonatomic) unsigned int noRecommendToFriend; // @dynamic noRecommendToFriend;
@property(nonatomic) unsigned int recommendCityCount; // @dynamic recommendCityCount;
@property(retain, nonatomic) NSMutableArray *recommendCityList; // @dynamic recommendCityList;
@property(retain, nonatomic) NSMutableArray *translateRecommendCityList; // @dynamic translateRecommendCityList;

@end

