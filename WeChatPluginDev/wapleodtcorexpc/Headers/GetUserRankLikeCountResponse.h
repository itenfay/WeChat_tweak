//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, RankExtInfo, likeItem;

@interface GetUserRankLikeCountResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *affecteduserlist; // @dynamic affecteduserlist;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *championcoverurl; // @dynamic championcoverurl;
@property(retain, nonatomic) NSString *championmotto; // @dynamic championmotto;
@property(retain, nonatomic) NSString *donationUrl; // @dynamic donationUrl;
@property(retain, nonatomic) NSMutableArray *follows; // @dynamic follows;
@property(retain, nonatomic) NSMutableArray *friendlikelist; // @dynamic friendlikelist;
@property(nonatomic) _Bool hascoverurl; // @dynamic hascoverurl;
@property(nonatomic) _Bool isLikedCover; // @dynamic isLikedCover;
@property(nonatomic) _Bool iscacheexist; // @dynamic iscacheexist;
@property(retain, nonatomic) NSString *jumpchampionurl; // @dynamic jumpchampionurl;
@property(retain, nonatomic) NSMutableArray *likeuserlist; // @dynamic likeuserlist;
@property(retain, nonatomic) NSString *myCoverUrl; // @dynamic myCoverUrl;
@property(retain, nonatomic) likeItem *myInfo; // @dynamic myInfo;
@property(retain, nonatomic) RankExtInfo *rankExtInfo; // @dynamic rankExtInfo;
@property(retain, nonatomic) NSString *rankid; // @dynamic rankid;
@property(nonatomic) unsigned int ranklistShowtype; // @dynamic ranklistShowtype;
@property(retain, nonatomic) NSString *sharetitle; // @dynamic sharetitle;
@property(retain, nonatomic) NSString *shareurl; // @dynamic shareurl;

@end

