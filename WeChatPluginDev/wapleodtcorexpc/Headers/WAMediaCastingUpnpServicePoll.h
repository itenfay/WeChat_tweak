//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol WAMediaCastingUpnpServicePollDelegate;

@interface WAMediaCastingUpnpServicePoll : NSObject
{
    id <WAMediaCastingUpnpServicePollDelegate> _delegate;
    NSTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak id <WAMediaCastingUpnpServicePollDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isActive;
- (void)callDelegate;
- (void)timeTick;
- (void)stopPoll;
- (void)startPollWithTimeInterval:(double)arg1;
- (void)dealloc;

@end

