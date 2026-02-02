//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayBalanceLQTOpenInfo : NSObject
{
    int _routeType;
    NSString *_openInfo;
    NSString *_openUrl;
    NSString *_appName;
}

+ (void)initialize;
+ (void)PBArrayAdd_appName;
+ (void)PBArrayAdd_routeType;
+ (void)PBArrayAdd_openUrl;
+ (void)PBArrayAdd_openInfo;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) int routeType; // @synthesize routeType=_routeType;
@property(retain, nonatomic) NSString *openUrl; // @synthesize openUrl=_openUrl;
@property(retain, nonatomic) NSString *openInfo; // @synthesize openInfo=_openInfo;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

