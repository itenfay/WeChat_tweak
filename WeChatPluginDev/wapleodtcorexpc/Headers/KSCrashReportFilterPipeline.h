//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface KSCrashReportFilterPipeline : NSObject
{
    NSArray *_filters;
}

+ (id)filterWithFilters:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *filters; // @synthesize filters=_filters;
- (void)filterReports:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)addFilter:(id)arg1;
- (id)initWithFiltersArray:(id)arg1;
- (id)initWithFilters:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

