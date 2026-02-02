//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface MegaVideoPageMonitorInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int action; // @dynamic action;
@property(nonatomic) int actionCost; // @dynamic actionCost;
@property(nonatomic) int actionResult; // @dynamic actionResult;
@property(nonatomic) int enterType; // @dynamic enterType;
@property(retain, nonatomic) NSString *extra; // @dynamic extra;
@property(retain, nonatomic) NSString *feedId; // @dynamic feedId;
@property(nonatomic) long long pageId; // @dynamic pageId;
@property(nonatomic) int pageType; // @dynamic pageType;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;

@end

