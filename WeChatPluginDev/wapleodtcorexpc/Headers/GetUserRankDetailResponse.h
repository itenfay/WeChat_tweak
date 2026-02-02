//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, rankDesc;

@interface GetUserRankDetailResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *affecteduserlist; // @dynamic affecteduserlist;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *buttons; // @dynamic buttons;
@property(retain, nonatomic) NSString *coverurl; // @dynamic coverurl;
@property(retain, nonatomic) NSMutableArray *follows; // @dynamic follows;
@property(nonatomic) _Bool isFollower; // @dynamic isFollower;
@property(nonatomic) _Bool isLike; // @dynamic isLike;
@property(nonatomic) _Bool isLikedCover; // @dynamic isLikedCover;
@property(retain, nonatomic) NSMutableArray *likeList; // @dynamic likeList;
@property(nonatomic) unsigned int likecount; // @dynamic likecount;
@property(retain, nonatomic) NSString *motto; // @dynamic motto;
@property(nonatomic) unsigned int myranknum; // @dynamic myranknum;
@property(retain, nonatomic) rankDesc *rankdesc; // @dynamic rankdesc;
@property(retain, nonatomic) NSMutableArray *rankdetaillist; // @dynamic rankdetaillist;
@property(retain, nonatomic) NSMutableArray *ranklist; // @dynamic ranklist;
@property(retain, nonatomic) NSString *reporturl; // @dynamic reporturl;
@property(retain, nonatomic) NSString *sharetitle; // @dynamic sharetitle;
@property(retain, nonatomic) NSString *shareurl; // @dynamic shareurl;
@property(retain, nonatomic) NSString *source; // @dynamic source;
@property(retain, nonatomic) NSMutableArray *sportGoal; // @dynamic sportGoal;
@property(retain, nonatomic) NSMutableArray *sportrecord; // @dynamic sportrecord;
@property(retain, nonatomic) NSMutableArray *steps; // @dynamic steps;

@end

