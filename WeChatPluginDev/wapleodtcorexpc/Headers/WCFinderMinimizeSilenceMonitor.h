//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderMinimizeSilenceMonitor : NSObject
{
    NSString *_tid;
    id _target;
    SEL _action;
}

- (void).cxx_destruct;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (void)invoke;
- (void)cancel;

@end

