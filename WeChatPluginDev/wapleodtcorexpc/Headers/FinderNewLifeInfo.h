//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ChatroomPushWording, FinderPostGuideInfo, FinderTopicInfo, NSMutableArray, NSString, NewLifeBizMpGuestDesc, NewLifeBizPicturDesc, NewLifeFollowPostInfo, NewLifeSearchWordingDesc;

@interface FinderNewLifeInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NewLifeBizMpGuestDesc *bizMpGuestDesc; // @dynamic bizMpGuestDesc;
@property(retain, nonatomic) NewLifeBizPicturDesc *bizPictureDesc; // @dynamic bizPictureDesc;
@property(retain, nonatomic) NSMutableArray *chatroomPushList; // @dynamic chatroomPushList;
@property(retain, nonatomic) NSString *chatroomPushOnelineWording; // @dynamic chatroomPushOnelineWording;
@property(retain, nonatomic) ChatroomPushWording *chatroomPushWording; // @dynamic chatroomPushWording;
@property(retain, nonatomic) NewLifeFollowPostInfo *followPostInfo; // @dynamic followPostInfo;
@property(nonatomic) _Bool isNeedDisplayCommentEgg; // @dynamic isNeedDisplayCommentEgg;
@property(nonatomic) unsigned int newlifeType; // @dynamic newlifeType;
@property(retain, nonatomic) NSMutableArray *pictureCropInfo; // @dynamic pictureCropInfo;
@property(retain, nonatomic) FinderPostGuideInfo *postGuideInfo; // @dynamic postGuideInfo;
@property(retain, nonatomic) NewLifeSearchWordingDesc *searchWordingDesc; // @dynamic searchWordingDesc;
@property(retain, nonatomic) NSString *secretlyPushChatroomWording; // @dynamic secretlyPushChatroomWording;
@property(retain, nonatomic) FinderTopicInfo *topicInfo; // @dynamic topicInfo;

@end

