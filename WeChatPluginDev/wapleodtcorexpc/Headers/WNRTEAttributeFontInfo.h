//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface WNRTEAttributeFontInfo : NSObject
{
    UIColor *fontColor;
    double fontSize;
}

@property(nonatomic) double fontSize; // @synthesize fontSize;
@property(retain, nonatomic) UIColor *fontColor; // @synthesize fontColor;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

