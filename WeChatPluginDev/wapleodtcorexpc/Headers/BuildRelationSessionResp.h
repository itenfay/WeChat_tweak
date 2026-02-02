//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface BuildRelationSessionResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int expiresIn; // @dynamic expiresIn;
@property(retain, nonatomic) NSString *ilinkImSdkId; // @dynamic ilinkImSdkId;
@property(retain, nonatomic) NSString *ilinkIotUserId; // @dynamic ilinkIotUserId;
@property(nonatomic) unsigned int relationType; // @dynamic relationType;
@property(retain, nonatomic) NSString *sessionCode; // @dynamic sessionCode;

@end

