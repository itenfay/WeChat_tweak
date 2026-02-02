//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, UIView, UIViewController;
@protocol MJMovieComposingInspectorDelegate;

@interface MJMovieComposingInspector
{
    id <MJMovieComposingInspectorDelegate> _delegate;
    MMUILabel *_titleLabel;
    MMUIButton *_doneButton;
    MMUIButton *_cancelButton;
    UIView *_contentView;
    UIViewController *_contentViewController;
    UIView *_topBar;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *topBar; // @synthesize topBar=_topBar;
@property(readonly, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) MMUIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(readonly, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <MJMovieComposingInspectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hideCancelButtonAnimated:(_Bool)arg1;
- (void)layoutViews;
- (void)setupViews;
- (void)dealloc;
- (id)initWithContentViewController:(id)arg1;
- (id)initWithContentView:(id)arg1;
- (void)removeFromSuperview;
- (void)willMoveToSuperview:(id)arg1;

@end

