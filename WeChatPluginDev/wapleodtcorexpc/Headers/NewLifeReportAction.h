//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface NewLifeReportAction : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *action; // @dynamic action;
@property(nonatomic) unsigned long long timeFromFirstAction; // @dynamic timeFromFirstAction;
@property(nonatomic) unsigned long long timeFromPreAction; // @dynamic timeFromPreAction;
@property(nonatomic) unsigned long long timestamp; // @dynamic timestamp;
@property(nonatomic) unsigned long long upTime; // @dynamic upTime;

@end

