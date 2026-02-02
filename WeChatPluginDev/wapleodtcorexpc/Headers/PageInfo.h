//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseEvent, NSString;

@interface PageInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int action; // @dynamic action;
@property(retain, nonatomic) BaseEvent *baseEvent; // @dynamic baseEvent;
@property(nonatomic) int outType; // @dynamic outType;
@property(retain, nonatomic) NSString *pagename; // @dynamic pagename;

@end

