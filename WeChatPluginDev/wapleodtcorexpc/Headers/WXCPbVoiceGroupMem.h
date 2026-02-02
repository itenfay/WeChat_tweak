//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray, NSString, WXCPbVoiceClientScene;

@interface WXCPbVoiceGroupMem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WXCPbVoiceClientScene *clientScene; // @dynamic clientScene;
@property(retain, nonatomic) NSMutableArray *clientSceneExtList; // @dynamic clientSceneExtList;
@property(nonatomic) unsigned int inviteTime; // @dynamic inviteTime;
@property(nonatomic) unsigned int inviteuuid; // @dynamic inviteuuid;
@property(retain, nonatomic) NSData *mailAuthBuf; // @dynamic mailAuthBuf;
@property(nonatomic) int memberId; // @dynamic memberId;
@property(nonatomic) unsigned int memberSession; // @dynamic memberSession;
@property(retain, nonatomic) NSString *openClientId; // @dynamic openClientId;
@property(nonatomic) unsigned int reason; // @dynamic reason;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(nonatomic) unsigned int uuid; // @dynamic uuid;
@property(retain, nonatomic) NSString *wxInviteUserName; // @dynamic wxInviteUserName;
@property(retain, nonatomic) NSString *wxUserName; // @dynamic wxUserName;

@end

