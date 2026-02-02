//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderObjectDesc, NSString;

@interface FinderMemberQAOprQARequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long clientMs; // @dynamic clientMs;
@property(retain, nonatomic) NSString *clientid; // @dynamic clientid;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *msProviderUsername; // @dynamic msProviderUsername;
@property(retain, nonatomic) NSString *myUsername; // @dynamic myUsername;
@property(retain, nonatomic) FinderObjectDesc *objectDesc; // @dynamic objectDesc;
@property(nonatomic) unsigned int oprRole; // @dynamic oprRole;
@property(nonatomic) unsigned int oprType; // @dynamic oprType;
@property(nonatomic) unsigned long long postFlag; // @dynamic postFlag;
@property(nonatomic) unsigned long long refObjectid; // @dynamic refObjectid;

@end

