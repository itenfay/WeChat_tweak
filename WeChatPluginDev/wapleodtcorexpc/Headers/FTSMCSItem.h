//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FTSMCSItem : NSObject
{
    float _score;
    unsigned int _baseTime;
    NSString *_key;
}

+ (void)setDeclineFactor:(float)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_baseTime;
+ (void)PBArrayAdd_score;
+ (void)PBArrayAdd_key;
- (void).cxx_destruct;
@property(nonatomic) unsigned int baseTime; // @synthesize baseTime=_baseTime;
@property(nonatomic) float score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (long long)compareByScoreDesc:(id)arg1;
- (void)updateScoreWithTime:(unsigned int)arg1;
- (void)addScore;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

