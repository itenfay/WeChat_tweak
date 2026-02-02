//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, SKBuiltinBuffer_t;

@interface RegAffiliatedAcctResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) SKBuiltinBuffer_t *finderContact; // @dynamic finderContact;
@property(retain, nonatomic) NSString *randomPasswd; // @dynamic randomPasswd;
@property(nonatomic) unsigned int uin; // @dynamic uin;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

