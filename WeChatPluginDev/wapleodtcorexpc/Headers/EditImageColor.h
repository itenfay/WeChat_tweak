//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface EditImageColor : NSObject
{
    UIColor *_color;
    UIColor *_strokeColor;
    NSString *_accessibility;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *accessibility; // @synthesize accessibility=_accessibility;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;

@end

