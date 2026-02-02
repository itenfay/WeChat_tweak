//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel;
@protocol WCFinderLiveCompleteLiveVideoContentViewDelegate;

@interface WCFinderLiveCompleteLiveVideoContentView : UIView
{
    _Bool _isLayoutFeeds;
    id <WCFinderLiveCompleteLiveVideoContentViewDelegate> _delegate;
    double _containerViewHeight;
    UIView *_videoContainerView;
    MMUILabel *_titleLabel;
    MMUILabel *_timeLabel;
    MMUIButton *_actionButton;
    double _itemBottom;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLayoutFeeds; // @synthesize isLayoutFeeds=_isLayoutFeeds;
@property(nonatomic) double itemBottom; // @synthesize itemBottom=_itemBottom;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *videoContainerView; // @synthesize videoContainerView=_videoContainerView;
@property(nonatomic) double containerViewHeight; // @synthesize containerViewHeight=_containerViewHeight;
@property(nonatomic) __weak id <WCFinderLiveCompleteLiveVideoContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)actionButtonClick:(id)arg1;
- (void)updateVideoContainerViewHeight;
- (void)layoutCardItem:(id)arg1;
- (double)videoContainerViewPadding;
- (double)itemMargin;
- (double)widthAndHeightScale;
- (void)layoutSubviews;
- (id)init;

@end

