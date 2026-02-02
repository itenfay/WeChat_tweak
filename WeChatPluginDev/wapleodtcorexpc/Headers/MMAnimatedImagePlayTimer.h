//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, NSTimer;

@interface MMAnimatedImagePlayTimer : NSObject
{
    NSTimer *m_timer;
    NSMutableSet *m_playingTasks;
    NSString *_runloopMode;
}

+ (unsigned long long)getTickCount;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *runloopMode; // @synthesize runloopMode=_runloopMode;
@property(retain, nonatomic) NSMutableSet *playingTasks; // @synthesize playingTasks=m_playingTasks;
- (void)updateTasks;
- (void)stopUpdateTasks;
- (void)startUpdateTasks;
- (id)init;

@end

