//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface ServerPSKHandShakeResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *hmacSignature; // @dynamic hmacSignature;
@property(retain, nonatomic) NSData *localBaseKey; // @dynamic localBaseKey;
@property(retain, nonatomic) NSString *signaturePlainJson; // @dynamic signaturePlainJson;

@end

