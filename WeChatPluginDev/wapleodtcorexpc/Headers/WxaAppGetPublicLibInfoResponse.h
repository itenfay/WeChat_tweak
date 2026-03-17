//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSString;

@class WXPBGeneratedMessage;

@interface WxaAppGetPublicLibInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int forceUpdate; // @dynamic forceUpdate;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(nonatomic) unsigned int needUpdate; // @dynamic needUpdate;
@property(retain, nonatomic) NSString *patchUrl; // @dynamic patchUrl;
@property(retain, nonatomic) NSString *url; // @dynamic url;
@property(nonatomic) unsigned int version; // @dynamic version;

@end

