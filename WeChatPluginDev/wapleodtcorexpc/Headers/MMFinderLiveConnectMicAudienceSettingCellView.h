//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface MMFinderLiveConnectMicAudienceSettingCellView : UITableViewCell
{
    _Bool _isSingleLineMode;
    _Bool _showSeparator;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_arrowIconView;
    UIView *_separateLineView;
}

+ (id)ReuseIdentifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool showSeparator; // @synthesize showSeparator=_showSeparator;
@property(nonatomic) _Bool isSingleLineMode; // @synthesize isSingleLineMode=_isSingleLineMode;
@property(retain, nonatomic) UIView *separateLineView; // @synthesize separateLineView=_separateLineView;
@property(retain, nonatomic) UIImageView *arrowIconView; // @synthesize arrowIconView=_arrowIconView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateCellWithTitle:(id)arg1 subtitle:(id)arg2 isSingleLineMode:(_Bool)arg3 andShowSeparator:(_Bool)arg4;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

