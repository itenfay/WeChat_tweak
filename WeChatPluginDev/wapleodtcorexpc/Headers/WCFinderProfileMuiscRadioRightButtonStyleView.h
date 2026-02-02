//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMListenCategoryItem, MMListenFinderSingerProfileShowInfo, MMUILabel, NSString, RichTextView, UIButton, UIImageView;

@interface WCFinderProfileMuiscRadioRightButtonStyleView : UIView
{
    _Bool _displayCoveredMode;
    int _scene;
    CDUnknownBlockType _onTapCallBack;
    CDUnknownBlockType _onJumpMusicianCategoryCallBack;
    UIButton *_bgCircleView;
    UIImageView *_playBtnView;
    MMUILabel *_playWordingLabel;
    MMUILabel *_radioTitleLabel;
    RichTextView *_consumeDataLabel;
    UIImageView *_coverView;
    UIView *_highlightMask;
    MMListenFinderSingerProfileShowInfo *_showInfo;
    MMListenCategoryItem *_singerRadioCategory;
    RichTextView *_extraDescLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *extraDescLabel; // @synthesize extraDescLabel=_extraDescLabel;
@property(retain, nonatomic) MMListenCategoryItem *singerRadioCategory; // @synthesize singerRadioCategory=_singerRadioCategory;
@property(retain, nonatomic) MMListenFinderSingerProfileShowInfo *showInfo; // @synthesize showInfo=_showInfo;
@property(retain, nonatomic) UIView *highlightMask; // @synthesize highlightMask=_highlightMask;
@property(retain, nonatomic) UIImageView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) RichTextView *consumeDataLabel; // @synthesize consumeDataLabel=_consumeDataLabel;
@property(retain, nonatomic) MMUILabel *radioTitleLabel; // @synthesize radioTitleLabel=_radioTitleLabel;
@property(retain, nonatomic) MMUILabel *playWordingLabel; // @synthesize playWordingLabel=_playWordingLabel;
@property(retain, nonatomic) UIImageView *playBtnView; // @synthesize playBtnView=_playBtnView;
@property(retain, nonatomic) UIButton *bgCircleView; // @synthesize bgCircleView=_bgCircleView;
@property(copy, nonatomic) CDUnknownBlockType onJumpMusicianCategoryCallBack; // @synthesize onJumpMusicianCategoryCallBack=_onJumpMusicianCategoryCallBack;
@property(copy, nonatomic) CDUnknownBlockType onTapCallBack; // @synthesize onTapCallBack=_onTapCallBack;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool displayCoveredMode; // @synthesize displayCoveredMode=_displayCoveredMode;
- (id)genReportParams;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)genRichText:(id)arg1;
- (void)applyRadioInfo:(id)arg1;
- (_Bool)showDarkStyle;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)onTapPlay;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

