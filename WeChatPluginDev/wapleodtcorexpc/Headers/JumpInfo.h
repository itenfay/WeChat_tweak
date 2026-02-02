//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ChatroomSeq, HalfScreen, NSString, WeappJumpInfo;

@interface JumpInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ChatroomSeq *chatroomSeq; // @dynamic chatroomSeq;
@property(retain, nonatomic) HalfScreen *halfScreen; // @dynamic halfScreen;
@property(nonatomic) unsigned int jumpType; // @dynamic jumpType;
@property(retain, nonatomic) NSString *jumpUrl; // @dynamic jumpUrl;
@property(retain, nonatomic) NSString *preloadId; // @dynamic preloadId;
@property(retain, nonatomic) WeappJumpInfo *weappJumpInfo; // @dynamic weappJumpInfo;

@end

