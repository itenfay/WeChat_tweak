//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class UIButton, UILabel, UIView;

@interface WCFinderProfileOverviewHeader : UICollectionReusableView
{
    _Bool _needReDisplayExtButton;
    UILabel *_titleLabel;
    UIView *_bottomLine;
    UIButton *_extButton;
    struct UIEdgeInsets _titleEdgeInsets;
    struct UIEdgeInsets _lineEdgeInsets;
}

+ (double)defaultDisplayHeight;
- (void).cxx_destruct;
@property(nonatomic) _Bool needReDisplayExtButton; // @synthesize needReDisplayExtButton=_needReDisplayExtButton;
@property(nonatomic) struct UIEdgeInsets lineEdgeInsets; // @synthesize lineEdgeInsets=_lineEdgeInsets;
@property(nonatomic) struct UIEdgeInsets titleEdgeInsets; // @synthesize titleEdgeInsets=_titleEdgeInsets;
@property(retain, nonatomic) UIButton *extButton; // @synthesize extButton=_extButton;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

