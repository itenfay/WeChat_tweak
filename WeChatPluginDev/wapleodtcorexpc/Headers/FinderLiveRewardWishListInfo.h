//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderLiveRewardWishListInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bannerIconUrl; // @dynamic bannerIconUrl;
@property(retain, nonatomic) NSString *bannerWords; // @dynamic bannerWords;
@property(nonatomic) _Bool enableFlag; // @dynamic enableFlag;
@property(nonatomic) unsigned long long totalCurCount; // @dynamic totalCurCount;
@property(nonatomic) unsigned long long totalTargetCount; // @dynamic totalTargetCount;
@property(retain, nonatomic) NSMutableArray *wishList; // @dynamic wishList;
@property(retain, nonatomic) NSString *wishListId; // @dynamic wishListId;

@end

