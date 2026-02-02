//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderEnterStreamTips, UIImageView, WCFinderCustomImageRichTextView;

@interface WCFinderEnterStreamTipBubbleView
{
    _Bool _canJump;
    FinderEnterStreamTips *_tips;
    WCFinderCustomImageRichTextView *_richTextView;
    UIImageView *_arrowImgView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool canJump; // @synthesize canJump=_canJump;
@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(retain, nonatomic) WCFinderCustomImageRichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) FinderEnterStreamTips *tips; // @synthesize tips=_tips;
- (void)setText:(id)arg1;
- (void)enableJump:(_Bool)arg1;
- (id)init;

@end

