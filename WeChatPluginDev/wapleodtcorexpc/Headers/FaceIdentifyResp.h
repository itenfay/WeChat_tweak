//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface FaceIdentifyResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *bizNickName; // @dynamic bizNickName;
@property(nonatomic) _Bool canRetry; // @dynamic canRetry;
@property(retain, nonatomic) NSString *errTips; // @dynamic errTips;
@property(retain, nonatomic) NSString *identifyId; // @dynamic identifyId;

@end

