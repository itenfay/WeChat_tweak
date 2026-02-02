//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUILabel, MMUIView, UIImageView, UIView, WCFinderLiveStarterLiveModeSubItem;

@interface WCFinderLiveStarterChooseOrientationCell : UITableViewCell
{
    WCFinderLiveStarterLiveModeSubItem *_item;
    UIView *_bgView;
    MMUILabel *_titleLabel;
    MMUILabel *_stateLabel;
    UIImageView *_selectStateImg;
    MMUIView *_redDotView;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIView *redDotView; // @synthesize redDotView=_redDotView;
@property(retain, nonatomic) UIImageView *selectStateImg; // @synthesize selectStateImg=_selectStateImg;
@property(retain, nonatomic) MMUILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) WCFinderLiveStarterLiveModeSubItem *item; // @synthesize item=_item;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateItem:(id)arg1;

@end

