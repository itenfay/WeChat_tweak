//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, NSString, UIImageView;
@protocol MMAlbumDropableTitleViewDelegate;

@interface MMAlbumDropableSimpleTitleView
{
    _Bool _active;
    id <MMAlbumDropableTitleViewDelegate> _titleViewDelegate;
    MMUIButton *_button;
    MMUILabel *_titleLabel;
    UIImageView *_arrowImageView;
    NSString *_title;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *button; // @synthesize button=_button;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <MMAlbumDropableTitleViewDelegate> titleViewDelegate; // @synthesize titleViewDelegate=_titleViewDelegate;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)onClick:(id)arg1;
- (void)laytoutTitleViews;
- (void)rotateArrowWithAnimated:(_Bool)arg1;
- (void)setIsEnable:(_Bool)arg1;
- (void)updateTitle:(id)arg1 animated:(_Bool)arg2;
- (void)initViews;
- (id)initWithTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

