//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton;
@protocol MJShootCropToolBarDelegate;

@interface MJShootCropToolBar
{
    _Bool _resetEnabled;
    id <MJShootCropToolBarDelegate> _delegate;
    MMUIButton *_rotateButton;
    MMUIButton *_flipButton;
    MMUIButton *_resetButton;
}

+ (id)createButtonWithIconName:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *resetButton; // @synthesize resetButton=_resetButton;
@property(retain, nonatomic) MMUIButton *flipButton; // @synthesize flipButton=_flipButton;
@property(retain, nonatomic) MMUIButton *rotateButton; // @synthesize rotateButton=_rotateButton;
@property(nonatomic) _Bool resetEnabled; // @synthesize resetEnabled=_resetEnabled;
@property(nonatomic) __weak id <MJShootCropToolBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resetButtonDidTouchUpInside:(id)arg1;
- (void)flipButtonDidTouchUpInside:(id)arg1;
- (void)rotateButtonDidTouchUpInside:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

