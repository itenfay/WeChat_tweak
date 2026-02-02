//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface DelChatRoomMemberRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *chatRoomName; // @dynamic chatRoomName;
@property(nonatomic) unsigned int memberCount; // @dynamic memberCount;
@property(retain, nonatomic) NSMutableArray *memberList; // @dynamic memberList;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

