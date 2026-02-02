//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface WCFinderDislikeReasonSelectionCell : UITableViewCell
{
    _Bool _hideCheckbox;
    UILabel *_reasonLabel;
    UIView *_seperator;
    UIImageView *_checkboxImageView;
    double _layoutWidth;
}

+ (double)defaultCellHeight;
- (void).cxx_destruct;
@property(nonatomic) _Bool hideCheckbox; // @synthesize hideCheckbox=_hideCheckbox;
@property(nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(retain, nonatomic) UIImageView *checkboxImageView; // @synthesize checkboxImageView=_checkboxImageView;
@property(retain, nonatomic) UIView *seperator; // @synthesize seperator=_seperator;
@property(retain, nonatomic) UILabel *reasonLabel; // @synthesize reasonLabel=_reasonLabel;
- (id)checkboxImageWithSelected:(_Bool)arg1;
- (void)updateWithWording:(id)arg1 selected:(_Bool)arg2;
- (void)updateUI;
- (void)setupUI;
- (void)layoutSubviews;
- (void)setCheckBoxHidden:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

