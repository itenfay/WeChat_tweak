//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface GetVoiceprintTicketRsaRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int getScence; // @dynamic getScence;
@property(retain, nonatomic) SKBuiltinBuffer_t *randomEncryKey; // @dynamic randomEncryKey;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

