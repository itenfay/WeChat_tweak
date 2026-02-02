//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TSMotionTracker, TSTouchTrackRecognizer, UIView;

@interface TSInputTracker : NSObject
{
    TSMotionTracker *_motionTracker;
    UIView *_attachedView;
    TSTouchTrackRecognizer *_trackRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TSTouchTrackRecognizer *trackRecognizer; // @synthesize trackRecognizer=_trackRecognizer;
@property(nonatomic) __weak UIView *attachedView; // @synthesize attachedView=_attachedView;
@property(retain, nonatomic) TSMotionTracker *motionTracker; // @synthesize motionTracker=_motionTracker;
- (void)dealloc;
- (id)initWithInterval:(double)arg1 view:(id)arg2 trackEventHandler:(CDUnknownBlockType)arg3;
- (id)findUIInputSetHostViewInView:(id)arg1;
- (id)findUIKBKeyplaneViewInView:(id)arg1;
- (id)findViewInView:(id)arg1 ofClass:(Class)arg2;
- (id)findKeyboardWindow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

