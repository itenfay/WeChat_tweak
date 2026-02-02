//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMLiveCastViewItem, MMUIActivityIndicatorView, MMUILabel, UIView;

@interface MMFinderLiveCastItemCell : UITableViewCell
{
    MMLiveCastViewItem *_viewItem;
    MMUILabel *_titleLabel;
    MMUIActivityIndicatorView *_activityIndicatorView;
    UIView *_topSeparatorLine;
    UIView *_bottomSeparatorLine;
}

+ (double)heightForViewItem:(id)arg1 inTableView:(id)arg2;
+ (id)defaultCellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomSeparatorLine; // @synthesize bottomSeparatorLine=_bottomSeparatorLine;
@property(retain, nonatomic) UIView *topSeparatorLine; // @synthesize topSeparatorLine=_topSeparatorLine;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMLiveCastViewItem *viewItem; // @synthesize viewItem=_viewItem;
- (void)layoutSubviews;
- (void)loadSeparatorLines;
- (void)updateActivityIndicatorViewLoadingState;
- (void)loadActivityIndicatorView;
- (void)loadTitleLabel;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_didSetNewViewModel:(id)arg1;
- (void)_willUnsetOldViewModel:(id)arg1;
- (void)updateAllValues;
- (void)updateValueForKeyPath:(id)arg1;
- (id)observingKeyPathsForViewModel;
- (void)_observedValueDidChangeForKeyPath:(id)arg1;
- (void)_unobserveViewModel:(id)arg1;
- (void)_observeViewModel:(id)arg1;

@end

