//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AppItem, GameIndexGameBlockContent, GameIndexGameBlockEntrance, NSString;

@interface GameIndexGameBlock : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AppItem *appItem; // @dynamic appItem;
@property(retain, nonatomic) GameIndexGameBlockContent *content; // @dynamic content;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) GameIndexGameBlockEntrance *entrance; // @dynamic entrance;

@end

