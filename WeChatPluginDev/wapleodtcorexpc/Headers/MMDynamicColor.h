//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMDynamicColor : NSObject
{
    long long _normalColor;
    long long _darkmodeColor;
}

+ (id)DynamicColorWithNormalColor:(long long)arg1 darkmodeColor:(long long)arg2;
+ (id)colorFromARGBString:(id)arg1;
+ (id)fromWCColor:(id)arg1;
+ (long long)hexFromColor:(id)arg1;
@property(readonly, nonatomic) long long darkmodeColor; // @synthesize darkmodeColor=_darkmodeColor;
@property(readonly, nonatomic) long long normalColor; // @synthesize normalColor=_normalColor;
- (id)description;
- (id)initWithNormalColor:(long long)arg1 darkmodeColor:(long long)arg2;
- (id)toColor;

@end

