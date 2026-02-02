//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ChatroomBanAction, KickOutCardInfo, NSMutableArray, NSString, PremadeCardInfo, UserBanAction;

@interface RealtimeControlInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ChatroomBanAction *chatroomBanAction; // @dynamic chatroomBanAction;
@property(nonatomic) _Bool disableEmoji; // @dynamic disableEmoji;
@property(nonatomic) _Bool enableCustomEmoji; // @dynamic enableCustomEmoji;
@property(retain, nonatomic) KickOutCardInfo *kickOutCardInfo; // @dynamic kickOutCardInfo;
@property(retain, nonatomic) NSString *kickOutWording; // @dynamic kickOutWording;
@property(retain, nonatomic) PremadeCardInfo *premadeCardInfo; // @dynamic premadeCardInfo;
@property(retain, nonatomic) NSMutableArray *updateUserDataList; // @dynamic updateUserDataList;
@property(retain, nonatomic) UserBanAction *userBanAction; // @dynamic userBanAction;
@property(nonatomic) unsigned int userChatroomRelation; // @dynamic userChatroomRelation;
@property(retain, nonatomic) NSString *version; // @dynamic version;

@end

