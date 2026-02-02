//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface QTextStyle : NSObject
{
    int _priority;
    UIColor *_textColor;
    UIColor *_strokeColor;
    double _fontSize;
}

- (void).cxx_destruct;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (id)init;

@end

