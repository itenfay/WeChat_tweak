//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, RichTextView;

@interface WCFinderPostUsualTopicCell
{
    RichTextView *_topicTextView;
    MMUILabel *_useCountLabel;
}

+ (double)getUsualTopicHeight;
+ (id)createLabel;
+ (id)createRichTextView;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *useCountLabel; // @synthesize useCountLabel=_useCountLabel;
@property(retain, nonatomic) RichTextView *topicTextView; // @synthesize topicTextView=_topicTextView;
- (void)layoutElements;
- (void)updateCellWithTopicInfo:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

