//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, RichTextView;

@interface WCFinderModifyHistoryCardView
{
    MMWebImageView *_coverImageView;
    RichTextView *_longDescTextView;
    RichTextView *_shortDescTextView;
    RichTextView *_editTimeTextView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *editTimeTextView; // @synthesize editTimeTextView=_editTimeTextView;
@property(retain, nonatomic) RichTextView *shortDescTextView; // @synthesize shortDescTextView=_shortDescTextView;
@property(retain, nonatomic) RichTextView *longDescTextView; // @synthesize longDescTextView=_longDescTextView;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void)updateWithFeedRecordInfo:(id)arg1 isInitial:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

