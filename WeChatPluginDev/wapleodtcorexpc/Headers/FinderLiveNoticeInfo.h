//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveNoticeInfo_ConcertInfo, FinderLiveNoticeInfo_MembershipInfo, FinderLiveNoticeInfo_PayInfo, FinderLiveNoticeInfo_PersonalColumnInfo, MMFinderLiveCouponItem, NSArray, NSMutableArray, NSString;

@interface FinderLiveNoticeInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (_Bool)isNoticeForConcert;
- (void)prepareCoupons;
@property(readonly, nonatomic) MMFinderLiveCouponItem *validCoupon;
@property(readonly, nonatomic) MMFinderLiveCouponItem *coupon;
@property(readonly, copy, nonatomic) NSArray *coupons;
@property(retain, nonatomic) NSString *mm_anchorFinderUsername;
- (long long)mm_exposeActionType;
- (_Bool)mm_isMember;
- (_Bool)mm_isOwner;
- (_Bool)mm_isVisitor;
- (_Bool)mm_isMemberLive;
@property(readonly, nonatomic) _Bool isQuickNotice;
- (_Bool)isEqual:(id)arg1;
- (id)copy;
- (id)archivedWCTValue;

// Remaining properties
@property(retain, nonatomic) NSString *activityId; // @dynamic activityId;
@property(retain, nonatomic) NSString *bgImgUrl; // @dynamic bgImgUrl;
@property(retain, nonatomic) FinderLiveNoticeInfo_MembershipInfo *boundMembershipInfo; // @dynamic boundMembershipInfo;
@property(retain, nonatomic) FinderLiveNoticeInfo_PersonalColumnInfo *boundPersonalColumnInfo; // @dynamic boundPersonalColumnInfo;
@property(retain, nonatomic) FinderLiveNoticeInfo_ConcertInfo *concertInfo; // @dynamic concertInfo;
@property(retain, nonatomic) NSString *coverImgUrl; // @dynamic coverImgUrl;
@property(retain, nonatomic) NSString *introduction; // @dynamic introduction;
@property(retain, nonatomic) NSString *introductionExtend; // @dynamic introductionExtend;
@property(nonatomic) _Bool isHiddenInFeedByAudience; // @dynamic isHiddenInFeedByAudience;
@property(nonatomic) _Bool isTop; // @dynamic isTop;
@property(retain, nonatomic) NSMutableArray *jumpInfo; // @dynamic jumpInfo;
@property(nonatomic) unsigned int noticeAggregateType; // @dynamic noticeAggregateType;
@property(nonatomic) unsigned int noticeFlag; // @dynamic noticeFlag;
@property(retain, nonatomic) NSString *noticeId; // @dynamic noticeId;
@property(nonatomic) unsigned int noticeStarttimeType; // @dynamic noticeStarttimeType;
@property(nonatomic) unsigned int noticeStatus; // @dynamic noticeStatus;
@property(nonatomic) unsigned int noticeType; // @dynamic noticeType;
@property(retain, nonatomic) FinderLiveNoticeInfo_PayInfo *payInfo; // @dynamic payInfo;
@property(retain, nonatomic) NSMutableArray *recommendReasons; // @dynamic recommendReasons;
@property(nonatomic) unsigned int reservationCount; // @dynamic reservationCount;
@property(nonatomic) unsigned int startTime; // @dynamic startTime;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(nonatomic) unsigned int triggerType; // @dynamic triggerType;

@end

