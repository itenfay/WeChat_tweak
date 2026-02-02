//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface ClientSessionInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *exploreSessions; // @dynamic exploreSessions;
@property(nonatomic) _Bool isManualRefresh; // @dynamic isManualRefresh;
@property(retain, nonatomic) NSString *listeningId; // @dynamic listeningId;

@end

