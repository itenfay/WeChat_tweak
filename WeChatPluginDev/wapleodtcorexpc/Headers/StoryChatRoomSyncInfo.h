//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface StoryChatRoomSyncInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long objId; // @dynamic objId;
@property(nonatomic) unsigned int objPostTime; // @dynamic objPostTime;
@property(nonatomic) unsigned int storyCount; // @dynamic storyCount;
@property(retain, nonatomic) NSString *thumbUrl; // @dynamic thumbUrl;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;
@property(retain, nonatomic) NSString *videoUrl; // @dynamic videoUrl;

@end

