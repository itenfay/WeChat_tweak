//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface StandardButtonConfiguration : NSObject
{
    _Bool _isAutoAdjustFont;
    _Bool _inverse;
    long long _buttonSize;
    double _maxWidth;
}

@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) _Bool inverse; // @synthesize inverse=_inverse;
@property(nonatomic) _Bool isAutoAdjustFont; // @synthesize isAutoAdjustFont=_isAutoAdjustFont;
@property(nonatomic) long long buttonSize; // @synthesize buttonSize=_buttonSize;

@end

