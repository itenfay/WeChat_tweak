//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCGestureReportInfo
{
    unsigned int _distance;
    NSString *_snsId;
    NSString *_targetGesturePoints;
    NSString *_sourceGesturePoints;
    unsigned long long _result;
    NSString *_aid;
    NSString *_uxInfo;
}

+ (unsigned int)distanceToInt:(double)arg1;
+ (id)arrayToString:(id)arg1 samplingInterval:(long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo=_uxInfo;
@property(retain, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(nonatomic) unsigned long long result; // @synthesize result=_result;
@property(nonatomic) unsigned int distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSString *sourceGesturePoints; // @synthesize sourceGesturePoints=_sourceGesturePoints;
@property(retain, nonatomic) NSString *targetGesturePoints; // @synthesize targetGesturePoints=_targetGesturePoints;
@property(retain, nonatomic) NSString *snsId; // @synthesize snsId=_snsId;
- (id)toReportString;
- (id)init;

@end

