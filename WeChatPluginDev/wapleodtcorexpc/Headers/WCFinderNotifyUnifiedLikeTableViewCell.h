//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, WCFinderDynamicRichTextView;

@interface WCFinderNotifyUnifiedLikeTableViewCell
{
    UIImageView *_likeImageView;
    WCFinderDynamicRichTextView *_contentTextView;
}

+ (double)getHeightWithViewModel:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak WCFinderDynamicRichTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(nonatomic) __weak UIImageView *likeImageView; // @synthesize likeImageView=_likeImageView;
- (void)updateNofiyCenterCellWithViewModel:(id)arg1 width:(double)arg2;
- (void)prepareForReuse;
- (void)setUpViewLayout;
- (void)setUpUI;

@end

