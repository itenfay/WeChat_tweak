//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class RichTextView;

@interface WCFinderShadowTipsView : UIView
{
    double _topBottomMargin;
    RichTextView *_tipsRichTextView;
}

+ (double)defaultHeightByWidth:(double)arg1;
+ (id)genRichTextViewByMaxWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *tipsRichTextView; // @synthesize tipsRichTextView=_tipsRichTextView;
@property(nonatomic) double topBottomMargin; // @synthesize topBottomMargin=_topBottomMargin;
- (void)setUpTips:(id)arg1;
- (void)updateFont:(id)arg1;
- (void)updateTextColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 topBottomMargin:(double)arg2 bgColor:(id)arg3;

@end

