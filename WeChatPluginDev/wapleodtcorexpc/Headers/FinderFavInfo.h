//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderIdentityInfo, FinderPoiInteractionInfo, NSMutableArray, NSString;

@interface FinderFavInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *favId; // @dynamic favId;
@property(retain, nonatomic) FinderIdentityInfo *finderIdentity; // @dynamic finderIdentity;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) unsigned int followFlag; // @dynamic followFlag;
@property(retain, nonatomic) NSString *headImgUrl; // @dynamic headImgUrl;
@property(nonatomic) unsigned int identityFlag; // @dynamic identityFlag;
@property(nonatomic) unsigned int interactionCount; // @dynamic interactionCount;
@property(retain, nonatomic) NSMutableArray *interactionLabelList; // @dynamic interactionLabelList;
@property(nonatomic) unsigned int memberFlag; // @dynamic memberFlag;
@property(retain, nonatomic) NSString *nickName; // @dynamic nickName;
@property(nonatomic) unsigned int orderCount; // @dynamic orderCount;
@property(retain, nonatomic) FinderPoiInteractionInfo *poiInteractionInfo; // @dynamic poiInteractionInfo;
@property(nonatomic) unsigned int thankFlag; // @dynamic thankFlag;
@property(nonatomic) unsigned int thankIconType; // @dynamic thankIconType;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

