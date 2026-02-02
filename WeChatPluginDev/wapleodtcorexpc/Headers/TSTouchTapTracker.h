//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, TSTouchTrackRecognizer, UIView;

@interface TSTouchTapTracker : NSObject
{
    UIView *_attachedView;
    TSTouchTrackRecognizer *_trackRecognizer;
    NSMutableArray *_touches;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *touches; // @synthesize touches=_touches;
@property(retain, nonatomic) TSTouchTrackRecognizer *trackRecognizer; // @synthesize trackRecognizer=_trackRecognizer;
@property(nonatomic) __weak UIView *attachedView; // @synthesize attachedView=_attachedView;
- (void)attachedControlOnClick:(id)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1 trackEventHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

