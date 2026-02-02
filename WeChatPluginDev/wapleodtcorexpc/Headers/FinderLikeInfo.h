//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderContactMsgInfo, FinderIdentityInfo, FinderPoiInteractionInfo, NSMutableArray, NSString;

@interface FinderLikeInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderIdentityInfo *finderIdentity; // @dynamic finderIdentity;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) unsigned int followFlag; // @dynamic followFlag;
@property(retain, nonatomic) NSString *headImgUrl; // @dynamic headImgUrl;
@property(nonatomic) unsigned int identityFlag; // @dynamic identityFlag;
@property(nonatomic) unsigned int interactionCount; // @dynamic interactionCount;
@property(retain, nonatomic) NSMutableArray *interactionLabelList; // @dynamic interactionLabelList;
@property(nonatomic) unsigned int likeFlag; // @dynamic likeFlag;
@property(nonatomic) unsigned long long likeId; // @dynamic likeId;
@property(nonatomic) unsigned long long likeTime; // @dynamic likeTime;
@property(nonatomic) unsigned int memberFlag; // @dynamic memberFlag;
@property(retain, nonatomic) FinderContactMsgInfo *msgInfo; // @dynamic msgInfo;
@property(retain, nonatomic) NSString *nickName; // @dynamic nickName;
@property(nonatomic) unsigned int orderCount; // @dynamic orderCount;
@property(retain, nonatomic) FinderPoiInteractionInfo *poiInteractionInfo; // @dynamic poiInteractionInfo;
@property(nonatomic) unsigned int refuseFlag; // @dynamic refuseFlag;
@property(nonatomic) unsigned int thankFlag; // @dynamic thankFlag;
@property(nonatomic) unsigned int thankIconType; // @dynamic thankIconType;
@property(nonatomic) unsigned int unreadFlag; // @dynamic unreadFlag;
@property(retain, nonatomic) NSString *wxUsername; // @dynamic wxUsername;

@end

