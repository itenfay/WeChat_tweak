//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface TSTrackedSlideItem
{
    NSArray *_touches;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *touches; // @synthesize touches=_touches;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSArray *samplingTouches;
@property(readonly, nonatomic) double distance;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double timestamp;
- (id)initWithTouches:(id)arg1;

@end

