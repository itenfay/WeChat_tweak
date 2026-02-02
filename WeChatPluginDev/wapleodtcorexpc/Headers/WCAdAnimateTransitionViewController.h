//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView, WCAdAnimateViewControllerAnimatedTransitioning, WCDataItem;

@interface WCAdAnimateTransitionViewController
{
    long long _gestureType;
    WCDataItem *_dataItem;
    UIView *_originView;
    WCAdAnimateViewControllerAnimatedTransitioning *_presentationAnimate;
    CDUnknownBlockType _animateCompletion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType animateCompletion; // @synthesize animateCompletion=_animateCompletion;
@property(retain, nonatomic) WCAdAnimateViewControllerAnimatedTransitioning *presentationAnimate; // @synthesize presentationAnimate=_presentationAnimate;
@property(retain, nonatomic) UIView *originView; // @synthesize originView=_originView;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) long long gestureType; // @synthesize gestureType=_gestureType;
- (void)configPresentationCustomWithViewController:(id)arg1 animateCompletion:(CDUnknownBlockType)arg2;
- (_Bool)shouldFixParentAppearEventWhenPresented;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)dismissMyselfAndJump;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithGestureType:(long long)arg1 dataItem:(id)arg2 originView:(id)arg3;

@end

