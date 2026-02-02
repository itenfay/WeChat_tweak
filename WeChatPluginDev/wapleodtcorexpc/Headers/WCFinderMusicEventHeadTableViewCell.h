//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMWebImageView, UIButton, UILabel;
@protocol WCFinderMusicEventHeadTableViewCellDelegate;

@interface WCFinderMusicEventHeadTableViewCell : UITableViewCell
{
    id <WCFinderMusicEventHeadTableViewCellDelegate> _delegate;
    UILabel *_titleLabel;
    MMWebImageView *_coverImageView;
    UILabel *_authorNameLabel;
    UILabel *_descLabel;
    MMWebImageView *_authIconView;
    UIButton *_actionButton;
}

+ (id)cellID;
+ (double)cellH;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMWebImageView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *authorNameLabel; // @synthesize authorNameLabel=_authorNameLabel;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <WCFinderMusicEventHeadTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickActionButton:(id)arg1;
- (void)updateWithCellData:(id)arg1;
- (void)setupLayout;
- (void)setupSubview;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

