//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, RichTextView;

@interface WCFinderNotifyUnifiedCommentTableViewCell
{
    RichTextView *_contentTextView;
    MMUIButton *_commentDeleteLabel;
}

+ (double)getHeightWithViewModel:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak MMUIButton *commentDeleteLabel; // @synthesize commentDeleteLabel=_commentDeleteLabel;
@property(nonatomic) __weak RichTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
- (void)updateNofiyCenterCellWithViewModel:(id)arg1 width:(double)arg2;
- (void)prepareForReuse;
- (void)setUpViewLayout;
- (void)setUpUI;

@end

