//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class RichTextView;

@interface WCTogetherTextFeedCell
{
    RichTextView *_richTextView;
}

+ (double)heightForItemContentViewWithViewItem:(id)arg1 inTableView:(id)arg2;
+ (id)createRichTextView;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
- (void)contentDidTap;
- (void)layoutItemContentView;
- (void)loadItemContentView;
- (void)updateValueForKeyPath:(id)arg1;
- (id)observingKeyPathsForViewModel;

@end

