//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AddMsg, NSData, NSString;

@interface AddBypMsg : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *extinfo; // @dynamic extinfo;
@property(nonatomic) _Bool isSender; // @dynamic isSender;
@property(retain, nonatomic) AddMsg *msg; // @dynamic msg;
@property(retain, nonatomic) NSString *msgSessionId; // @dynamic msgSessionId;
@property(nonatomic) unsigned long long seq; // @dynamic seq;

@end

