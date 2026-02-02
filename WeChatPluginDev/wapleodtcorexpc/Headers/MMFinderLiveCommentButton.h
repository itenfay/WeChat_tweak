//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveCommentBlurButtonBackView;

@interface MMFinderLiveCommentButton
{
    _Bool _isSynchronizeLayout;
    CDUnknownBlockType _commentTalkButtonDidTapBlock;
    CDUnknownBlockType _commentButtonHiddenChangeCallback;
    CDUnknownBlockType _commentButtonAlphaChangeCallback;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSynchronizeLayout; // @synthesize isSynchronizeLayout=_isSynchronizeLayout;
@property(copy, nonatomic) CDUnknownBlockType commentButtonAlphaChangeCallback; // @synthesize commentButtonAlphaChangeCallback=_commentButtonAlphaChangeCallback;
@property(copy, nonatomic) CDUnknownBlockType commentButtonHiddenChangeCallback; // @synthesize commentButtonHiddenChangeCallback=_commentButtonHiddenChangeCallback;
@property(copy, nonatomic) CDUnknownBlockType commentTalkButtonDidTapBlock; // @synthesize commentTalkButtonDidTapBlock=_commentTalkButtonDidTapBlock;
- (void)onCommentTalkButtonClick;
- (void)updateCanShowTalkButton:(_Bool)arg1;
@property(readonly, nonatomic) MMFinderLiveCommentBlurButtonBackView *commentBlurBackView;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(_Bool)arg1;
- (id)getBlurButtonBackView;

@end

