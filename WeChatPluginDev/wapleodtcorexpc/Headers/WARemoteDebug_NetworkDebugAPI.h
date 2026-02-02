//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface WARemoteDebug_NetworkDebugAPI : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *apiName; // @dynamic apiName;
@property(retain, nonatomic) NSString *requestHeaders; // @dynamic requestHeaders;
@property(retain, nonatomic) NSString *taskId; // @dynamic taskId;
@property(nonatomic) unsigned long long timestamp; // @dynamic timestamp;

@end

