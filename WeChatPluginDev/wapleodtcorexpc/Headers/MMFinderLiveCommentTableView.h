//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIPanGestureRecognizer;

@interface MMFinderLiveCommentTableView
{
    UIPanGestureRecognizer *_specialLiveAnimatorGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIPanGestureRecognizer *specialLiveAnimatorGestureRecognizer; // @synthesize specialLiveAnimatorGestureRecognizer=_specialLiveAnimatorGestureRecognizer;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handlePanGesture:(id)arg1;
- (void)initGesture;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

