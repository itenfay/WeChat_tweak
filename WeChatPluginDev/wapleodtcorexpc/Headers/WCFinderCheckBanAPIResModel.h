//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderCheckBanAPIResModel : NSObject
{
    _Bool _isPenalized;
    NSString *_path;
    unsigned long long _businessType;
    unsigned long long _penalizedReasonType;
    long long _willPenaltyGapCount;
    long long _willFreeGapCount;
    long long _limitCtrlInfoReceiveTs;
}

- (void).cxx_destruct;
@property(nonatomic) long long limitCtrlInfoReceiveTs; // @synthesize limitCtrlInfoReceiveTs=_limitCtrlInfoReceiveTs;
@property(nonatomic) long long willFreeGapCount; // @synthesize willFreeGapCount=_willFreeGapCount;
@property(nonatomic) long long willPenaltyGapCount; // @synthesize willPenaltyGapCount=_willPenaltyGapCount;
@property(nonatomic) unsigned long long penalizedReasonType; // @synthesize penalizedReasonType=_penalizedReasonType;
@property(nonatomic) _Bool isPenalized; // @synthesize isPenalized=_isPenalized;
@property(nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (id)initWithRedDotPath:(id)arg1 businessType:(unsigned long long)arg2;

@end

