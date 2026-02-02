//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface CardOptionRsp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int clickAction; // @dynamic clickAction;
@property(nonatomic) _Bool fastForward; // @dynamic fastForward;
@property(retain, nonatomic) NSString *forwardUsername; // @dynamic forwardUsername;
@property(nonatomic) _Bool isSuccess; // @dynamic isSuccess;
@property(retain, nonatomic) NSString *timelineSessionId; // @dynamic timelineSessionId;

@end

