//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView, UIImageView, UILabel, UIView, WCDataItem;
@protocol VoipRecentStatusProperties;

@interface VoipRecentStatusSNSCardView
{
    _Bool _isSoundBtnHidden;
    _Bool _shouldPlaySound;
    _Bool _isVisable;
    CDUnknownBlockType _didClickSoundButtonCallback;
    CDUnknownBlockType _didSlideImagesCallback;
    CDUnknownBlockType _didClickOpenPageButtonCallback;
    WCDataItem *_wcDataItem;
    UIView<VoipRecentStatusProperties> *_backgroundView;
    UILabel *_publishLabel;
    UIImageView *_publishArrowLabel;
    RichTextView *_descriptionRichTextView;
    UILabel *_positionLabel;
    UIView *_openPageHotView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *openPageHotView; // @synthesize openPageHotView=_openPageHotView;
@property(retain, nonatomic) UILabel *positionLabel; // @synthesize positionLabel=_positionLabel;
@property(retain, nonatomic) RichTextView *descriptionRichTextView; // @synthesize descriptionRichTextView=_descriptionRichTextView;
@property(retain, nonatomic) UIImageView *publishArrowLabel; // @synthesize publishArrowLabel=_publishArrowLabel;
@property(retain, nonatomic) UILabel *publishLabel; // @synthesize publishLabel=_publishLabel;
@property(retain, nonatomic) UIView<VoipRecentStatusProperties> *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) WCDataItem *wcDataItem; // @synthesize wcDataItem=_wcDataItem;
@property(copy, nonatomic) CDUnknownBlockType didClickOpenPageButtonCallback; // @synthesize didClickOpenPageButtonCallback=_didClickOpenPageButtonCallback;
@property(copy, nonatomic) CDUnknownBlockType didSlideImagesCallback; // @synthesize didSlideImagesCallback=_didSlideImagesCallback;
@property(copy, nonatomic) CDUnknownBlockType didClickSoundButtonCallback; // @synthesize didClickSoundButtonCallback=_didClickSoundButtonCallback;
@property(nonatomic) _Bool isVisable; // @synthesize isVisable=_isVisable;
@property(nonatomic) _Bool shouldPlaySound; // @synthesize shouldPlaySound=_shouldPlaySound;
@property(nonatomic) _Bool isSoundBtnHidden; // @synthesize isSoundBtnHidden=_isSoundBtnHidden;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (void)onClickOpenPageHotViewWithSender:(id)arg1;
- (double)preferredHeight;
- (void)layoutSubviews;
- (id)initWithWCDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

