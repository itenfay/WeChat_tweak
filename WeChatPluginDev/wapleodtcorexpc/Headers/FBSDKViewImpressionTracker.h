//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface FBSDKViewImpressionTracker : NSObject
{
    NSMutableSet *_trackedImpressions;
    NSString *_eventName;
}

+ (id)impressionTrackerWithEventName:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)logImpressionWithIdentifier:(id)arg1 parameters:(id)arg2;
- (void)dealloc;
- (id)initWithEventName:(id)arg1;

@end

