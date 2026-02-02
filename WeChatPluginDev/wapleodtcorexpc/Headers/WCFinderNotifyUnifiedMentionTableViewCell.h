//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class RichTextView;

@interface WCFinderNotifyUnifiedMentionTableViewCell
{
    RichTextView *_contentTextView;
}

+ (double)getHeightWithViewModel:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak RichTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
- (double)contentBottomOffset;
- (void)updateNofiyCenterCellWithViewModel:(id)arg1 width:(double)arg2;
- (void)prepareForReuse;
- (void)setUpViewLayout;
- (void)setUpUI;

@end

