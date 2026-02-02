//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonCustomManageWrap, MMAssetSelectCheckButton, MMBadgeView, UIImageView, UIView;
@protocol EmoticonCustomManageViewDelegate;

@interface EmoticonCustomManageView
{
    EmoticonCustomManageWrap *_wrap;
    UIView *_contentContainerView;
    UIImageView *_emoticonView;
    UIView *_selectedMaskView;
    MMAssetSelectCheckButton *_selectCheckButton;
    UIView *_animationMaskView;
    MMBadgeView *_countView;
    UIView *_countContainerView;
    id <EmoticonCustomManageViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <EmoticonCustomManageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *countContainerView; // @synthesize countContainerView=_countContainerView;
@property(retain, nonatomic) MMBadgeView *countView; // @synthesize countView=_countView;
@property(retain, nonatomic) UIView *animationMaskView; // @synthesize animationMaskView=_animationMaskView;
@property(retain, nonatomic) MMAssetSelectCheckButton *selectCheckButton; // @synthesize selectCheckButton=_selectCheckButton;
@property(retain, nonatomic) UIView *selectedMaskView; // @synthesize selectedMaskView=_selectedMaskView;
@property(retain, nonatomic) UIImageView *emoticonView; // @synthesize emoticonView=_emoticonView;
@property(retain, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(retain, nonatomic) EmoticonCustomManageWrap *wrap; // @synthesize wrap=_wrap;
- (void)onGestureTap;
- (void)doFlashAnimation;
- (void)updateCountContainerPosition;
- (void)updateSelect;
- (void)setEmoticonCustomManageWrap:(id)arg1;
- (void)configAnimationMask;
- (void)configSelectedMarkView;
- (id)getMaskView;
- (void)resizeWithNewSize:(double)arg1 scaledSize:(double)arg2;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

