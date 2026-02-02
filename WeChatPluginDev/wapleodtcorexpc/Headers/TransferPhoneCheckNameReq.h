//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface TransferPhoneCheckNameReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *getRcvrExt; // @dynamic getRcvrExt;
@property(retain, nonatomic) NSString *inputName; // @dynamic inputName;
@property(retain, nonatomic) NSString *rcvrOpenid; // @dynamic rcvrOpenid;
@property(retain, nonatomic) NSString *rcvrToken; // @dynamic rcvrToken;
@property(nonatomic) unsigned int reason; // @dynamic reason;
@property(retain, nonatomic) NSString *spamInfoToken; // @dynamic spamInfoToken;

@end

