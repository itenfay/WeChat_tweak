//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface SetChatRoomAnnouncementRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *announcement; // @dynamic announcement;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *chatRoomName; // @dynamic chatRoomName;
@property(nonatomic) unsigned int pureText; // @dynamic pureText;
@property(nonatomic) unsigned int resourceCount; // @dynamic resourceCount;
@property(retain, nonatomic) NSMutableArray *resources; // @dynamic resources;
@property(nonatomic) unsigned int setAnnouncementFlag; // @dynamic setAnnouncementFlag;
@property(retain, nonatomic) NSString *xmlAnnouncement; // @dynamic xmlAnnouncement;

@end

