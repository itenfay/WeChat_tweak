//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenCategoryItem, MMListenItem, MMListenJumpInfo, MMListenRecommendInfo, MMListenSubCategoryItem, MMListenUserInfo, NSMutableArray, NSString;

@interface MMListenDiscoverItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) MMListenUserInfo *author; // @dynamic author;
@property(retain, nonatomic) MMListenCategoryItem *categoryInfo; // @dynamic categoryInfo;
@property(retain, nonatomic) NSString *cover; // @dynamic cover;
@property(retain, nonatomic) NSString *discoverId; // @dynamic discoverId;
@property(nonatomic) int duration; // @dynamic duration;
@property(retain, nonatomic) MMListenJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) NSMutableArray *otherCovers; // @dynamic otherCovers;
@property(retain, nonatomic) MMListenRecommendInfo *recommendInfo; // @dynamic recommendInfo;
@property(retain, nonatomic) MMListenItem *singleInfo; // @dynamic singleInfo;
@property(retain, nonatomic) MMListenSubCategoryItem *subCategoryInfo; // @dynamic subCategoryInfo;
@property(retain, nonatomic) NSString *subTitle; // @dynamic subTitle;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int titleRecommendType; // @dynamic titleRecommendType;
@property(retain, nonatomic) NSMutableArray *topListenIds; // @dynamic topListenIds;
@property(retain, nonatomic) NSMutableArray *topListenItems; // @dynamic topListenItems;
@property(nonatomic) int type; // @dynamic type;
@property(nonatomic) int unread; // @dynamic unread;

@end

