//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface FinderAIMediaGenerateResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *generateKey; // @dynamic generateKey;
@property(nonatomic) unsigned int queryInterval; // @dynamic queryInterval;
@property(nonatomic) unsigned int queryMaxTimes; // @dynamic queryMaxTimes;

@end

