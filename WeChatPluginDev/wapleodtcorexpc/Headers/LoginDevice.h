//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface LoginDevice : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *devicename; // @dynamic devicename;
@property(retain, nonatomic) NSString *devicetype; // @dynamic devicetype;
@property(nonatomic) unsigned int lasttime; // @dynamic lasttime;
@property(nonatomic) _Bool online; // @dynamic online;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

