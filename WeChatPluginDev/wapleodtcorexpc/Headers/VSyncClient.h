//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VSyncClient : NSObject
{
    function_a9bd7188 callback_;
    struct scoped_nsobject<CADisplayLink> display_link_;
    double current_refresh_rate_;
    _Bool can_pause_;
    _Bool _allowPauseAfterVsync;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool allowPauseAfterVsync; // @synthesize allowPauseAfterVsync=_allowPauseAfterVsync;
- (id)getDisplayLink;
- (double)getRefreshRate;
- (void)dealloc;
- (void)invalidate;
- (void)onDisplayLink:(id)arg1;
- (void)pause;
- (void)await;
- (void)resumePausing;
- (void)preventPausing;
- (void)setMaxRefreshRate:(double)arg1;
- (id)initWithTaskRunner:(RefPtr_c4449933)arg1 callback:(function_a9bd7188)arg2;

@end

