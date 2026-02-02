//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface AuthenTouchPayInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bioPayV2AuthenRequest; // @dynamic bioPayV2AuthenRequest;
@property(retain, nonatomic) NSString *encryptedPayInfo; // @dynamic encryptedPayInfo;
@property(retain, nonatomic) NSString *encryptedRsaSign; // @dynamic encryptedRsaSign;
@property(nonatomic) unsigned int fpIdentifyNum; // @dynamic fpIdentifyNum;
@property(retain, nonatomic) NSString *soterReq; // @dynamic soterReq;
@property(nonatomic) _Bool useTouch; // @dynamic useTouch;

@end

