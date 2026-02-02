//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView, UIView;

@interface WCCanvasHalfRandomSubCardBulletCommentButton
{
    NSString *_bulletComment;
    RichTextView *_bulletCommentView;
    UIView *_disabledCover;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *disabledCover; // @synthesize disabledCover=_disabledCover;
@property(retain, nonatomic) RichTextView *bulletCommentView; // @synthesize bulletCommentView=_bulletCommentView;
@property(retain, nonatomic) NSString *bulletComment; // @synthesize bulletComment=_bulletComment;
- (void)setEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 bulletComment:(id)arg2;

@end

