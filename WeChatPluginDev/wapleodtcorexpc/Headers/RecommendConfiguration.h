//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface RecommendConfiguration : NSObject
{
    double _showTime;
    double _showPercentage;
    double _preLoadTime;
    double _preLoadPercentage;
    NSString *_logic;
}

+ (void)initialize;
+ (void)PBArrayAdd_logic;
+ (void)PBArrayAdd_preLoadPercentage;
+ (void)PBArrayAdd_preLoadTime;
+ (void)PBArrayAdd_showPercentage;
+ (void)PBArrayAdd_showTime;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *logic; // @synthesize logic=_logic;
@property(nonatomic) double preLoadPercentage; // @synthesize preLoadPercentage=_preLoadPercentage;
@property(nonatomic) double preLoadTime; // @synthesize preLoadTime=_preLoadTime;
@property(nonatomic) double showPercentage; // @synthesize showPercentage=_showPercentage;
@property(nonatomic) double showTime; // @synthesize showTime=_showTime;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

