//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class CDNClientConfig, CDNDnsInfo, SKBuiltinBuffer_t;

@interface CdnInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) CDNDnsInfo *appDnsInfo; // @dynamic appDnsInfo;
@property(retain, nonatomic) SKBuiltinBuffer_t *cdndnsRuleBuf; // @dynamic cdndnsRuleBuf;
@property(retain, nonatomic) CDNClientConfig *defaultConfig; // @dynamic defaultConfig;
@property(retain, nonatomic) CDNClientConfig *disasterConfig; // @dynamic disasterConfig;
@property(retain, nonatomic) CDNDnsInfo *dnsInfo; // @dynamic dnsInfo;
@property(retain, nonatomic) SKBuiltinBuffer_t *fakeCdndnsRuleBuf; // @dynamic fakeCdndnsRuleBuf;
@property(retain, nonatomic) CDNDnsInfo *fakeDnsInfo; // @dynamic fakeDnsInfo;
@property(nonatomic) int getCdnDnsIntervalMs; // @dynamic getCdnDnsIntervalMs;
@property(retain, nonatomic) CDNDnsInfo *snsDnsInfo; // @dynamic snsDnsInfo;

@end

