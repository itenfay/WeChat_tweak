//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIViewController, UPReachability;

@interface UPPaymentData : NSObject
{
    NSString *_schemeURL;
    NSString *_tn;
    NSString *_mode;
    UIViewController *_viewController;
    UPReachability *_internetReachability;
    NSString *_networkMode;
    NSString *_appServer;
    NSString *_jarServer;
    struct CGSize _toRotationSize;
}

+ (id)sharedData;
@property(nonatomic) struct CGSize toRotationSize; // @synthesize toRotationSize=_toRotationSize;
@property(copy, nonatomic) NSString *jarServer; // @synthesize jarServer=_jarServer;
@property(copy, nonatomic) NSString *appServer; // @synthesize appServer=_appServer;
@property(copy, nonatomic) NSString *networkMode; // @synthesize networkMode=_networkMode;
@property(retain, nonatomic) UPReachability *internetReachability; // @synthesize internetReachability=_internetReachability;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(copy, nonatomic) NSString *tn; // @synthesize tn=_tn;
@property(copy, nonatomic) NSString *schemeURL; // @synthesize schemeURL=_schemeURL;
- (void).cxx_destruct;
- (id)deviceInfo;
- (void)updateNetworkMode:(long long)arg1;
- (void)reachabilityChanged:(id)arg1;
- (id)initCommon;

@end

