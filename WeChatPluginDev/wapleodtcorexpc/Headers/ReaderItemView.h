//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class BTRichTextTagView, CAGradientLayer, CALayer, MMWebImageView, NSMutableArray, NSString, RichTextView, UIImage, UIImageView, UIView;
@protocol ReaderItemViewDelegate;

@interface ReaderItemView : UIButton
{
    int type;
    unsigned int itemShowType;
    unsigned int m_uiReaderIndex;
    _Bool m_bHasBottomBtn;
    _Bool m_isSelected;
    BTRichTextTagView *m_titleView;
    NSString *m_nsTitle;
    NSString *m_nsCover;
    NSString *m_nsDigest;
    unsigned int m_uiDelFlag;
    unsigned int m_itemShowType;
    NSString *m_nsContentUrl;
    struct CGSize m_titleSize;
    struct CGSize m_digestSize;
    double m_labelMaxWidth;
    unsigned long long m_limitLineNumber;
    NSMutableArray *m_titleStyles;
    NSMutableArray *m_digestStyles;
    UIImageView *m_headImageBk;
    UIView *m_highlightMaskView;
    MMWebImageView *m_coverImage;
    id <ReaderItemViewDelegate> m_delegate;
    RichTextView *m_digestView;
    CAGradientLayer *m_gradientLayer;
    CALayer *m_coverMaskLayer;
    _Bool _canShowImageIcon;
    _Bool _isPayContent;
    _Bool _isPaid;
    _Bool _isBrandLiveContent;
    _Bool _isBrandLive;
    unsigned long long _m_imageCount;
    UIImage *_paySubcribeTagImage;
    NSString *_brandLiveStatusWording;
    struct CGSize _payTagSize;
    struct CGSize _brandLiveSize;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *brandLiveStatusWording; // @synthesize brandLiveStatusWording=_brandLiveStatusWording;
@property(nonatomic) struct CGSize brandLiveSize; // @synthesize brandLiveSize=_brandLiveSize;
@property(nonatomic) _Bool isBrandLive; // @synthesize isBrandLive=_isBrandLive;
@property(nonatomic) _Bool isBrandLiveContent; // @synthesize isBrandLiveContent=_isBrandLiveContent;
@property(retain, nonatomic) UIImage *paySubcribeTagImage; // @synthesize paySubcribeTagImage=_paySubcribeTagImage;
@property(nonatomic) struct CGSize payTagSize; // @synthesize payTagSize=_payTagSize;
@property(nonatomic) _Bool isPaid; // @synthesize isPaid=_isPaid;
@property(nonatomic) _Bool isPayContent; // @synthesize isPayContent=_isPayContent;
@property(nonatomic) _Bool canShowImageIcon; // @synthesize canShowImageIcon=_canShowImageIcon;
@property(nonatomic) unsigned long long m_imageCount; // @synthesize m_imageCount=_m_imageCount;
@property(retain, nonatomic) NSMutableArray *m_digestStyles; // @synthesize m_digestStyles;
@property(retain, nonatomic) NSMutableArray *m_titleStyles; // @synthesize m_titleStyles;
@property(retain, nonatomic) NSString *m_nsContentUrl; // @synthesize m_nsContentUrl;
@property(nonatomic) unsigned int m_itemShowType; // @synthesize m_itemShowType;
@property(nonatomic) unsigned long long m_limitLineNumber; // @synthesize m_limitLineNumber;
@property(nonatomic) double m_labelMaxWidth; // @synthesize m_labelMaxWidth;
@property(nonatomic) struct CGSize m_digestSize; // @synthesize m_digestSize;
@property(nonatomic) struct CGSize m_titleSize; // @synthesize m_titleSize;
@property(retain, nonatomic) UIImageView *m_headImageBk; // @synthesize m_headImageBk;
@property(nonatomic) unsigned int m_uiDelFlag; // @synthesize m_uiDelFlag;
@property(nonatomic) __weak id <ReaderItemViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *m_nsDigest; // @synthesize m_nsDigest;
@property(retain, nonatomic) NSString *m_nsCover; // @synthesize m_nsCover;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle;
@property(nonatomic) _Bool m_bHasBottomBtn; // @synthesize m_bHasBottomBtn;
@property(nonatomic) unsigned int m_uiReaderIndex; // @synthesize m_uiReaderIndex;
@property(nonatomic) int type; // @synthesize type;
- (id)accessibilityLabel;
- (void)handleLongPressEx:(id)arg1;
- (void)onTouchRepeat;
- (void)NotifyItemClicked;
- (void)onClicked;
- (void)onBeginTouch;
- (void)onLoadImageOK:(id)arg1;
- (double)appendNodeViewHeightIfIndex;
- (void)setTopViewLoading:(_Bool)arg1;
- (void)initTopViewCoverLayer;
- (id)getCoverImageView;
- (void)initHighlightMaskView;
- (void)initCoverImageView;
- (id)timeText:(unsigned long long)arg1;
- (id)richTextWithFont:(id)arg1 width:(double)arg2;
- (id)itemLabelWithFont:(double)arg1 size:(struct CGSize)arg2;
- (id)getWebImageViewWithFrame:(struct CGRect)arg1;
- (void)initTag;
- (void)initNormalTitleView;
- (void)initTopTitleView;
- (void)normalView;
- (void)topView;
- (void)forceSetHighlighted:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)startInitView;
- (void)onTableViewDidScrollDown;
- (void)drawRect:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

