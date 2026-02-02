//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderTipsShowInfo;

@interface DelayBubble : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int delayNFeeds; // @dynamic delayNFeeds;
@property(nonatomic) unsigned int displayTabType; // @dynamic displayTabType;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) FinderTipsShowInfo *showInfo; // @dynamic showInfo;
@property(nonatomic) unsigned int showSeconds; // @dynamic showSeconds;

@end

