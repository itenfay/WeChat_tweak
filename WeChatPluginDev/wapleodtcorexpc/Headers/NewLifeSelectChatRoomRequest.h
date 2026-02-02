//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface NewLifeSelectChatRoomRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int enterType; // @dynamic enterType;
@property(retain, nonatomic) NSMutableArray *recentChatroomList; // @dynamic recentChatroomList;
@property(retain, nonatomic) NSMutableArray *selectedList; // @dynamic selectedList;

@end

