//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface DataReportEventData : NSObject
{
    _Bool _isBringPageInfo;
    NSObject *_target;
    NSString *_eventId;
    NSMutableDictionary *_params;
    NSMutableArray *_routeRules;
    unsigned long long _time;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long time; // @synthesize time=_time;
@property(nonatomic) _Bool isBringPageInfo; // @synthesize isBringPageInfo=_isBringPageInfo;
@property(retain, nonatomic) NSMutableArray *routeRules; // @synthesize routeRules=_routeRules;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(retain, nonatomic) NSObject *target; // @synthesize target=_target;
- (id)toString;
- (void)withRouteRules:(id)arg1;
- (void)withParams:(id)arg1;
- (id)init;

@end

