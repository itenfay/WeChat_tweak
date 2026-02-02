//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class RichTextView;

@interface WCFinderCornerTextBubbleView
{
    RichTextView *_richTextView;
}

+ (long long)getTextMaxLengthCountByTotalWidth:(double)arg1;
+ (double)heightOfWidth:(double)arg1 content:(id)arg2;
+ (id)genRichTextViewByWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
- (void)updateWithContent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

