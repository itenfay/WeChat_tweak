//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenCircleXPoiInfo, MMListenCircleXTopicItem, MMListenCircleXUserInfo, MMListenSimplePlaylistInfo, NSData, NSMutableArray, NSString;

@interface MMListenCircleXPostInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *aggs; // @dynamic aggs;
@property(retain, nonatomic) NSMutableArray *attachments; // @dynamic attachments;
@property(retain, nonatomic) MMListenCircleXUserInfo *authorInfo; // @dynamic authorInfo;
@property(retain, nonatomic) MMListenSimplePlaylistInfo *circlexPlaylist; // @dynamic circlexPlaylist;
@property(retain, nonatomic) NSData *circlexPlaylistRecommendInfoBuffer; // @dynamic circlexPlaylistRecommendInfoBuffer;
@property(retain, nonatomic) NSMutableArray *commentList; // @dynamic commentList;
@property(nonatomic) int commentNum; // @dynamic commentNum;
@property(nonatomic) unsigned long long createTime; // @dynamic createTime;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(nonatomic) unsigned int exposeNum; // @dynamic exposeNum;
@property(nonatomic) int forwardNum; // @dynamic forwardNum;
@property(retain, nonatomic) NSMutableArray *friendCommentList; // @dynamic friendCommentList;
@property(nonatomic) _Bool isAuthorFollow; // @dynamic isAuthorFollow;
@property(nonatomic) _Bool isLike; // @dynamic isLike;
@property(nonatomic) _Bool isMine; // @dynamic isMine;
@property(nonatomic) _Bool isSelfLike; // @dynamic isSelfLike;
@property(nonatomic) int likeNum; // @dynamic likeNum;
@property(retain, nonatomic) MMListenCircleXPoiInfo *poiInfo; // @dynamic poiInfo;
@property(nonatomic) int publicLikeNum; // @dynamic publicLikeNum;
@property(nonatomic) unsigned int rating; // @dynamic rating;
@property(retain, nonatomic) NSString *recommendDesc; // @dynamic recommendDesc;
@property(nonatomic) unsigned long long secureBits; // @dynamic secureBits;
@property(nonatomic) _Bool showAuthorFollow; // @dynamic showAuthorFollow;
@property(retain, nonatomic) NSString *text; // @dynamic text;
@property(retain, nonatomic) MMListenCircleXTopicItem *topic; // @dynamic topic;
@property(nonatomic) int type; // @dynamic type;

@end

