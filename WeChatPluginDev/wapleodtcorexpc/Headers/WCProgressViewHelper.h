//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIView, UIViewController, WCProgressMaskView;

@interface WCProgressViewHelper : NSObject
{
    UIView *_progressCircleViewSuperview;
    WCProgressMaskView *_progressView;
    UIViewController *_attachedController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *attachedController; // @synthesize attachedController=_attachedController;
@property(retain, nonatomic) WCProgressMaskView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIView *progressCircleViewSuperview; // @synthesize progressCircleViewSuperview=_progressCircleViewSuperview;
@property(readonly, nonatomic) WCProgressMaskView *progressCircleView;
@property(readonly, copy, nonatomic) CDUnknownBlockType showInfinityProgress;
@property(readonly, copy, nonatomic) CDUnknownBlockType finishProgress;
@property(readonly, copy, nonatomic) CDUnknownBlockType updateProgress;
@property(readonly, copy, nonatomic) CDUnknownBlockType stopProgress;
@property(readonly, copy, nonatomic) CDUnknownBlockType startProgress;
- (void)setInteractionBlocked:(_Bool)arg1;
- (void)resetProgressViewPosition;
- (id)initWithController:(id)arg1;

@end

