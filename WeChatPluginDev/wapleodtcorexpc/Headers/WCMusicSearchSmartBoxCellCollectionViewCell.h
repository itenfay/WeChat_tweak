//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUILabel, UIImageView, UIView;

@interface WCMusicSearchSmartBoxCellCollectionViewCell : UICollectionViewCell
{
    double _contentSpacing;
    MMUILabel *_textLabel;
    UIImageView *_iconView;
    UIView *_separatorView;
    struct CGSize _iconSize;
    struct UIEdgeInsets _contentEdgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) MMUILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) double contentSpacing; // @synthesize contentSpacing=_contentSpacing;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
- (void)setSeperateLineHidden:(_Bool)arg1;
- (void)setupHighlightedTextForLabel:(id)arg1 highlightedText:(id)arg2;
- (void)setupWithInfoString:(id)arg1 query:(id)arg2;
- (void)setupWithInfo:(id)arg1 query:(id)arg2;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

