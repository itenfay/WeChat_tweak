//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface CreateChatRoomReq
{
    NSString *groupId;
    NSString *chatRoomName;
    NSString *extMsg;
    NSString *chatRoomNickName;
}

@property(retain, nonatomic) NSString *chatRoomNickName; // @synthesize chatRoomNickName;
@property(retain, nonatomic) NSString *extMsg; // @synthesize extMsg;
@property(retain, nonatomic) NSString *chatRoomName; // @synthesize chatRoomName;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId;

@end

