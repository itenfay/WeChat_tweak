//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, PopItem;

@interface OpenECardAuthRes : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) PopItem *guideInfo; // @dynamic guideInfo;
@property(nonatomic) _Bool isReuseExistingEcard; // @dynamic isReuseExistingEcard;
@property(nonatomic) _Bool isTokenInvalid; // @dynamic isTokenInvalid;
@property(retain, nonatomic) NSString *reqSerial; // @dynamic reqSerial;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) NSString *rettext; // @dynamic rettext;

@end

