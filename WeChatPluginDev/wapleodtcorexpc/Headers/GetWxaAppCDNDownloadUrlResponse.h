//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface GetWxaAppCDNDownloadUrlResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int lifespan; // @dynamic lifespan;
@property(retain, nonatomic) NSString *patchUrl; // @dynamic patchUrl;
@property(nonatomic) int ret; // @dynamic ret;
@property(retain, nonatomic) NSString *url; // @dynamic url;
@property(retain, nonatomic) NSString *zstdUrl; // @dynamic zstdUrl;

@end

