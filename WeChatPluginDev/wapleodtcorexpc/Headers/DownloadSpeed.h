//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface DownloadSpeed : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *clientIp; // @dynamic clientIp;
@property(nonatomic) unsigned long long costMs; // @dynamic costMs;
@property(nonatomic) unsigned long long endTime; // @dynamic endTime;
@property(nonatomic) unsigned long long moovCostMs; // @dynamic moovCostMs;
@property(nonatomic) unsigned long long moovSizeByte; // @dynamic moovSizeByte;
@property(nonatomic) int netType; // @dynamic netType;
@property(nonatomic) unsigned int networkId; // @dynamic networkId;
@property(retain, nonatomic) NSString *serverIp; // @dynamic serverIp;
@property(nonatomic) unsigned long long sizeByte; // @dynamic sizeByte;
@property(nonatomic) unsigned long long startTime; // @dynamic startTime;

@end

