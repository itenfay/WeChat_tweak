//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMFinderLiveNoticeMoreViewItem, MMUIActivityIndicatorView, MMUILabel, NSString;

@interface MMFinderLiveNoticeMoreCell : UITableViewCell
{
    MMFinderLiveNoticeMoreViewItem *_viewItem;
    MMUILabel *_tipsLabel;
    MMUIActivityIndicatorView *_activityIndicatorView;
}

+ (double)heightForViewItem:(id)arg1 inTableView:(id)arg2;
+ (id)defaultCellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MMFinderLiveNoticeMoreViewItem *viewItem; // @synthesize viewItem=_viewItem;
- (void)moreViewItemDidUpdate:(id)arg1;
- (void)updateActivityIndicatorViewLoadingState;
- (void)layoutSubviews;
- (void)updateAllValues;
- (void)loadActivityIndicatorView;
- (void)loadTipsLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

