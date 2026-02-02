//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class RichTextView, UIImageView, UILabel, UIView, WCFinderComment;

@interface WCFinderBulletAnimationCommentView
{
    RichTextView *_richText;
    WCFinderComment *_comment;
    UIView *_lineView;
    UIImageView *_likeIconView;
    UILabel *_likeNumLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *likeNumLabel; // @synthesize likeNumLabel=_likeNumLabel;
@property(retain, nonatomic) UIImageView *likeIconView; // @synthesize likeIconView=_likeIconView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) WCFinderComment *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) RichTextView *richText; // @synthesize richText=_richText;
- (void)updateWithComment:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

