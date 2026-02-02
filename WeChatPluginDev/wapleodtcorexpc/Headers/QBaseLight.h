//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface QBaseLight : NSObject
{
    UIColor *_lightColor;
    double _intensity;
}

- (void).cxx_destruct;
@property(nonatomic) double intensity; // @synthesize intensity=_intensity;
@property(copy, nonatomic) UIColor *lightColor; // @synthesize lightColor=_lightColor;

@end

