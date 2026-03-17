//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class Color, JumpInfo, NSString;

@class WXPBGeneratedMessage;

@interface ChatroomTag : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) Color *backgroundColor; // @dynamic backgroundColor;
@property(nonatomic) _Bool bold; // @dynamic bold;
@property(retain, nonatomic) Color *color; // @dynamic color;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) NSString *icon; // @dynamic icon;
@property(nonatomic) unsigned long long tagId; // @dynamic tagId;
@property(retain, nonatomic) JumpInfo *tagJumpInfo; // @dynamic tagJumpInfo;

@end

