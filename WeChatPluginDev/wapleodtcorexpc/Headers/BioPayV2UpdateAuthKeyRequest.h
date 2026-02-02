//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface BioPayV2UpdateAuthKeyRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int biometryType; // @dynamic biometryType;
@property(retain, nonatomic) NSString *elementJson; // @dynamic elementJson;
@property(retain, nonatomic) NSString *elementJsonSignature; // @dynamic elementJsonSignature;
@property(nonatomic) int openType; // @dynamic openType;
@property(retain, nonatomic) NSString *payPasswordInRsa; // @dynamic payPasswordInRsa;
@property(retain, nonatomic) NSString *wcpaysign; // @dynamic wcpaysign;

@end

