//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImageView, WCFinderFeedContentTouchExpandTextView, WCFinderTemplateCommentArrowButton;
@protocol WCFinderTemplateVideoCommentView;

@interface WCFinderTemplateVideoCommentView
{
    id <WCFinderTemplateVideoCommentView> _delegate;
    WCFinderFeedContentTouchExpandTextView *_textView;
    UIImageView *_imgView;
    UIImageView *_playIconView;
    WCFinderTemplateCommentArrowButton *_cutSameVideoBtn;
    unsigned long long _commentType;
}

+ (double)heightWithComment:(id)arg1 width:(double)arg2 forceExpand:(_Bool)arg3;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long commentType; // @synthesize commentType=_commentType;
@property(retain, nonatomic) WCFinderTemplateCommentArrowButton *cutSameVideoBtn; // @synthesize cutSameVideoBtn=_cutSameVideoBtn;
@property(retain, nonatomic) UIImageView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) WCFinderFeedContentTouchExpandTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <WCFinderTemplateVideoCommentView> delegate; // @synthesize delegate=_delegate;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(_Bool)arg2;
- (void)onClickCutSameBtn;
- (void)onClickPreviewView;
- (void)updateCutSameBtnStyleByComment:(id)arg1;
- (double)updateWithComment:(id)arg1 isAuthor:(_Bool)arg2;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

