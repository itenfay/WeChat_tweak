//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface FinderUploadHeadImgResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool completed; // @dynamic completed;
@property(retain, nonatomic) NSString *imgUrl; // @dynamic imgUrl;
@property(nonatomic) unsigned int startPos; // @dynamic startPos;
@property(nonatomic) unsigned int totalLen; // @dynamic totalLen;

@end

