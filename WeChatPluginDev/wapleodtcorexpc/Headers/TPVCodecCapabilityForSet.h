//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPVCodecCapabilityForSet : NSObject
{
    long long _upperboundWidth;
    long long _upperboundHeight;
    long long _lowerboundWidth;
    long long _lowerboundHeight;
    long long _profile;
    long long _level;
}

@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) long long profile; // @synthesize profile=_profile;
@property(nonatomic) long long lowerboundHeight; // @synthesize lowerboundHeight=_lowerboundHeight;
@property(nonatomic) long long lowerboundWidth; // @synthesize lowerboundWidth=_lowerboundWidth;
@property(nonatomic) long long upperboundHeight; // @synthesize upperboundHeight=_upperboundHeight;
@property(nonatomic) long long upperboundWidth; // @synthesize upperboundWidth=_upperboundWidth;
- (id)initWithUpperBoundWidth:(long long)arg1 upperboundHeight:(long long)arg2 lowerboundWidth:(long long)arg3 lowerboundHeight:(long long)arg4 profile:(long long)arg5 level:(long long)arg6;

@end

