//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class Color, NSString, RoleIcon;

@interface UserRole : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *backgroundColor; // @dynamic backgroundColor;
@property(retain, nonatomic) Color *bgColor; // @dynamic bgColor;
@property(retain, nonatomic) Color *color; // @dynamic color;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(nonatomic) unsigned int role; // @dynamic role;
@property(retain, nonatomic) RoleIcon *roleIcon; // @dynamic roleIcon;
@property(retain, nonatomic) NSString *wordColor; // @dynamic wordColor;

@end

