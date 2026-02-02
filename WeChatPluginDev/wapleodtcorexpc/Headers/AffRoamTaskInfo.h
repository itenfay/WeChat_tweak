//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface AffRoamTaskInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long completeTime; // @dynamic completeTime;
@property(retain, nonatomic) NSString *deviceId; // @dynamic deviceId;
@property(nonatomic) unsigned long long elapsedTime; // @dynamic elapsedTime;
@property(nonatomic) unsigned long long packageId; // @dynamic packageId;
@property(retain, nonatomic) NSData *request; // @dynamic request;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned long long startTime; // @dynamic startTime;
@property(nonatomic) int state; // @dynamic state;
@property(nonatomic) unsigned long long transferCurrent; // @dynamic transferCurrent;
@property(nonatomic) unsigned long long transferTotal; // @dynamic transferTotal;
@property(nonatomic) int type; // @dynamic type;

@end

