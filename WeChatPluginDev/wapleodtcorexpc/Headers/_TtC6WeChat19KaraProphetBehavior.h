//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSNumber, NSString, _TtC6WeChat17WCDBIntegerNumber, _TtC6WeChat34KaraProphetBehaviorExtractAnalysis, _TtC6WeChat34KaraProphetBehaviorPredictAnalysis;

@interface _TtC6WeChat19KaraProphetBehavior : NSObject
{
    MISSING_TYPE *dateThatHappened;
    MISSING_TYPE *versionThatHappened;
    MISSING_TYPE *dateThatPredicted;
    MISSING_TYPE *dateThatPrepared;
    MISSING_TYPE *dateThatExtracted;
    MISSING_TYPE *dateThatRecalled;
    MISSING_TYPE *prediction;
    MISSING_TYPE *positive;
    MISSING_TYPE *features;
    MISSING_TYPE *predictAnalysis;
    MISSING_TYPE *extractAnalysis;
    MISSING_TYPE *report;
    MISSING_TYPE *userInfo;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, copy) NSString *userInfo;
@property(nonatomic) _Bool report; // @synthesize report;
@property(nonatomic, retain) _TtC6WeChat34KaraProphetBehaviorExtractAnalysis *extractAnalysis; // @synthesize extractAnalysis;
@property(nonatomic, retain) _TtC6WeChat34KaraProphetBehaviorPredictAnalysis *predictAnalysis; // @synthesize predictAnalysis;
@property(nonatomic, copy) NSString *features;
@property(nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *positive;
@property(nonatomic, retain) NSNumber *prediction;
@property(nonatomic, copy) NSDate *dateThatRecalled;
@property(nonatomic, copy) NSDate *dateThatExtracted;
@property(nonatomic, copy) NSDate *dateThatPrepared;
@property(nonatomic, copy) NSDate *dateThatPredicted;
@property(nonatomic, retain) _TtC6WeChat17WCDBIntegerNumber *versionThatHappened;
@property(nonatomic, copy) NSDate *dateThatHappened;

@end

