//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderObjectCountInfo, FinderObjectMonotonicData_ChatRoomPushCount, FinderObjectMonotonicData_ChatRoomPushFlag, FinderObjectMonotonicData_CommentCount, FinderObjectMonotonicData_FollowPostCount, FinderObjectMonotonicData_GlobalFavCount, FinderObjectMonotonicData_GlobalFavFlag, FinderObjectMonotonicData_ThankChatRoomPushFlag, FinderObjectMonotonicData_ThumbUpCount, FinderObjectMonotonicData_ThumbUpFlag;

@interface FinderObjectMonotonicData : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(retain, nonatomic) FinderObjectMonotonicData_ChatRoomPushCount *chatroomPushCount; // @dynamic chatroomPushCount;
@property(retain, nonatomic) FinderObjectMonotonicData_ChatRoomPushFlag *chatroomPushFlag; // @dynamic chatroomPushFlag;
@property(retain, nonatomic) FinderObjectMonotonicData_CommentCount *commentCount; // @dynamic commentCount;
@property(retain, nonatomic) FinderObjectCountInfo *countInfo; // @dynamic countInfo;
@property(retain, nonatomic) FinderObjectMonotonicData_FollowPostCount *followPostCount; // @dynamic followPostCount;
@property(retain, nonatomic) FinderObjectMonotonicData_GlobalFavCount *globalFavCount; // @dynamic globalFavCount;
@property(retain, nonatomic) FinderObjectMonotonicData_GlobalFavFlag *globalFavFlag; // @dynamic globalFavFlag;
@property(retain, nonatomic) FinderObjectMonotonicData_ThankChatRoomPushFlag *thankChatroomPushFlag; // @dynamic thankChatroomPushFlag;
@property(retain, nonatomic) FinderObjectMonotonicData_ThumbUpCount *thumbUpCount; // @dynamic thumbUpCount;
@property(retain, nonatomic) FinderObjectMonotonicData_ThumbUpFlag *thumbUpFlag; // @dynamic thumbUpFlag;

@end

