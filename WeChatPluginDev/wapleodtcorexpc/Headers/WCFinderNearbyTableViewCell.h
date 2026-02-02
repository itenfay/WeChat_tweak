//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;
@protocol WCFinderNearbyTableViewCellDelegate;

@interface WCFinderNearbyTableViewCell : UITableViewCell
{
    id <WCFinderNearbyTableViewCellDelegate> _delegate;
    UIView *_mBackgroundView;
    UIImageView *_poiImageView;
    UILabel *_poiTipsLabel;
    UIImageView *_arrowImageView;
}

+ (double)getNearbyTableViewCellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *poiTipsLabel; // @synthesize poiTipsLabel=_poiTipsLabel;
@property(retain, nonatomic) UIImageView *poiImageView; // @synthesize poiImageView=_poiImageView;
@property(retain, nonatomic) UIView *mBackgroundView; // @synthesize mBackgroundView=_mBackgroundView;
@property(nonatomic) __weak id <WCFinderNearbyTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickNearbyCellAction;
- (void)shouldHiddenSubViews:(_Bool)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

