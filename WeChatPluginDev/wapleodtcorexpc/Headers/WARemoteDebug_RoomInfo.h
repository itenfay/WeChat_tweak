//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface WARemoteDebug_RoomInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int devConnStatus; // @dynamic devConnStatus;
@property(nonatomic) _Bool joinRoom; // @dynamic joinRoom;
@property(retain, nonatomic) NSString *originalMd5; // @dynamic originalMd5;
@property(retain, nonatomic) NSString *roomId; // @dynamic roomId;
@property(nonatomic) unsigned int roomStatus; // @dynamic roomStatus;
@property(nonatomic) unsigned int wxConnStatus; // @dynamic wxConnStatus;

@end

