//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface UploadHDHeadImgResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *bigHeadImgUrl; // @dynamic bigHeadImgUrl;
@property(retain, nonatomic) NSString *finalImgMd5Sum; // @dynamic finalImgMd5Sum;
@property(retain, nonatomic) NSString *smallHeadImgUrl; // @dynamic smallHeadImgUrl;
@property(nonatomic) unsigned int startPos; // @dynamic startPos;
@property(nonatomic) unsigned int totalLen; // @dynamic totalLen;

@end

