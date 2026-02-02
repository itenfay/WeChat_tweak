//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray;

@interface ContainerContext : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int containerId; // @dynamic containerId;
@property(retain, nonatomic) NSData *containerLastBuffer; // @dynamic containerLastBuffer;
@property(retain, nonatomic) NSMutableArray *readIds; // @dynamic readIds;

@end

