//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface YtCAPTCHA_OC
{
    int _fixed_interval;
    int _unit;
    int _rand_shift;
    int _rand_inv;
    NSArray *_intervals;
    NSString *_seq_id;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *seq_id; // @synthesize seq_id=_seq_id;
@property(retain, nonatomic) NSArray *intervals; // @synthesize intervals=_intervals;
@property(nonatomic) int rand_inv; // @synthesize rand_inv=_rand_inv;
@property(nonatomic) int rand_shift; // @synthesize rand_shift=_rand_shift;
@property(nonatomic) int unit; // @synthesize unit=_unit;
@property(nonatomic) int fixed_interval; // @synthesize fixed_interval=_fixed_interval;

@end

