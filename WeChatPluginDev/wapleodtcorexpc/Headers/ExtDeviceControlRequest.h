//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface ExtDeviceControlRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int lockDevice; // @dynamic lockDevice;
@property(nonatomic) unsigned int opType; // @dynamic opType;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

