//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, PubKeyInfo, SKBuiltinBuffer_t;

@interface H5AuthRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SKBuiltinBuffer_t *ccdata; // @dynamic ccdata;
@property(retain, nonatomic) NSString *h5Domain; // @dynamic h5Domain;
@property(nonatomic) unsigned int h5Version; // @dynamic h5Version;
@property(retain, nonatomic) PubKeyInfo *pubkey; // @dynamic pubkey;
@property(retain, nonatomic) NSString *scope; // @dynamic scope;

@end

