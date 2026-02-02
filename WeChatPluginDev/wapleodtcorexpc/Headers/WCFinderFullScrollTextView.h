//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIScrollView, WCFinderFeedContentTextViewConfig, WCFinderFeedContentTouchExpandTextView;

@interface WCFinderFullScrollTextView : UIView
{
    UIScrollView *_scrollView;
    WCFinderFeedContentTouchExpandTextView *_contentLabel;
    double _verticalMargin;
}

- (void).cxx_destruct;
@property(nonatomic) double verticalMargin; // @synthesize verticalMargin=_verticalMargin;
@property(retain, nonatomic) WCFinderFeedContentTouchExpandTextView *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)applyLabelChange;
- (void)updateConfig;
@property(readonly, nonatomic) WCFinderFeedContentTextViewConfig *config;
- (id)initWithFrame:(struct CGRect)arg1;

@end

