//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class FinderJumpInfo, MMLiveTaskId, MMUIButton, MMUIImageView, MMUILabel, NSData, NSString, UIImage, UITapGestureRecognizer, UIView;

@interface MMFinderLiveMinifyRoomControlBanner : UIControl
{
    _Bool _isTransToFullScreen;
    NSData *_minifyLastBuffer;
    UIView *_operationView;
    CDUnknownBlockType _getExtraTopMarginBlock;
    MMLiveTaskId *_taskId;
    MMUIImageView *_imageView;
    MMUIButton *_backgroundButton;
    MMUIButton *_backgroundBlurButton;
    MMUILabel *_titleLabel;
    UIImage *_buttonBackgroundImage;
    NSString *_buttonStartColor;
    NSString *_buttonEndColor;
    UITapGestureRecognizer *_tapGesture;
}

+ (struct CGSize)expendViewSizeByBannerInfo:(id)arg1;
+ (struct CGSize)viewSizeByBannerInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) _Bool isTransToFullScreen; // @synthesize isTransToFullScreen=_isTransToFullScreen;
@property(retain, nonatomic) NSString *buttonEndColor; // @synthesize buttonEndColor=_buttonEndColor;
@property(retain, nonatomic) NSString *buttonStartColor; // @synthesize buttonStartColor=_buttonStartColor;
@property(retain, nonatomic) UIImage *buttonBackgroundImage; // @synthesize buttonBackgroundImage=_buttonBackgroundImage;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *backgroundBlurButton; // @synthesize backgroundBlurButton=_backgroundBlurButton;
@property(retain, nonatomic) MMUIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) MMUIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType getExtraTopMarginBlock; // @synthesize getExtraTopMarginBlock=_getExtraTopMarginBlock;
@property(nonatomic) __weak UIView *operationView; // @synthesize operationView=_operationView;
@property(retain, nonatomic) NSData *minifyLastBuffer; // @synthesize minifyLastBuffer=_minifyLastBuffer;
- (void)requestTransfromLiveRoomState;
- (void)updateOnMinify;
- (void)updateOnExpend;
- (void)updateAfterMinify;
- (void)updateAfterExpend;
- (void)zoomInAnimate;
- (void)zoomOutAnimate;
- (struct CGSize)sizeWithCurrentBannerInfo;
- (void)acceptSizeWithCurrentBannerInfo;
@property(nonatomic) __weak FinderJumpInfo *bannerInfo;
- (void)sizeToFitTitle;
- (void)setBannerInfoWithUpdateViewModel:(id)arg1;
- (id)genGradientImageWithStartColor:(id)arg1 endColor:(id)arg2;
- (void)layoutSubviews;
- (void)initGesture;
- (id)initWithFrame:(struct CGRect)arg1 taskId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

