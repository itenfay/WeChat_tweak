//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class Color, NSString;

@interface TagInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) Color *color; // @dynamic color;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(nonatomic) unsigned int score; // @dynamic score;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

