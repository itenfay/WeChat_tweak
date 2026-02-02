//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, RichTextView, UILabel;

@interface WCFinderBriefCardView
{
    MMWebImageView *_avatarView;
    UILabel *_nameLabel;
    RichTextView *_introTextView;
    RichTextView *_guideTextView;
    CDUnknownBlockType _clickAction;
}

+ (double)cardHeight;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType clickAction; // @synthesize clickAction=_clickAction;
@property(retain, nonatomic) RichTextView *guideTextView; // @synthesize guideTextView=_guideTextView;
@property(retain, nonatomic) RichTextView *introTextView; // @synthesize introTextView=_introTextView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMWebImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void)layoutAllSubviews;
- (void)updateWithContact:(id)arg1 rightText:(id)arg2 clickAction:(CDUnknownBlockType)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

