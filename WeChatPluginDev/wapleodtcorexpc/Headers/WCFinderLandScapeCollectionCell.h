//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class RichTextView, UILabel, UIView;

@interface WCFinderLandScapeCollectionCell : UICollectionViewCell
{
    UIView *_bgView;
    RichTextView *_titleTextView;
    UILabel *_playingMaskLabel;
    struct CGSize _layoutSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *playingMaskLabel; // @synthesize playingMaskLabel=_playingMaskLabel;
@property(retain, nonatomic) RichTextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
- (void)updateWithContentVM:(id)arg1 isWatching:(_Bool)arg2;
- (void)_layoutUI;
- (void)layoutSubviews;
- (void)_setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

