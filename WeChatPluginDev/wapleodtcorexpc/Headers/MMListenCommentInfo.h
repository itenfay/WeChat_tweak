//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenDigitalAlbumInfo, MMListenExtShowInfo, MMListenFootprintInfo, MMListenJumpInfo, MMListenMusicRewardInfo, MMListenRecommendInfo, NSMutableArray, NSString;

@interface MMListenCommentInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)categoryItemCommentInfoDesc;

// Remaining properties
@property(nonatomic) unsigned long long audioOptionBits; // @dynamic audioOptionBits;
@property(nonatomic) int commentNum; // @dynamic commentNum;
@property(nonatomic) unsigned long long commentSecureBits; // @dynamic commentSecureBits;
@property(nonatomic) int commentType; // @dynamic commentType;
@property(retain, nonatomic) NSString *countWording; // @dynamic countWording;
@property(retain, nonatomic) NSString *debugUrl; // @dynamic debugUrl;
@property(retain, nonatomic) MMListenDigitalAlbumInfo *digitalAlbumInfo; // @dynamic digitalAlbumInfo;
@property(retain, nonatomic) MMListenExtShowInfo *extShowInfo; // @dynamic extShowInfo;
@property(retain, nonatomic) NSMutableArray *featuredCommentList; // @dynamic featuredCommentList;
@property(retain, nonatomic) MMListenJumpInfo *feedbackJumpInfo; // @dynamic feedbackJumpInfo;
@property(retain, nonatomic) NSString *feedbackUrl; // @dynamic feedbackUrl;
@property(retain, nonatomic) NSString *finderCommentAppname; // @dynamic finderCommentAppname;
@property(retain, nonatomic) NSString *finderCommentEntityId; // @dynamic finderCommentEntityId;
@property(retain, nonatomic) MMListenFootprintInfo *footprintInfo; // @dynamic footprintInfo;
@property(nonatomic) int friendLikeNum; // @dynamic friendLikeNum;
@property(nonatomic) _Bool hasCoverSong; // @dynamic hasCoverSong;
@property(nonatomic) _Bool isLiked; // @dynamic isLiked;
@property(nonatomic) _Bool isStar; // @dynamic isStar;
@property(nonatomic) _Bool isSubscribed; // @dynamic isSubscribed;
@property(nonatomic) _Bool isThumbUp; // @dynamic isThumbUp;
@property(nonatomic) int likeNum; // @dynamic likeNum;
@property(retain, nonatomic) NSMutableArray *likeUsers; // @dynamic likeUsers;
@property(nonatomic) int listenNum; // @dynamic listenNum;
@property(retain, nonatomic) NSMutableArray *musicStories; // @dynamic musicStories;
@property(retain, nonatomic) NSString *nonceId; // @dynamic nonceId;
@property(retain, nonatomic) NSMutableArray *publicLikeUsers; // @dynamic publicLikeUsers;
@property(retain, nonatomic) NSString *recommendDesc; // @dynamic recommendDesc;
@property(retain, nonatomic) MMListenRecommendInfo *recommendInfo; // @dynamic recommendInfo;
@property(retain, nonatomic) NSMutableArray *recommendNewDescList; // @dynamic recommendNewDescList;
@property(nonatomic) int recommendType; // @dynamic recommendType;
@property(retain, nonatomic) MMListenMusicRewardInfo *rewardInfo; // @dynamic rewardInfo;
@property(nonatomic) int shareNum; // @dynamic shareNum;
@property(nonatomic) _Bool showAllLikeList; // @dynamic showAllLikeList;
@property(nonatomic) int starNum; // @dynamic starNum;
@property(retain, nonatomic) NSString *statusBase64; // @dynamic statusBase64;
@property(retain, nonatomic) NSString *statusCoverUrl; // @dynamic statusCoverUrl;
@property(retain, nonatomic) NSString *statusIconId; // @dynamic statusIconId;
@property(retain, nonatomic) NSString *statusTailIconText; // @dynamic statusTailIconText;
@property(retain, nonatomic) NSString *statusTailIconUrl; // @dynamic statusTailIconUrl;
@property(retain, nonatomic) NSString *tid; // @dynamic tid;

@end

