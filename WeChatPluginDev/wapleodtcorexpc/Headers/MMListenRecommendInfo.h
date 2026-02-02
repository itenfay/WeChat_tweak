//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ClientSessionInfo, MMListenRecommendInfo_Activity, MMListenRecommendInfo_ClientRecommendInfo, MMListenRecommendInfo_PlayableInfo, MMListenRecommendInfo_ReviewInfo, MMListenRecommendInfo_StatisticsData, MMListenRecommendInfo_VipLimitFree, NSData, NSMutableArray, NSString;

@interface MMListenRecommendInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)jumpCategoryEntryStr;
- (_Bool)shouldShowJumpCategoryEntry;
- (id)friendRecommendUserListLabelStr;
- (id)socialRecommendReasonLabelStr;
- (id)rawRecommendReasonLabelStrForAudio;
- (id)firstUserNickNameRichText;
- (id)friendRecommendReasonLabelStrWithoutTime;
- (id)friendRecommendReasonLabelStr;
- (_Bool)shouldShowFriendRecommend;

// Remaining properties
@property(retain, nonatomic) MMListenRecommendInfo_Activity *activity; // @dynamic activity;
@property(retain, nonatomic) NSString *audioCtxBuffer; // @dynamic audioCtxBuffer;
@property(nonatomic) int circleOffset; // @dynamic circleOffset;
@property(retain, nonatomic) NSString *circleSessionId; // @dynamic circleSessionId;
@property(retain, nonatomic) MMListenRecommendInfo_ClientRecommendInfo *clientRecommendInfo; // @dynamic clientRecommendInfo;
@property(retain, nonatomic) ClientSessionInfo *clientSessionInfo; // @dynamic clientSessionInfo;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) NSString *feedidlistUniqueId; // @dynamic feedidlistUniqueId;
@property(retain, nonatomic) NSString *globalDesc; // @dynamic globalDesc;
@property(nonatomic) _Bool isHideAfterClick; // @dynamic isHideAfterClick;
@property(nonatomic) _Bool isPinned; // @dynamic isPinned;
@property(retain, nonatomic) NSString *jumpCategoryId; // @dynamic jumpCategoryId;
@property(retain, nonatomic) NSString *jumpCategoryName; // @dynamic jumpCategoryName;
@property(nonatomic) int jumpCategoryType; // @dynamic jumpCategoryType;
@property(retain, nonatomic) NSData *musicGlobalContextBuffer; // @dynamic musicGlobalContextBuffer;
@property(retain, nonatomic) NSMutableArray *newDescList; // @dynamic newDescList;
@property(retain, nonatomic) MMListenRecommendInfo_PlayableInfo *playableInfo; // @dynamic playableInfo;
@property(retain, nonatomic) NSData *recommendBuffer; // @dynamic recommendBuffer;
@property(retain, nonatomic) NSString *recommendId; // @dynamic recommendId;
@property(retain, nonatomic) NSData *reddotClientBuffer; // @dynamic reddotClientBuffer;
@property(retain, nonatomic) NSData *reddotContextBuffer; // @dynamic reddotContextBuffer;
@property(retain, nonatomic) NSString *requestId; // @dynamic requestId;
@property(retain, nonatomic) MMListenRecommendInfo_ReviewInfo *reviewInfo; // @dynamic reviewInfo;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;
@property(nonatomic) _Bool showReddot; // @dynamic showReddot;
@property(retain, nonatomic) MMListenRecommendInfo_StatisticsData *statData; // @dynamic statData;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) NSMutableArray *users; // @dynamic users;
@property(retain, nonatomic) MMListenRecommendInfo_VipLimitFree *vipLimitFree; // @dynamic vipLimitFree;

@end

