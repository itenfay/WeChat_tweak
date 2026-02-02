//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface CDNDnsInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) SKBuiltinBuffer_t *authKey; // @dynamic authKey;
@property(nonatomic) unsigned int expireTime; // @dynamic expireTime;
@property(nonatomic) unsigned int fakeUin; // @dynamic fakeUin;
@property(nonatomic) int frontId; // @dynamic frontId;
@property(nonatomic) int frontIpcount; // @dynamic frontIpcount;
@property(retain, nonatomic) NSMutableArray *frontIplist; // @dynamic frontIplist;
@property(nonatomic) int frontIpportCount; // @dynamic frontIpportCount;
@property(retain, nonatomic) NSMutableArray *frontIpportList; // @dynamic frontIpportList;
@property(retain, nonatomic) SKBuiltinBuffer_t *newAuthKey; // @dynamic newAuthKey;
@property(nonatomic) unsigned int uin; // @dynamic uin;
@property(nonatomic) unsigned int ver; // @dynamic ver;
@property(retain, nonatomic) NSString *zoneDomain; // @dynamic zoneDomain;
@property(nonatomic) int zoneId; // @dynamic zoneId;
@property(nonatomic) int zoneIpcount; // @dynamic zoneIpcount;
@property(retain, nonatomic) NSMutableArray *zoneIplist; // @dynamic zoneIplist;
@property(nonatomic) int zoneIpportCount; // @dynamic zoneIpportCount;
@property(retain, nonatomic) NSMutableArray *zoneIpportList; // @dynamic zoneIpportList;

@end

