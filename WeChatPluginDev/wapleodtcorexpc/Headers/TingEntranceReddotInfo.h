//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenRedDotByPassInfo, NSData, TingReddotReportInfo;

@interface TingEntranceReddotInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *bubbleBuffer; // @dynamic bubbleBuffer;
@property(retain, nonatomic) NSData *bypassBuffer; // @dynamic bypassBuffer;
@property(nonatomic) int cmdId; // @dynamic cmdId;
@property(nonatomic) int ctrlType; // @dynamic ctrlType;
@property(retain, nonatomic) MMListenRedDotByPassInfo *redDotByPassInfo; // @dynamic redDotByPassInfo;
@property(retain, nonatomic) TingReddotReportInfo *reportInfo; // @dynamic reportInfo;
@property(nonatomic) int type; // @dynamic type;

@end

