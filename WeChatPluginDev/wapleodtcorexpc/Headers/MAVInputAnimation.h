//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MAVInputAnimation : NSObject
{
    long long _startMs;
    long long _endMs;
    long long _interpolator;
}

@property(nonatomic) long long interpolator; // @synthesize interpolator=_interpolator;
@property(nonatomic) long long endMs; // @synthesize endMs=_endMs;
@property(nonatomic) long long startMs; // @synthesize startMs=_startMs;
- (id)init;

@end

