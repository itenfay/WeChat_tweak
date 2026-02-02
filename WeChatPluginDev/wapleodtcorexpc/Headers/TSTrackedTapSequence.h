//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface TSTrackedTapSequence
{
    NSArray *_taps;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *taps; // @synthesize taps=_taps;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double timestamp;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaps:(id)arg1;

@end

