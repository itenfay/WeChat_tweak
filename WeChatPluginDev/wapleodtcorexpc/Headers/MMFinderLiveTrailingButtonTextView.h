//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveTrailingButtonTextViewStyle, MMUIButton, NSString, RichTextView;

@interface MMFinderLiveTrailingButtonTextView : UIView
{
    CDUnknownBlockType _onTrailingButtonTapped;
    RichTextView *_subtitleTextView;
    MMUIButton *_detailButton;
    MMFinderLiveTrailingButtonTextViewStyle *_style;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveTrailingButtonTextViewStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) MMUIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) RichTextView *subtitleTextView; // @synthesize subtitleTextView=_subtitleTextView;
@property(copy, nonatomic) CDUnknownBlockType onTrailingButtonTapped; // @synthesize onTrailingButtonTapped=_onTrailingButtonTapped;
- (void)onButtonTapped;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (void)reloadUIWithCurrentStyle;
- (void)initSubviews;
- (void)setText:(id)arg1;
- (void)updateWithStyle:(id)arg1;
- (void)sizeToFitWithMaxWidth:(double)arg1;
- (id)initWithStyle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

