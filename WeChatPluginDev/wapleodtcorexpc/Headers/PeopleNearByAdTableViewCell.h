//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, UIImageView, UILabel;
@protocol PeopleNearByAdTableViewCellDelegate;

@interface PeopleNearByAdTableViewCell
{
    id <PeopleNearByAdTableViewCellDelegate> _delegate;
    UIImageView *_headerImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    MMUIButton *_closeButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(nonatomic) __weak id <PeopleNearByAdTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)relayout;
- (void)layoutSubviews;
- (void)closeButtonPressed;
- (void)updateWithLbsAdInfo:(id)arg1 withHeaderView:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

