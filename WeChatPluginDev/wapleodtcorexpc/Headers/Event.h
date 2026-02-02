//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class EncryptLocation, NSString;

@interface Event : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int action; // @dynamic action;
@property(nonatomic) unsigned int bizId; // @dynamic bizId;
@property(nonatomic) unsigned int bizScene; // @dynamic bizScene;
@property(retain, nonatomic) EncryptLocation *location; // @dynamic location;
@property(nonatomic) unsigned int payChannel; // @dynamic payChannel;
@property(nonatomic) unsigned int payScene; // @dynamic payScene;
@property(nonatomic) unsigned long long timestamp; // @dynamic timestamp;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

