//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface SmoothCornerConfig : NSObject
{
    double _cornerRadius;
    double _smoothRate;
    unsigned long long _corners;
}

@property(nonatomic) unsigned long long corners; // @synthesize corners=_corners;
@property(nonatomic) double smoothRate; // @synthesize smoothRate=_smoothRate;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;

@end

