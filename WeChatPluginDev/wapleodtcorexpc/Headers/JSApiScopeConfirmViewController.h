//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSAPIScopeConfirmContainterView, JSApiScopeConfirmWindow;

@interface JSApiScopeConfirmViewController
{
    JSAPIScopeConfirmContainterView *_containerView;
    JSApiScopeConfirmWindow *_weakConfirmWindow;
}

- (void).cxx_destruct;
@property(nonatomic) __weak JSApiScopeConfirmWindow *weakConfirmWindow; // @synthesize weakConfirmWindow=_weakConfirmWindow;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)modalPresentationCapturesStatusBarAppearance;
- (void)viewDidLoad;
- (id)initWithWindow:(id)arg1;

@end

