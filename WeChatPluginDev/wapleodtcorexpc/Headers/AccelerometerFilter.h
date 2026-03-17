//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface AccelerometerFilter : NSObject
{
    double x;
    double y;
    double z;
}

@property(readonly, nonatomic) double z; // @synthesize z;
@property(readonly, nonatomic) double y; // @synthesize y;
@property(readonly, nonatomic) double x; // @synthesize x;

@end

