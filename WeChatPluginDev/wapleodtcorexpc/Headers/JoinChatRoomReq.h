//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface JoinChatRoomReq : NSObject
{
    NSString *groupId;
    NSString *chatRoomNickName;
    NSString *extMsg;
}

@property(retain, nonatomic) NSString *extMsg; // @synthesize extMsg;
@property(retain, nonatomic) NSString *chatRoomNickName; // @synthesize chatRoomNickName;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId;

@end

