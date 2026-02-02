//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface RoomToolsTodo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *creator; // @dynamic creator;
@property(retain, nonatomic) NSData *customInfo; // @dynamic customInfo;
@property(retain, nonatomic) NSString *manager; // @dynamic manager;
@property(retain, nonatomic) NSString *path; // @dynamic path;
@property(nonatomic) unsigned long long relatedMsgId; // @dynamic relatedMsgId;
@property(nonatomic) unsigned int time; // @dynamic time;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *todoId; // @dynamic todoId;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

