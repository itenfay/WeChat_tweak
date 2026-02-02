//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIColor, UIImage, UIImageView, UILabel, UIView;

@interface MMAssetSelectCheckButton
{
    long long m_selectedIndex;
    UILabel *m_selectedIndexView;
    UIImageView *m_singleSelectedIndexView;
    UIImage *m_normalImage;
    UIImage *m_selectedImage;
    UIColor *m_backgroundColor;
    UIView *_notSelectedView;
    UIView *_selectionBlurView;
    struct CGRect _selectedIndexViewFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *selectionBlurView; // @synthesize selectionBlurView=_selectionBlurView;
@property(retain, nonatomic) UIView *notSelectedView; // @synthesize notSelectedView=_notSelectedView;
@property(nonatomic) struct CGRect selectedIndexViewFrame; // @synthesize selectedIndexViewFrame=_selectedIndexViewFrame;
- (void)setSelectedIndexViewHidden:(_Bool)arg1;
- (void)startPopUpAnimation:(id)arg1 originScale:(double)arg2 animationDuration:(double)arg3;
- (void)startPopUpAnimation:(id)arg1 originScale:(double)arg2;
- (id)singleSelectedView;
- (id)selectedView;
- (void)setSingleSelectedIndex:(long long)arg1 animated:(_Bool)arg2 animationDuration:(double)arg3;
- (void)setSingleSelectedIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)setSelectedIndex:(long long)arg1 animated:(_Bool)arg2;
- (id)selectedIndexText;
- (void)setHidden:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1;
- (_Bool)isSelected;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (id)imageForState:(unsigned long long)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 backgroundColor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

