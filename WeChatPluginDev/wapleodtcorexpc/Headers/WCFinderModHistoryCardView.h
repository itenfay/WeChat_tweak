//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class RichTextView, UILabel, WCFinderFeedStaticCoverView;

@interface WCFinderModHistoryCardView
{
    WCFinderFeedStaticCoverView *_coverView;
    RichTextView *_longDescTextView;
    RichTextView *_shortDescTextView;
    UILabel *_timeLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) RichTextView *shortDescTextView; // @synthesize shortDescTextView=_shortDescTextView;
@property(retain, nonatomic) RichTextView *longDescTextView; // @synthesize longDescTextView=_longDescTextView;
@property(retain, nonatomic) WCFinderFeedStaticCoverView *coverView; // @synthesize coverView=_coverView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

