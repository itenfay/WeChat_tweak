//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DataReportCGIReportRouter : NSObject
{
}

+ (void)unRegisterCallback:(id)arg1 withTarget:(id)arg2;
+ (void)registerCallback:(id)arg1 withTarget:(id)arg2;
- (id)fixCgiParams:(id)arg1;
- (unsigned long long)routeType;
- (_Bool)onDataReport:(id)arg1 time:(unsigned long long)arg2 params:(id)arg3 routeRule:(id)arg4;
- (id)callbackCgiReport:(unsigned long long)arg1 andUdfKvMap:(id)arg2 andEventId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

