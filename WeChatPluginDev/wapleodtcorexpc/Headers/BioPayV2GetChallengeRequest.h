//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface BioPayV2GetChallengeRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int biometryType; // @dynamic biometryType;
@property(retain, nonatomic) NSString *cpuId; // @dynamic cpuId;
@property(nonatomic) int openType; // @dynamic openType;
@property(nonatomic) int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *uid; // @dynamic uid;

@end

