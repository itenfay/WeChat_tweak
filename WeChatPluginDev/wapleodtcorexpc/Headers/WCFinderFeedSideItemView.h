//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class UIView, WCFinderFeedContentVM, WCFinderFeedImageCDNView;

@interface WCFinderFeedSideItemView : UIButton
{
    _Bool _showHighlight;
    WCFinderFeedImageCDNView *_coverView;
    WCFinderFeedContentVM *_contentVM;
    UIView *_highlightView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showHighlight; // @synthesize showHighlight=_showHighlight;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) WCFinderFeedImageCDNView *coverView; // @synthesize coverView=_coverView;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

