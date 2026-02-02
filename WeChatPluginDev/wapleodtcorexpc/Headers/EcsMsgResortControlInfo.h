//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface EcsMsgResortControlInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int controlFlag; // @dynamic controlFlag;
@property(nonatomic) unsigned int controlGroupFlag; // @dynamic controlGroupFlag;
@property(retain, nonatomic) NSString *historyBoxWording; // @dynamic historyBoxWording;
@property(nonatomic) _Bool isControlGroup; // @dynamic isControlGroup;
@property(nonatomic) unsigned int liftReadAreaSize; // @dynamic liftReadAreaSize;
@property(nonatomic) unsigned int outboxKeepPosTime; // @dynamic outboxKeepPosTime;
@property(nonatomic) unsigned long long resortSceneBitSwitch; // @dynamic resortSceneBitSwitch;
@property(nonatomic) unsigned int showCardFlag; // @dynamic showCardFlag;

@end

