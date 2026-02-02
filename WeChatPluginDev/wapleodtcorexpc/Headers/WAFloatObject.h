//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface WAFloatObject : NSObject
{
    _Bool _enterScreen;
    NSString *_content;
    double _initOffset;
    UIColor *_color;
    double _speed;
    double _textWidth;
    double _time;
    struct CGPoint _position;
}

- (void).cxx_destruct;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) double textWidth; // @synthesize textWidth=_textWidth;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double initOffset; // @synthesize initOffset=_initOffset;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;

@end

