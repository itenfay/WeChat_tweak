//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface WARemoteDebug_DataFormat : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int cmd; // @dynamic cmd;
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

