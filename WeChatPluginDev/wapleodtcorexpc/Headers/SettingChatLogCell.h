//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUILabel, NSString, UIImageView, UIView, WXGRoamBannerView;

@interface SettingChatLogCell : UITableViewCell
{
    NSString *_iconName;
    NSString *_titleString;
    NSString *_detailString;
    UIImageView *_iconImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_detailLabel;
    UIImageView *_arrowImageView;
    UIView *_myBackgroundView;
    long long _cellType;
    UIView *_backupBannerView;
    WXGRoamBannerView *_bannerView;
    unsigned long long _cellHeight;
    CDUnknownBlockType _reloadBlock;
}

+ (double)heightForDetailLabel:(id)arg1 maxWidth:(double)arg2;
+ (double)cellMaxDetailWidth:(double)arg1;
+ (double)cellHeight:(id)arg1 maxWidth:(double)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType reloadBlock; // @synthesize reloadBlock=_reloadBlock;
@property(nonatomic) unsigned long long cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) WXGRoamBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) UIView *backupBannerView; // @synthesize backupBannerView=_backupBannerView;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) UIView *myBackgroundView; // @synthesize myBackgroundView=_myBackgroundView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) NSString *detailString; // @synthesize detailString=_detailString;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
- (void)onRoamBannerViewHidden;
- (void)onRoamBannerViewShow;
- (void)onTapBanner;
- (void)updateFrames;
- (void)setupBannerAndCellHeight;
- (void)updateView;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

