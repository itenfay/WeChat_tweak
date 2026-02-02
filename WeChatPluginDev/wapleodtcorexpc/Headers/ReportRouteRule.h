//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber;

@interface ReportRouteRule : NSObject
{
    NSNumber *_routeType;
    NSNumber *_routeRule;
    NSNumber *_isBatchReport;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithRouteType:(id)arg1 routeRule:(id)arg2 isBatchReport:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *isBatchReport; // @synthesize isBatchReport=_isBatchReport;
@property(retain, nonatomic) NSNumber *routeRule; // @synthesize routeRule=_routeRule;
@property(retain, nonatomic) NSNumber *routeType; // @synthesize routeType=_routeType;
- (id)toList;

@end

