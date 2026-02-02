//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCFinderPanelJumpInfoCarouselModel : NSObject
{
    int _businessType;
    NSString *_feedId;
    NSMutableArray *_showTimeStampArray;
}

+ (void)initialize;
+ (void)PBArrayAdd_showTimeStampArray;
+ (void)PBArrayAdd_businessType;
+ (void)PBArrayAdd_feedId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *showTimeStampArray; // @synthesize showTimeStampArray=_showTimeStampArray;
@property(nonatomic) int businessType; // @synthesize businessType=_businessType;
@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (id)todayTimeStampsInArray:(id)arg1;
- (id)maxValueInArray:(id)arg1;
- (id)getTodayTimeStamps;
- (long long)getMaxTimeStamp;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

