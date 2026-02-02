//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData;

@interface VoipCSNotify : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *calleeCap; // @dynamic calleeCap;
@property(nonatomic) unsigned int calleeMemberId; // @dynamic calleeMemberId;
@property(nonatomic) unsigned int calleeStatus; // @dynamic calleeStatus;
@property(nonatomic) unsigned int calleeSubStatus; // @dynamic calleeSubStatus;
@property(nonatomic) unsigned int notifySeq; // @dynamic notifySeq;
@property(nonatomic) unsigned long long roomId; // @dynamic roomId;
@property(nonatomic) unsigned long long roomKey; // @dynamic roomKey;

@end

