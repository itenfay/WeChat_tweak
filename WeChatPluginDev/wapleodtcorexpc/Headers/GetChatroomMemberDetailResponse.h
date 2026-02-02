//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, ChatRoomMemberData, NSMutableArray, NSString;

@interface GetChatroomMemberDetailResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int adminCount; // @dynamic adminCount;
@property(retain, nonatomic) NSMutableArray *adminUserNameList; // @dynamic adminUserNameList;
@property(nonatomic) unsigned int allMemberCount; // @dynamic allMemberCount;
@property(retain, nonatomic) NSMutableArray *allMemberUserNameList; // @dynamic allMemberUserNameList;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *chatRoomOwner; // @dynamic chatRoomOwner;
@property(retain, nonatomic) NSString *chatroomUserName; // @dynamic chatroomUserName;
@property(retain, nonatomic) ChatRoomMemberData *newChatroomData; // @dynamic newChatroomData;
@property(nonatomic) unsigned int serverVersion; // @dynamic serverVersion;

@end

