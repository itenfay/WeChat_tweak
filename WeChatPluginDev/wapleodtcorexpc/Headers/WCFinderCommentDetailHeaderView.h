//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, UILabel, WCFinderCommentListSelectTabView, WCFinderSteramProfileBarView;
@protocol WCFinderCommentDetailHeaderViewDelegate;

@interface WCFinderCommentDetailHeaderView : UIView
{
    _Bool _useMultipleTabStyle;
    UILabel *_titleLabel;
    MMUIButton *_closeBtn;
    WCFinderSteramProfileBarView *_lineView;
    WCFinderCommentListSelectTabView *_selectTabView;
    id <WCFinderCommentDetailHeaderViewDelegate> _delegate;
}

+ (double)headerViewHeight;
- (void).cxx_destruct;
@property(nonatomic) _Bool useMultipleTabStyle; // @synthesize useMultipleTabStyle=_useMultipleTabStyle;
@property(nonatomic) __weak id <WCFinderCommentDetailHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderCommentListSelectTabView *selectTabView; // @synthesize selectTabView=_selectTabView;
@property(retain, nonatomic) WCFinderSteramProfileBarView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)didClickClose:(id)arg1;
- (void)updateMoveDistance:(double)arg1;
- (void)updateCommentStr:(id)arg1 shopCommentStr:(id)arg2 linkText:(id)arg3;
- (void)setUpMultipleTabHeader;
- (void)adjustMultipleTabLayout;
- (void)adjustLayout;
- (void)adjustTraditionalLayout;
- (void)setUpTraditionalHeader;
- (id)initWithFrame:(struct CGRect)arg1 useMultipleTabStyle:(_Bool)arg2;

@end

