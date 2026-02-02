//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMFinderLiveRewardGiftItem, MMFinderLiveTaskId, MMUIButton, MMUILabel, MMWebImageView, NSString, UIImageView, UIScrollView, UIView;
@protocol MMFinderLiveGiftWallIntroSheetDelegate;

@interface MMFinderLiveGiftWallIntroSheet
{
    int _showSource;
    MMFinderLiveTaskId *_taskId;
    id <MMFinderLiveGiftWallIntroSheetDelegate> _delegate;
    MMUILabel *_titleLabel;
    MMUILabel *_detailLabel;
    UIScrollView *_scrollContentView;
    UIImageView *_introImageView;
    MMUIButton *_cancelButton;
    MMUIButton *_confirmButton;
    UIView *_bottomBackgroundView;
    UIView *_gradientBackgroundView;
    CAGradientLayer *_gradientLayer;
    MMFinderLiveRewardGiftItem *_giftItem;
    MMWebImageView *_headImageView;
    UIView *_topOneUserView;
    CAGradientLayer *_topOneUserGradientLayer;
    MMWebImageView *_giftImageView;
}

+ (id)showWithTaskId:(id)arg1 gift:(id)arg2 delegate:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *giftImageView; // @synthesize giftImageView=_giftImageView;
@property(retain, nonatomic) CAGradientLayer *topOneUserGradientLayer; // @synthesize topOneUserGradientLayer=_topOneUserGradientLayer;
@property(retain, nonatomic) UIView *topOneUserView; // @synthesize topOneUserView=_topOneUserView;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem; // @synthesize giftItem=_giftItem;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *gradientBackgroundView; // @synthesize gradientBackgroundView=_gradientBackgroundView;
@property(retain, nonatomic) UIView *bottomBackgroundView; // @synthesize bottomBackgroundView=_bottomBackgroundView;
@property(retain, nonatomic) MMUIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIImageView *introImageView; // @synthesize introImageView=_introImageView;
@property(retain, nonatomic) UIScrollView *scrollContentView; // @synthesize scrollContentView=_scrollContentView;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <MMFinderLiveGiftWallIntroSheetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) int showSource; // @synthesize showSource=_showSource;
- (id)audienceLogReporter;
- (void)onClickGiftImageView;
- (void)cancelAction;
- (void)confirmAction;
- (id)currentContactHeadURL;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (_Bool)userFinderStyle;
- (id)liveTask;
- (double)contentHeight;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithTaskId:(id)arg1 gift:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

