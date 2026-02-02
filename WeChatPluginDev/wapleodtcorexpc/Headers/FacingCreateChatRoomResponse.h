//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface FacingCreateChatRoomResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *chatRoomName; // @dynamic chatRoomName;
@property(nonatomic) unsigned int memberCount; // @dynamic memberCount;
@property(retain, nonatomic) NSMutableArray *memberList; // @dynamic memberList;
@property(retain, nonatomic) NSString *ticket; // @dynamic ticket;

@end

