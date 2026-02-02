//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AppItem, NSMutableArray, NSString;

@interface GameListItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AppItem *appItem; // @dynamic appItem;
@property(retain, nonatomic) NSString *externInfo; // @dynamic externInfo;
@property(retain, nonatomic) NSMutableArray *feedItemList; // @dynamic feedItemList;
@property(retain, nonatomic) NSString *noticeId; // @dynamic noticeId;

@end

