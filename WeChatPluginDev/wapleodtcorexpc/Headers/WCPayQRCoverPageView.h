//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CoverInfo, UIButton, UIImageView, UILabel, WCPayCss;
@protocol WCPayQRCoverPageViewDelegate;

@interface WCPayQRCoverPageView : UIView
{
    _Bool _bottomCorner;
    _Bool _hasMchQrcode;
    int _saveNotifyType;
    CoverInfo *_coverInfo;
    UIView *_contentView;
    UIView *_topbarView;
    UIImageView *_topLeftIcon;
    UILabel *_topLeftTitle;
    UIImageView *_centerIcon;
    UILabel *_centerDescription;
    UIView *_footerView;
    UIButton *_firstButton;
    UIButton *_secondButton;
    WCPayCss *_css;
    id <WCPayQRCoverPageViewDelegate> _delegate;
    double _applyMashV2DesclabelHeight;
}

- (void).cxx_destruct;
@property double applyMashV2DesclabelHeight; // @synthesize applyMashV2DesclabelHeight=_applyMashV2DesclabelHeight;
@property __weak id <WCPayQRCoverPageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) WCPayCss *css; // @synthesize css=_css;
@property(retain) UIButton *secondButton; // @synthesize secondButton=_secondButton;
@property(retain) UIButton *firstButton; // @synthesize firstButton=_firstButton;
@property(retain) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain) UILabel *centerDescription; // @synthesize centerDescription=_centerDescription;
@property(retain) UIImageView *centerIcon; // @synthesize centerIcon=_centerIcon;
@property(retain) UILabel *topLeftTitle; // @synthesize topLeftTitle=_topLeftTitle;
@property(retain) UIImageView *topLeftIcon; // @synthesize topLeftIcon=_topLeftIcon;
@property(retain) UIView *topbarView; // @synthesize topbarView=_topbarView;
@property(retain) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain) CoverInfo *coverInfo; // @synthesize coverInfo=_coverInfo;
@property(nonatomic) _Bool hasMchQrcode; // @synthesize hasMchQrcode=_hasMchQrcode;
@property _Bool bottomCorner; // @synthesize bottomCorner=_bottomCorner;
@property int saveNotifyType; // @synthesize saveNotifyType=_saveNotifyType;
- (void)onClickSecondButton;
- (void)onClickFirstButton;
- (double)getDesvLabelHeight;
- (_Bool)shouldShowApplyMaskV2;
- (void)updateSecondButton;
- (void)updateFirstButton;
- (void)updateFooterView;
- (id)generatePointView;
- (void)updateCenterDescription;
- (void)updateCenterIcon;
- (void)updateTopLeftTitle;
- (void)updateTopLeftIcon;
- (void)updateTopBarView;
- (void)updateContentView;
- (void)layoutSubviews;
- (void)updateCoverInfo:(id)arg1 hasMchQrcode:(_Bool)arg2;
- (id)initWithCoverInfo:(id)arg1 delegate:(id)arg2;

@end

