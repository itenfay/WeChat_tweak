//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface InitContactReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int currentChatRoomContactSeq; // @dynamic currentChatRoomContactSeq;
@property(nonatomic) unsigned int currentWxcontactSeq; // @dynamic currentWxcontactSeq;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

