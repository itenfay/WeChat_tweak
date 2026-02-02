//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface VideoChannelTimelineInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) NSString *entryTitle; // @dynamic entryTitle;
@property(retain, nonatomic) NSMutableArray *itemList; // @dynamic itemList;
@property(nonatomic) unsigned int shouldCleanup; // @dynamic shouldCleanup;
@property(nonatomic) int version; // @dynamic version;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

