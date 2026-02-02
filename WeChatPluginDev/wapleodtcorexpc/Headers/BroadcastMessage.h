//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class Color, NSMutableArray, NSString;

@interface BroadcastMessage : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) Color *color; // @dynamic color;
@property(nonatomic) unsigned int disappearSecond; // @dynamic disappearSecond;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSMutableArray *usernameList; // @dynamic usernameList;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

