//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DataReportRouteRule : NSObject
{
    _Bool _isRtReport;
    _Bool _isBatchReport;
    unsigned long long _routeType;
    unsigned long long _routeRule;
    CDUnknownBlockType _callbackBlock;
    NSString *_callbackKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *callbackKey; // @synthesize callbackKey=_callbackKey;
@property(copy, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
@property(nonatomic) _Bool isBatchReport; // @synthesize isBatchReport=_isBatchReport;
@property(nonatomic) _Bool isRtReport; // @synthesize isRtReport=_isRtReport;
@property(nonatomic) unsigned long long routeRule; // @synthesize routeRule=_routeRule;
@property(nonatomic) unsigned long long routeType; // @synthesize routeType=_routeType;
- (id)toString;

@end

