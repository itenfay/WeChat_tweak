//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUILabel, MMWebImageView, TextStateIcon, UIStackView, UIView;

@interface TextStatePublishRecentUseIconItemView : UICollectionViewCell
{
    TextStateIcon *_icon;
    UIStackView *_stackView;
    MMWebImageView *_iconImageView;
    MMUILabel *_iconDescriptionLabel;
    UIView *_separatorView;
    CDUnknownBlockType _deleteHandler;
}

+ (double)height;
+ (double)horizonPadding;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType deleteHandler; // @synthesize deleteHandler=_deleteHandler;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) MMUILabel *iconDescriptionLabel; // @synthesize iconDescriptionLabel=_iconDescriptionLabel;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) TextStateIcon *icon; // @synthesize icon=_icon;
- (void)setHighlighted:(_Bool)arg1;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)onLongPressToDelete;
- (void)onDelete:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)layoutSubviews;
- (void)initLayout;
- (void)initSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

