//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveNoticeListInfo, NSData, NSMutableArray, NSString;

@interface FetchFinderMemberShipHomeInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int autoMembershipServicePrice; // @dynamic autoMembershipServicePrice;
@property(nonatomic) unsigned int autoRenewSwitch; // @dynamic autoRenewSwitch;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) NSString *finderMemberTicket; // @dynamic finderMemberTicket;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) FinderLiveNoticeListInfo *liveNoticeListInfo; // @dynamic liveNoticeListInfo;
@property(nonatomic) unsigned int membershipServicePrice; // @dynamic membershipServicePrice;
@property(nonatomic) unsigned int membershipStatus; // @dynamic membershipStatus;
@property(retain, nonatomic) NSString *membershipZoneCommonSubtitle; // @dynamic membershipZoneCommonSubtitle;
@property(nonatomic) unsigned int membershipZoneSubtitleType; // @dynamic membershipZoneSubtitleType;
@property(retain, nonatomic) NSString *membershipZoneTitle; // @dynamic membershipZoneTitle;
@property(retain, nonatomic) NSMutableArray *object; // @dynamic object;
@property(nonatomic) unsigned int otherVideoNum; // @dynamic otherVideoNum;
@property(nonatomic) unsigned int visitorMemberBlockFlag; // @dynamic visitorMemberBlockFlag;
@property(nonatomic) unsigned int visitorMemberStatus; // @dynamic visitorMemberStatus;
@property(retain, nonatomic) NSString *wecoinProductId; // @dynamic wecoinProductId;

@end

