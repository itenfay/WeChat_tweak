//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface HighpassFilter
{
    double lastX;
    double lastY;
    double lastZ;
    _Bool hasXCrash;
    _Bool hasYCrash;
    _Bool hasZCrash;
    int xCountDown;
    int yCountDown;
    int zCountDown;
}

- (_Bool)addAccelerationByX:(double)arg1 Y:(double)arg2 Z:(double)arg3;

@end

