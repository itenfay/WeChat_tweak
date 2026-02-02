//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class WCFinderCustomImageRichTextView;

@interface WCFinderPanelThumbEnhanceBubbleView : UIView
{
    double _maxWidth;
    UIView *_containerView;
    WCFinderCustomImageRichTextView *_contentLabel;
}

+ (id)getRecommendContentWithContentVM:(id)arg1;
+ (id)bubbleBgColorWithContentVM:(id)arg1;
+ (_Bool)recommendFromEnhanceWithContentVM:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCustomImageRichTextView *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
- (void)updateWithContentVM:(id)arg1;
- (void)layoutUI;
- (void)setupUI;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

