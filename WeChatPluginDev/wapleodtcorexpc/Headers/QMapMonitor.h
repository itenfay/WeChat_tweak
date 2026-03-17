//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@class QDrawMonitor;

@interface QMapMonitor : NSObject
{
    QDrawMonitor *_drawMonitor;
}

@property(retain, nonatomic) QDrawMonitor *drawMonitor; // @synthesize drawMonitor=_drawMonitor;
- (void)onAfterDrawframeWithBlock:(CDUnknownBlockType)arg1;
- (void)onBeforeDrawframe;
- (void)dealloc;
- (id)init;

@end
