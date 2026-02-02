//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class QDrawMonitor;

@interface QMapMonitor : NSObject
{
    QDrawMonitor *_drawMonitor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QDrawMonitor *drawMonitor; // @synthesize drawMonitor=_drawMonitor;
- (void)onAfterDrawframeWithBlock:(CDUnknownBlockType)arg1;
- (void)onBeforeDrawframe;
- (void)dealloc;
- (id)init;

@end

