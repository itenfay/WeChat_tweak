//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface TSTrackedMotionSequence
{
    NSArray *_accelerationItems;
    NSArray *_gyroItems;
    NSArray *_motionItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *motionItems; // @synthesize motionItems=_motionItems;
@property(retain, nonatomic) NSArray *gyroItems; // @synthesize gyroItems=_gyroItems;
@property(retain, nonatomic) NSArray *accelerationItems; // @synthesize accelerationItems=_accelerationItems;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double timestamp;
- (id)initWithAccelerationItems:(id)arg1 gyroItems:(id)arg2 motionItems:(id)arg3;

@end

