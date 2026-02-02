//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CustomModal, KindaRichLabelViewV2, NSMutableArray, NSString, RouteInfo, UIButton, UIScrollView, UIView, WCPayWebImageView;
@protocol WCPayCustomModalViewDelegate;

@interface WCPayCustomModalView
{
    _Bool _m_protocolSelected;
    _Bool _m_hasClickProtocol;
    double _backgroundWidth;
    double _backgroundY;
    NSString *_leftNaviName;
    CustomModal *_m_customModal;
    id <WCPayCustomModalViewDelegate> _m_delegate;
    UIView *_m_backgroundView;
    UIView *_m_navigationView;
    UIScrollView *_m_contentView;
    UIView *_m_itemSectionView;
    WCPayWebImageView *_m_leftImageView;
    UIButton *_m_leftButton;
    KindaRichLabelViewV2 *_m_titleView;
    NSMutableArray *_m_contentArray;
    UIButton *_m_confirmButton;
    RouteInfo *_m_confirmRoute;
    NSMutableArray *_m_richLabelArray;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *m_richLabelArray; // @synthesize m_richLabelArray=_m_richLabelArray;
@property(retain) RouteInfo *m_confirmRoute; // @synthesize m_confirmRoute=_m_confirmRoute;
@property(retain) UIButton *m_confirmButton; // @synthesize m_confirmButton=_m_confirmButton;
@property _Bool m_hasClickProtocol; // @synthesize m_hasClickProtocol=_m_hasClickProtocol;
@property _Bool m_protocolSelected; // @synthesize m_protocolSelected=_m_protocolSelected;
@property(retain) NSMutableArray *m_contentArray; // @synthesize m_contentArray=_m_contentArray;
@property(retain) KindaRichLabelViewV2 *m_titleView; // @synthesize m_titleView=_m_titleView;
@property(retain) UIButton *m_leftButton; // @synthesize m_leftButton=_m_leftButton;
@property(retain) WCPayWebImageView *m_leftImageView; // @synthesize m_leftImageView=_m_leftImageView;
@property(retain) UIView *m_itemSectionView; // @synthesize m_itemSectionView=_m_itemSectionView;
@property(retain) UIScrollView *m_contentView; // @synthesize m_contentView=_m_contentView;
@property(retain) UIView *m_navigationView; // @synthesize m_navigationView=_m_navigationView;
@property(retain) UIView *m_backgroundView; // @synthesize m_backgroundView=_m_backgroundView;
@property __weak id <WCPayCustomModalViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain) CustomModal *m_customModal; // @synthesize m_customModal=_m_customModal;
@property(retain) NSString *leftNaviName; // @synthesize leftNaviName=_leftNaviName;
@property double backgroundY; // @synthesize backgroundY=_backgroundY;
@property double backgroundWidth; // @synthesize backgroundWidth=_backgroundWidth;
- (void)onLeftButtonClick;
- (void)onWCPayVoidCallbackWithUserInfo:(id)arg1;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (void)clickConfirmButton;
- (void)clickCheckBox:(id)arg1;
- (double)updateProtocolButton:(double)arg1 protocolButtonData:(id)arg2;
- (double)updateItemSection:(double)arg1 Data:(id)arg2;
- (double)updateImageView:(double)arg1 imageData:(id)arg2;
- (double)updateTextView:(double)arg1 textData:(id)arg2;
- (double)updateContent;
- (void)updateTitleView;
- (void)updateLeftButton;
- (void)updateLeftImageView;
- (void)updateNavigationView;
- (void)updateBackgroundView;
- (void)updateView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithModal:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

