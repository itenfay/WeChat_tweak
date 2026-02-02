//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;
@protocol WCCanvasFloatViewDelegate;

@interface WCCanvasFloatView
{
    _Bool _forbiddenLayoutComponent;
    id <WCCanvasFloatViewDelegate> _delegate;
    UIView *_containerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool forbiddenLayoutComponent; // @synthesize forbiddenLayoutComponent=_forbiddenLayoutComponent;
@property(nonatomic) __weak id <WCCanvasFloatViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isForbiddenToClose;
- (void)removeView;
- (void)tryToDoCloseAnimation;
- (void)tryToDoOpenAnimation;
- (void)showBGView;
- (id)getComponent;
- (void)dealloc;
- (void)notifyViewDidAppear;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)tryCloseFloatView:(id)arg1 forEvent:(id)arg2;
- (id)initWithComponent:(id)arg1;

@end

