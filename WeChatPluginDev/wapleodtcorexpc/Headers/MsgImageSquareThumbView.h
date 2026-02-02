//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AppFileNodeProgressView, CMessageWrap, MMUIActivityIndicatorView, MMWebImageView, NSString, SimpleImgInfo, UIImageView, UILabel, UIProgressView, UIView, YYImage;

@interface MsgImageSquareThumbView
{
    SimpleImgInfo *m_imgInfo;
    NSString *m_imageLocalPath;
    NSString *m_imageSquarePath;
    id m_target;
    SEL m_shouldSelectSEL;
    _Bool m_selectable;
    _Bool m_isSelected;
    _Bool m_isDisabled;
    _Bool m_isExpired;
    _Bool m_isLoading;
    _Bool m_showMaskWhenDisabled;
    _Bool m_bUseWebImg;
    _Bool m_isFromFav;
    double m_downloadPercent;
    double m_circlePercent;
    UIView *m_iconView;
    UILabel *m_titleLabel;
    UILabel *m_timeLabel;
    UILabel *m_sizeLabel;
    UIView *m_timeBkgView;
    UIView *m_markSelectedView;
    UIImageView *m_markSelectedImageView;
    UIView *m_disabledMaskView;
    UIImageView *m_markExpiredImageView;
    CMessageWrap *m_msgWrap;
    UILabel *m_percentLabel;
    UIProgressView *m_percentProgress;
    MMUIActivityIndicatorView *m_downloadingFlower;
    AppFileNodeProgressView *m_circleProgress;
    YYImage *m_image;
    MMWebImageView *m_webImgView;
}

+ (struct CGSize)calcCompressImageSize:(id)arg1;
+ (id)compressImage:(id)arg1;
+ (void)compressMsgImgTOSquareImg:(id)arg1;
+ (_Bool)isLongImage:(id)arg1;
+ (id)getColorForIconName:(id)arg1;
+ (Class)layerClass;
- (void).cxx_destruct;
@property(nonatomic) _Bool m_isFromFav; // @synthesize m_isFromFav;
@property(nonatomic) _Bool m_bUseWebImg; // @synthesize m_bUseWebImg;
@property(retain, nonatomic) MMWebImageView *m_webImgView; // @synthesize m_webImgView;
@property(retain, nonatomic) YYImage *m_image; // @synthesize m_image;
@property(retain, nonatomic) AppFileNodeProgressView *m_circleProgress; // @synthesize m_circleProgress;
@property(retain, nonatomic) MMUIActivityIndicatorView *m_downloadingFlower; // @synthesize m_downloadingFlower;
@property(retain, nonatomic) UIProgressView *m_percentProgress; // @synthesize m_percentProgress;
@property(retain, nonatomic) UILabel *m_percentLabel; // @synthesize m_percentLabel;
@property(retain, nonatomic) CMessageWrap *m_msgWrap; // @synthesize m_msgWrap;
@property(retain, nonatomic) UIImageView *m_markExpiredImageView; // @synthesize m_markExpiredImageView;
@property(retain, nonatomic) UIView *m_disabledMaskView; // @synthesize m_disabledMaskView;
@property(retain, nonatomic) UIImageView *m_markSelectedImageView; // @synthesize m_markSelectedImageView;
@property(retain, nonatomic) UIView *m_markSelectedView; // @synthesize m_markSelectedView;
@property(retain, nonatomic) UIView *m_timeBkgView; // @synthesize m_timeBkgView;
@property(retain, nonatomic) UILabel *m_sizeLabel; // @synthesize m_sizeLabel;
@property(retain, nonatomic) UILabel *m_timeLabel; // @synthesize m_timeLabel;
@property(retain, nonatomic) UILabel *m_titleLabel; // @synthesize m_titleLabel;
@property(retain, nonatomic) UIView *m_iconView; // @synthesize m_iconView;
@property(nonatomic) _Bool m_showMaskWhenDisabled; // @synthesize m_showMaskWhenDisabled;
@property(nonatomic) double m_circlePercent; // @synthesize m_circlePercent;
@property(nonatomic) double m_downloadPercent; // @synthesize m_downloadPercent;
@property(nonatomic) _Bool m_isLoading; // @synthesize m_isLoading;
@property(nonatomic) _Bool m_isExpired; // @synthesize m_isExpired;
@property(nonatomic) _Bool m_isDisabled; // @synthesize m_isDisabled;
@property(nonatomic) _Bool m_isSelected; // @synthesize m_isSelected;
@property(nonatomic) _Bool m_selectable; // @synthesize m_selectable;
@property(retain, nonatomic) NSString *m_imageLocalPath; // @synthesize m_imageLocalPath;
@property(retain, nonatomic) SimpleImgInfo *m_imgInfo; // @synthesize m_imgInfo;
- (unsigned long long)accessibilityTraits;
- (_Bool)accessibilityPerformMagicTap;
- (id)accessibilityHint;
- (void)setTarget:(id)arg1 forSelectAction:(SEL)arg2;
- (void)toggleSelection;
- (void)startPopUpAnimation:(id)arg1 originScale:(double)arg2;
- (void)updateSelectViewAnimated:(_Bool)arg1;
- (id)getIconView;
- (id)getWebImgView;
- (id)currentImage;
- (void)startLoadImageWithGCD;
- (void)updateImagePath:(id)arg1;
- (void)startLoadImageSuqareImgDir;
- (void)startLoadSquareImageIfExist;
- (void)setTimeLabel:(unsigned long long)arg1;
- (id)accessibilityLabel;
- (struct CGRect)calcSelectIconFrame;
- (id)initWithImgInfo:(id)arg1 AndChatName:(id)arg2 msgWrap:(id)arg3 selectable:(_Bool)arg4 thumbSize:(struct CGSize)arg5;
- (id)initWithImgInfo:(id)arg1 AndChatName:(id)arg2 msgWrap:(id)arg3 selectable:(_Bool)arg4;
- (void)dealloc;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)newAsyncDisplayTask;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

