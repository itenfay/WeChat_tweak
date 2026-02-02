//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, NSString, UILabel, WCFinderDataItem, WCFinderFeedImageCDNView;

@interface WCFinderLiveCompleteLiveReplayView : UIView
{
    CDUnknownBlockType _liveReplayViewBlock;
    WCFinderDataItem *_dataItem;
    WCFinderFeedImageCDNView *_coverView;
    MMUIButton *_actionButton;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) WCFinderFeedImageCDNView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(copy, nonatomic) CDUnknownBlockType liveReplayViewBlock; // @synthesize liveReplayViewBlock=_liveReplayViewBlock;
- (void)layoutUI;
- (void)liveReplayViewClick;
- (void)createUI;
- (void)layoutSubviews;
- (void)updateData:(id)arg1;
- (void)finderFeedImageLoadFinish;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

