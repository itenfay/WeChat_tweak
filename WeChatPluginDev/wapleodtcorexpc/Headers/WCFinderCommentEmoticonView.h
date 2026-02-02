//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMEmoticonView, NSString, UIImageView, WCFinderAnimationLoadingView, WCFinderComment;

@interface WCFinderCommentEmoticonView
{
    MMEmoticonView *_emoticonView;
    UIImageView *_emptyTipsView;
    WCFinderAnimationLoadingView *_loadingTipsView;
    WCFinderComment *_comment;
}

+ (struct CGSize)sizeWithFinderEmoticonComment:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderComment *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingTipsView; // @synthesize loadingTipsView=_loadingTipsView;
@property(retain, nonatomic) UIImageView *emptyTipsView; // @synthesize emptyTipsView=_emptyTipsView;
@property(retain, nonatomic) MMEmoticonView *emoticonView; // @synthesize emoticonView=_emoticonView;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)setState:(unsigned long long)arg1;
- (struct CGSize)updateWithFinderEmoticonComment:(id)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

