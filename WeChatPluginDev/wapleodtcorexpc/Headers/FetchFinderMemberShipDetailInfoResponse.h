//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FetchFinderMemberShipDetailInfoResponse_AuthorMemberInfo, FetchFinderMemberShipDetailInfoResponse_MemberCollectionInfo, FetchFinderMemberShipDetailInfoResponse_VisitorMemberInfo, FetchFinderMemberShipDetailInfoResponse_VisitorNonMemberInfo, FinderContact, FinderObject, NSMutableArray, NSString;

@interface FetchFinderMemberShipDetailInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FetchFinderMemberShipDetailInfoResponse_AuthorMemberInfo *authorMemberInfo; // @dynamic authorMemberInfo;
@property(nonatomic) unsigned int autoMembershipServicePrice; // @dynamic autoMembershipServicePrice;
@property(nonatomic) unsigned int autoRenewSwitch; // @dynamic autoRenewSwitch;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderContact *contact; // @dynamic contact;
@property(retain, nonatomic) FinderObject *currentLive; // @dynamic currentLive;
@property(nonatomic) unsigned long long extMask; // @dynamic extMask;
@property(nonatomic) unsigned int homeLineSwitch; // @dynamic homeLineSwitch;
@property(retain, nonatomic) FetchFinderMemberShipDetailInfoResponse_MemberCollectionInfo *memberCollection; // @dynamic memberCollection;
@property(retain, nonatomic) NSString *memberRightsUrl; // @dynamic memberRightsUrl;
@property(nonatomic) unsigned int membershipServicePrice; // @dynamic membershipServicePrice;
@property(nonatomic) unsigned int membershipStatus; // @dynamic membershipStatus;
@property(retain, nonatomic) NSString *membershipZoneDesc; // @dynamic membershipZoneDesc;
@property(retain, nonatomic) NSString *membershipZoneTitle; // @dynamic membershipZoneTitle;
@property(nonatomic) unsigned long long msId; // @dynamic msId;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(nonatomic) unsigned int previewMode; // @dynamic previewMode;
@property(retain, nonatomic) NSMutableArray *statisticalInfoList; // @dynamic statisticalInfoList;
@property(nonatomic) unsigned int visitorMemberBlockFlag; // @dynamic visitorMemberBlockFlag;
@property(retain, nonatomic) FetchFinderMemberShipDetailInfoResponse_VisitorMemberInfo *visitorMemberInfo; // @dynamic visitorMemberInfo;
@property(nonatomic) unsigned int visitorMemberStatus; // @dynamic visitorMemberStatus;
@property(retain, nonatomic) FetchFinderMemberShipDetailInfoResponse_VisitorNonMemberInfo *visitorNonMemberInfo; // @dynamic visitorNonMemberInfo;
@property(retain, nonatomic) NSString *wecoinProductId; // @dynamic wecoinProductId;

@end

