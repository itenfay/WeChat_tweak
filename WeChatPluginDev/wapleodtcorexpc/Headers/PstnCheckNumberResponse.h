//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface PstnCheckNumberResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(retain, nonatomic) NSString *pureNumber; // @dynamic pureNumber;
@property(nonatomic) unsigned int result; // @dynamic result;

@end

