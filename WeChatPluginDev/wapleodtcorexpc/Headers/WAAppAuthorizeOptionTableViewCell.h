//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface WAAppAuthorizeOptionTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    UIImageView *_toggleImageView;
    UIView *_bottomLineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIImageView *toggleImageView; // @synthesize toggleImageView=_toggleImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)unToggle;
- (void)toggle;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

