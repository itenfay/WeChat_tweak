//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderObject, NSString;

@interface NewLifePostStateChangeCallback : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderObject *localFeed; // @dynamic localFeed;
@property(retain, nonatomic) NSString *localFeedId; // @dynamic localFeedId;
@property(nonatomic) unsigned int postState; // @dynamic postState;
@property(nonatomic) double progress; // @dynamic progress;
@property(retain, nonatomic) FinderObject *serverFeed; // @dynamic serverFeed;
@property(retain, nonatomic) NSString *serverFeedId; // @dynamic serverFeedId;

@end

