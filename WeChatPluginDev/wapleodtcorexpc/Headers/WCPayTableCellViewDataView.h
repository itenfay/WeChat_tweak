//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class KindaRichLabelViewV2, MMBadgeView, RedDot, TableCellViewData, UIImage, WCPayRoundTextViewDataView, WCPayWebImageView;
@protocol WCPayTableCellViewNumberExt, WCPayVoidCallbackDelegate;

@interface WCPayTableCellViewDataView : UIView
{
    _Bool _hasLine;
    _Bool _sizeAdaptFont;
    id <WCPayTableCellViewNumberExt> _numberDelegate;
    TableCellViewData *_viewData;
    RedDot *_m_reddot;
    UIView *_m_background;
    WCPayWebImageView *_m_icon;
    KindaRichLabelViewV2 *_m_title;
    WCPayRoundTextViewDataView *_m_tagView;
    KindaRichLabelViewV2 *_m_subTitle;
    KindaRichLabelViewV2 *_m_desc;
    KindaRichLabelViewV2 *_m_subDesc;
    WCPayWebImageView *_m_rightIcon;
    MMBadgeView *_m_reddotImageView;
    UIView *_m_lineView;
    id <WCPayVoidCallbackDelegate> _m_delegate;
    UIImage *_m_rightIconImage;
    UIView *_m_numberView;
}

+ (double)contentHeightWithViewData:(id)arg1 width:(double)arg2 titleLinesOfNonSubTitle:(int)arg3 sizeAdaptFont:(_Bool)arg4;
+ (double)contentHeightWithViewData:(id)arg1 width:(double)arg2 titleLinesOfNonSubTitle:(int)arg3;
+ (double)dyCellHeight:(double)arg1 sizeAdaptFont:(_Bool)arg2;
- (void).cxx_destruct;
@property(retain) UIView *m_numberView; // @synthesize m_numberView=_m_numberView;
@property(retain) UIImage *m_rightIconImage; // @synthesize m_rightIconImage=_m_rightIconImage;
@property __weak id <WCPayVoidCallbackDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain) UIView *m_lineView; // @synthesize m_lineView=_m_lineView;
@property(retain) MMBadgeView *m_reddotImageView; // @synthesize m_reddotImageView=_m_reddotImageView;
@property(retain) WCPayWebImageView *m_rightIcon; // @synthesize m_rightIcon=_m_rightIcon;
@property(retain) KindaRichLabelViewV2 *m_subDesc; // @synthesize m_subDesc=_m_subDesc;
@property(retain) KindaRichLabelViewV2 *m_desc; // @synthesize m_desc=_m_desc;
@property(retain) KindaRichLabelViewV2 *m_subTitle; // @synthesize m_subTitle=_m_subTitle;
@property(retain) WCPayRoundTextViewDataView *m_tagView; // @synthesize m_tagView=_m_tagView;
@property(retain, nonatomic) KindaRichLabelViewV2 *m_title; // @synthesize m_title=_m_title;
@property(retain) WCPayWebImageView *m_icon; // @synthesize m_icon=_m_icon;
@property(retain, nonatomic) UIView *m_background; // @synthesize m_background=_m_background;
@property(retain) RedDot *m_reddot; // @synthesize m_reddot=_m_reddot;
@property(retain) TableCellViewData *viewData; // @synthesize viewData=_viewData;
@property _Bool sizeAdaptFont; // @synthesize sizeAdaptFont=_sizeAdaptFont;
@property __weak id <WCPayTableCellViewNumberExt> numberDelegate; // @synthesize numberDelegate=_numberDelegate;
@property _Bool hasLine; // @synthesize hasLine=_hasLine;
- (_Bool)isReddotLayoutOnRight;
- (id)getAccessibilityLabelString;
- (void)setTitleLines:(int)arg1;
- (void)updateLineView;
- (void)updateRightIcon;
- (void)updateTitleVertical;
- (void)updateDescVertical;
- (void)updateSubDesc;
- (void)updateDesc;
- (void)updateRedDotImageView;
- (_Bool)hasTag;
- (void)updateTagView;
- (void)updateSubTitle;
- (void)updateTitle;
- (void)updateIcon;
- (void)updateBackground;
- (void)updateNumberView;
- (void)updateView;
- (void)layoutSubviews;
- (id)getDescView;
- (void)updateViewData:(id)arg1 RedDot:(id)arg2 delegate:(id)arg3 rightIcon:(id)arg4;
- (void)updateViewData:(id)arg1 RedDot:(id)arg2 delegate:(id)arg3;
- (double)dyCellHeight:(double)arg1;
- (double)dyLen:(double)arg1;

@end

