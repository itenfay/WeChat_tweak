//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface MMBizJsApiGetUserOpenIdResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int friendRelation; // @dynamic friendRelation;
@property(retain, nonatomic) NSString *headImgUrl; // @dynamic headImgUrl;
@property(retain, nonatomic) NSString *nickName; // @dynamic nickName;
@property(retain, nonatomic) NSString *opnid; // @dynamic opnid;
@property(retain, nonatomic) NSString *sign; // @dynamic sign;

@end

