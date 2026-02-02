//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class WCFinderFeedLiveToolBarItemButton;
@protocol WCFinderFeedToolbarActionDelegate;

@interface WCFinderFeedLiveToolBarView : UIView
{
    _Bool _allowForward;
    id <WCFinderFeedToolbarActionDelegate> _delegate;
    WCFinderFeedLiveToolBarItemButton *_shareBtn;
}

+ (double)defaultWidth;
- (void).cxx_destruct;
@property(nonatomic) _Bool allowForward; // @synthesize allowForward=_allowForward;
@property(retain, nonatomic) WCFinderFeedLiveToolBarItemButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(nonatomic) __weak id <WCFinderFeedToolbarActionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)whiteColorWithAlphaComponent;
- (void)layoutSubviews;
- (void)didClickShareBtn:(id)arg1;
- (void)layoutUI;
- (void)updateShareBtnVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateShareContainer:(_Bool)arg1;
- (void)updateAllowForward:(_Bool)arg1;
- (void)setupSubView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

