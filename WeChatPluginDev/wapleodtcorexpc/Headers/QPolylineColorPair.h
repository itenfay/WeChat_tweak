//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface QPolylineColorPair : NSObject
{
    UIColor *_color;
    UIColor *_borderColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

