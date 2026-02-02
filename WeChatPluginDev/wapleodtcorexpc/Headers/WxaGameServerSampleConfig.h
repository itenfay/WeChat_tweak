//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface WxaGameServerSampleConfig : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int imageQuality; // @dynamic imageQuality;
@property(nonatomic) unsigned int imageSampleLevel; // @dynamic imageSampleLevel;
@property(retain, nonatomic) NSString *keyEventSampleConfig; // @dynamic keyEventSampleConfig;
@property(retain, nonatomic) NSData *pubKey; // @dynamic pubKey;
@property(nonatomic) unsigned int sampleNetworkBits; // @dynamic sampleNetworkBits;
@property(nonatomic) _Bool shouldDoSample; // @dynamic shouldDoSample;

@end

