//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSString;

@class WXPBGeneratedMessage;

@interface NetworkControl : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int maxNoopInterval; // @dynamic maxNoopInterval;
@property(nonatomic) unsigned int minNoopInterval; // @dynamic minNoopInterval;
@property(nonatomic) int noopIntervalTime; // @dynamic noopIntervalTime;
@property(retain, nonatomic) NSString *portList; // @dynamic portList;
@property(retain, nonatomic) NSString *timeoutList; // @dynamic timeoutList;
@property(nonatomic) int typingInterval; // @dynamic typingInterval;

@end

