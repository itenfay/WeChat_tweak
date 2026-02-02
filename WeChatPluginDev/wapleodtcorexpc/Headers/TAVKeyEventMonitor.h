//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol TAVKeyEventMonitorObserver;

@interface TAVKeyEventMonitor : NSObject
{
    _Bool _enableAutoReport;
    id <TAVKeyEventMonitorObserver> _observer;
}

+ (id)shared;
- (void).cxx_destruct;
@property(retain, nonatomic) id <TAVKeyEventMonitorObserver> observer; // @synthesize observer=_observer;
@property(nonatomic) _Bool enableAutoReport; // @synthesize enableAutoReport=_enableAutoReport;
- (id)init;

@end

