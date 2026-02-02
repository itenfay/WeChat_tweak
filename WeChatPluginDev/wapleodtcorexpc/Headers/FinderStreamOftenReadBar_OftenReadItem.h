//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderContact, FinderObject;

@interface FinderStreamOftenReadBar_OftenReadItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderContact *contact; // @dynamic contact;
@property(nonatomic) unsigned long long lastestUnreadTime; // @dynamic lastestUnreadTime;
@property(retain, nonatomic) FinderObject *liveObject; // @dynamic liveObject;

@end

