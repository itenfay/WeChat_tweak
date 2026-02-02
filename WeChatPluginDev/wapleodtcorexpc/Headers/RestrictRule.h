//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class Color, NSString, ShowIcon;

@interface RestrictRule : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool canPass; // @dynamic canPass;
@property(retain, nonatomic) Color *color; // @dynamic color;
@property(retain, nonatomic) NSString *ruleDesc; // @dynamic ruleDesc;
@property(retain, nonatomic) ShowIcon *showIcon; // @dynamic showIcon;

@end

