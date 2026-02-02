//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface MainFrameUnreadReporter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (long long)getReportSessionTypeFor:(id)arg1;
- (void)reportSingleClickWithUnreadCount:(long long)arg1;
- (void)reportDoubleClickWithUnreadCount:(long long)arg1 nextSession:(id)arg2;
- (void)tryReportSessionTimes;
- (id)init;

@end

