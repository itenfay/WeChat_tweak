//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderObjectVersionData, NSMutableArray, NSString;

@interface FinderObjectMonotonicData_ChatRoomPushFlag : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int chatroomPushFlag; // @dynamic chatroomPushFlag;
@property(retain, nonatomic) NSMutableArray *chatroomPushList; // @dynamic chatroomPushList;
@property(nonatomic) unsigned int disableChatroomPushIcon; // @dynamic disableChatroomPushIcon;
@property(retain, nonatomic) NSString *disableChatroomPushWording; // @dynamic disableChatroomPushWording;
@property(retain, nonatomic) FinderObjectVersionData *versionData; // @dynamic versionData;

@end

