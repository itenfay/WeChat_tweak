//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface ConfCloudRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *body; // @dynamic body;
@property(nonatomic) unsigned int cmdid; // @dynamic cmdid;
@property(nonatomic) _Bool longpolling; // @dynamic longpolling;
@property(nonatomic) unsigned int taskid; // @dynamic taskid;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

