//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface GetWebTransTextResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *brandWording; // @dynamic brandWording;
@property(nonatomic) unsigned int msgCount; // @dynamic msgCount;
@property(retain, nonatomic) NSMutableArray *rawRet; // @dynamic rawRet;
@property(nonatomic) int status; // @dynamic status;
@property(retain, nonatomic) NSMutableArray *targets; // @dynamic targets;
@property(retain, nonatomic) NSString *tolang; // @dynamic tolang;

@end

