//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AtInfo, BaseResponse, Broadcast, ChatroomData, NSString, NotificationBar, Popup, RealtimeControlInfo, SlotList;

@interface GetChatroomRealtimeInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AtInfo *atInfo; // @dynamic atInfo;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) Broadcast *broadcast; // @dynamic broadcast;
@property(retain, nonatomic) RealtimeControlInfo *controlInfo; // @dynamic controlInfo;
@property(retain, nonatomic) ChatroomData *currentChatroomData; // @dynamic currentChatroomData;
@property(retain, nonatomic) NSString *nextVersion; // @dynamic nextVersion;
@property(retain, nonatomic) NotificationBar *notificationBar; // @dynamic notificationBar;
@property(retain, nonatomic) Popup *popup; // @dynamic popup;
@property(retain, nonatomic) SlotList *slotList; // @dynamic slotList;

@end

