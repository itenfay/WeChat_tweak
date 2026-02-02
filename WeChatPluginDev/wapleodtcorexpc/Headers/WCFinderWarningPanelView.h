//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class RichTextView, UIView;

@interface WCFinderWarningPanelView
{
    RichTextView *_lowBitRateTextView;
    RichTextView *_durationRecomTextView;
    UIView *_shortTitleView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *shortTitleView; // @synthesize shortTitleView=_shortTitleView;
@property(retain, nonatomic) RichTextView *durationRecomTextView; // @synthesize durationRecomTextView=_durationRecomTextView;
@property(retain, nonatomic) RichTextView *lowBitRateTextView; // @synthesize lowBitRateTextView=_lowBitRateTextView;
- (void)layoutAllSubviews;
- (void)bindClickBlockToFlag:(unsigned long long)arg1 clickBlock:(CDUnknownBlockType)arg2;
- (void)showViewAsFlag:(unsigned long long)arg1;
- (void)updateFlag:(unsigned long long)arg1 content:(id)arg2;

@end

