//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MatrixStrategyObject : NSObject
{
    NSMutableArray *_reportIDArray;
    NSString *_strategyName;
}

+ (id)loadReportID:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *strategyName; // @synthesize strategyName=_strategyName;
@property(copy, nonatomic) NSMutableArray *reportIDArray; // @synthesize reportIDArray=_reportIDArray;
- (void)saveReportIDs;
- (void)addReportID:(id)arg1;
- (id)getReportIDs;
- (id)initWithStrategy:(id)arg1;

@end

