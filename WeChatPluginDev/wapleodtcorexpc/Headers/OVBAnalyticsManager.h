//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@interface OVBAnalyticsManager : NSObject
{
}

+ (void)unregisterBridgingEventSink;
+ (void)registerBridgingEventSink:(CDUnknownBlockType)arg1;
+ (void)registerDefaultFileSink;
+ (void)shutdownReporter;
+ (void)initReporter;

@end
