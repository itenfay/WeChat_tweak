//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString, PayGenActionLocation;

@interface GetFaceCheckResultReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *actionData; // @dynamic actionData;
@property(retain, nonatomic) NSString *aesKey; // @dynamic aesKey;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long bioId; // @dynamic bioId;
@property(retain, nonatomic) NSData *hash; // @dynamic hash;
@property(nonatomic) unsigned int liveType; // @dynamic liveType;
@property(retain, nonatomic) PayGenActionLocation *location; // @dynamic location;
@property(nonatomic) _Bool needSignContract; // @dynamic needSignContract;
@property(retain, nonatomic) NSString *package; // @dynamic package;
@property(retain, nonatomic) NSString *personId; // @dynamic personId;
@property(nonatomic) float reductionRatio; // @dynamic reductionRatio;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *takeMessage; // @dynamic takeMessage;
@property(retain, nonatomic) NSString *videoFileid; // @dynamic videoFileid;

@end

