//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface BioPayV2AuthenRequest_BioPayV2ValidateMsg : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long counter; // @dynamic counter;
@property(retain, nonatomic) NSString *cpuId; // @dynamic cpuId;
@property(retain, nonatomic) NSString *fid; // @dynamic fid;
@property(retain, nonatomic) NSString *fpN; // @dynamic fpN;
@property(retain, nonatomic) NSString *raw; // @dynamic raw;
@property(nonatomic) int rsaPssSaltlen; // @dynamic rsaPssSaltlen;
@property(retain, nonatomic) NSString *uid; // @dynamic uid;

@end

