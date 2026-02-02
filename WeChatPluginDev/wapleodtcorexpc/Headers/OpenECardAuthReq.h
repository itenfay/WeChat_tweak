//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface OpenECardAuthReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *ecardType; // @dynamic ecardType;
@property(nonatomic) unsigned int openScene; // @dynamic openScene;
@property(retain, nonatomic) NSString *token; // @dynamic token;
@property(retain, nonatomic) NSString *wxpPasswdEnc; // @dynamic wxpPasswdEnc;

@end

