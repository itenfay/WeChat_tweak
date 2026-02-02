//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ECDHKey, NSString, SKBuiltinBuffer_t;

@interface ManualAuthRsaReqData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ECDHKey *cliPubEcdhkey; // @dynamic cliPubEcdhkey;
@property(retain, nonatomic) NSString *pwd; // @dynamic pwd;
@property(retain, nonatomic) NSString *pwd2; // @dynamic pwd2;
@property(retain, nonatomic) SKBuiltinBuffer_t *randomEncryKey; // @dynamic randomEncryKey;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

