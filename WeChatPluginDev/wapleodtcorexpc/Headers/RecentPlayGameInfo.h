//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AppItem, NSMutableArray, NSString;

@interface RecentPlayGameInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AppItem *appItem; // @dynamic appItem;
@property(retain, nonatomic) NSString *appUserDesc; // @dynamic appUserDesc;
@property(retain, nonatomic) NSMutableArray *subList; // @dynamic subList;

@end

