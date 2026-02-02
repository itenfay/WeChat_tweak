//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class CmdInfo, NSMutableArray, RetryStrategy, RouteInfo;

@interface ControlInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *asyncCmdInfo; // @dynamic asyncCmdInfo;
@property(retain, nonatomic) CmdInfo *cmdInfo; // @dynamic cmdInfo;
@property(retain, nonatomic) RetryStrategy *retryStrategy; // @dynamic retryStrategy;
@property(retain, nonatomic) RouteInfo *routeInfo; // @dynamic routeInfo;
@property(nonatomic) int type; // @dynamic type;

@end

