//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface GetVideoInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *ckey; // @dynamic ckey;
@property(retain, nonatomic) NSString *videoCgiUrl; // @dynamic videoCgiUrl;
@property(retain, nonatomic) NSString *videoFileUrl; // @dynamic videoFileUrl;

@end

