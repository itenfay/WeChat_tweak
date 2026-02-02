//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface DataReportViewExpInfo : NSObject
{
    unsigned long long _viewHash;
    unsigned long long _expType;
    NSString *_viewUniqueId;
    NSDictionary *_viewParams;
    NSArray *_routeRules;
    unsigned long long _time;
    unsigned long long _reportPolicy;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long reportPolicy; // @synthesize reportPolicy=_reportPolicy;
@property(nonatomic) unsigned long long time; // @synthesize time=_time;
@property(retain, nonatomic) NSArray *routeRules; // @synthesize routeRules=_routeRules;
@property(retain, nonatomic) NSDictionary *viewParams; // @synthesize viewParams=_viewParams;
@property(retain, nonatomic) NSString *viewUniqueId; // @synthesize viewUniqueId=_viewUniqueId;
@property(nonatomic) unsigned long long expType; // @synthesize expType=_expType;
@property(nonatomic) unsigned long long viewHash; // @synthesize viewHash=_viewHash;

@end

