//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface Remind : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(retain, nonatomic) NSData *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) NSString *remindId; // @dynamic remindId;
@property(nonatomic) unsigned int subType; // @dynamic subType;
@property(nonatomic) unsigned int time; // @dynamic time;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

