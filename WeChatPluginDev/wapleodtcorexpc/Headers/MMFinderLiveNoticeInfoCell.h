//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMFinderLiveNoticeInfoViewItem, NSString, UIView, WCFinderLiveNoticeView;
@protocol MMFinderLiveNoticeInfoCellDelegate;

@interface MMFinderLiveNoticeInfoCell : UITableViewCell
{
    id <MMFinderLiveNoticeInfoCellDelegate> _delegate;
    MMFinderLiveNoticeInfoViewItem *_viewItem;
    WCFinderLiveNoticeView *_noticeView;
    UIView *_topLine;
    UIView *_bottomLine;
}

+ (double)heightForViewItem:(id)arg1 inTableView:(id)arg2;
+ (id)defaultCellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) WCFinderLiveNoticeView *noticeView; // @synthesize noticeView=_noticeView;
@property(retain, nonatomic) MMFinderLiveNoticeInfoViewItem *viewItem; // @synthesize viewItem=_viewItem;
@property(nonatomic) __weak id <MMFinderLiveNoticeInfoCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLiveNoticeViewActionButtonClicked:(id)arg1;
- (void)onLiveNoticeViewMainNoticeButtonClicked:(id)arg1;
- (void)noticeInfoViewItemDidUpdate:(id)arg1;
- (void)layoutSubviews;
- (void)updateAllValues;
@property(nonatomic) _Bool displayTopLine;
- (void)loadNoticeView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

