//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface GetBizJsApiRedirectUrlReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *corpId; // @dynamic corpId;
@property(retain, nonatomic) NSString *fromUrl; // @dynamic fromUrl;
@property(retain, nonatomic) NSString *groupId; // @dynamic groupId;
@property(retain, nonatomic) NSString *nonceStr; // @dynamic nonceStr;
@property(retain, nonatomic) NSString *postData; // @dynamic postData;
@property(retain, nonatomic) NSString *signature; // @dynamic signature;
@property(retain, nonatomic) NSString *timeStamp; // @dynamic timeStamp;

@end

