//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveScreenshotPosterLogic, UILabel;
@protocol MMFinderLiveScreenshotPosterHintViewDelegate;

@interface MMFinderLiveScreenshotPosterHintView : UIView
{
    MMFinderLiveScreenshotPosterLogic *_screenshotPosterLogic;
    id <MMFinderLiveScreenshotPosterHintViewDelegate> _delegate;
    UILabel *_label;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) __weak id <MMFinderLiveScreenshotPosterHintViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveScreenshotPosterLogic *screenshotPosterLogic; // @synthesize screenshotPosterLogic=_screenshotPosterLogic;
- (void)onTapped;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithScreenshotPosterLogic:(id)arg1;

@end

