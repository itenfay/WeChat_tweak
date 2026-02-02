//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ImageBrowseButton, WCMomentsBizOriginalArticleButton;

@interface WCImageFullScreenButtonsContainerView
{
    unsigned long long _contentItemScene;
    CDUnknownBlockType _originalArticleBlock;
    CDUnknownBlockType _circleToSearchBlock;
    WCMomentsBizOriginalArticleButton *_bizOriginalArticleButton;
    ImageBrowseButton *_circleToSearchButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ImageBrowseButton *circleToSearchButton; // @synthesize circleToSearchButton=_circleToSearchButton;
@property(retain, nonatomic) WCMomentsBizOriginalArticleButton *bizOriginalArticleButton; // @synthesize bizOriginalArticleButton=_bizOriginalArticleButton;
@property(copy, nonatomic) CDUnknownBlockType circleToSearchBlock; // @synthesize circleToSearchBlock=_circleToSearchBlock;
@property(copy, nonatomic) CDUnknownBlockType originalArticleBlock; // @synthesize originalArticleBlock=_originalArticleBlock;
@property(nonatomic) unsigned long long contentItemScene; // @synthesize contentItemScene=_contentItemScene;
- (void)onClickCircleToSearchButton;
- (void)onClickOriginalArticleButton;
- (void)layoutSubviews;
- (void)initCircleToSearchButton;
- (void)initBizOriginalArticleButton;
- (void)hideCircleToSearchButton;
- (_Bool)canShowCircleToSearchButton;
- (_Bool)canShowBizOriginalArticleButtonWithMediaItem:(id)arg1;
- (void)showMediaItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

