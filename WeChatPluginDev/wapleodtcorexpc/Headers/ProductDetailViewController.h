//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, NSString, ProductDetailLogicHelper, ProductTableView, ScanProductItem, SendAppMsgHandler, UIButton, UIImage, UIImageView, UIView;
@protocol ProductDetailViewControllerDelegate;

@interface ProductDetailViewController
{
    _Bool _canShareToFriend;
    _Bool _canShareToWC;
    _Bool _canAddToFav;
    _Bool _canEditTag;
    _Bool _canDelete;
    UIView *_infoView;
    double _infoViewHeight;
    MMWebImageView *_infoBgView;
    UIImageView *_blurView;
    UIImage *_snapShotImg;
    UIView *_maskView;
    MMWebImageView *_thumbImgView;
    UIButton *_containView;
    ScanProductItem *_productItem;
    NSString *_qrcodeUrl;
    ProductTableView *_productTableView;
    SendAppMsgHandler *_sendAppMsgHandler;
    ProductDetailLogicHelper *_logicHelper;
    unsigned int _fromScene;
    UIImageView *_disclosureBtn;
    int _functionType;
    double beginTime;
    id <ProductDetailViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ProductDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool canDelete; // @synthesize canDelete=_canDelete;
@property(nonatomic) _Bool canEditTag; // @synthesize canEditTag=_canEditTag;
@property(nonatomic) _Bool canAddToFav; // @synthesize canAddToFav=_canAddToFav;
@property(nonatomic) _Bool canShareToWC; // @synthesize canShareToWC=_canShareToWC;
@property(nonatomic) _Bool canShareToFriend; // @synthesize canShareToFriend=_canShareToFriend;
- (void)onLoadImageOK:(id)arg1;
- (void)onEditProductTag;
- (void)onDeleteProduct;
- (void)OnSendAppMsgOKToContacts:(id)arg1;
- (void)onProuductTableViewDidScroll:(id)arg1;
- (void)updateInfoViewSnapshot;
- (id)getThumbImageData;
- (id)getMessageWrap:(id)arg1;
- (id)getUpLoadTask:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onAction:(id)arg1;
- (void)onCertificationClick;
- (void)onHeaderClick;
- (void)onExposeClick;
- (void)onIntroTitleClick;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)OnReturn;
- (void)initView;
- (unsigned int)getJumpProfileScenceFromFunctionType;
- (unsigned int)getGetA8KeyScenceFromFunctionType;
- (void)setTableFooterView;
- (void)initTableView;
- (void)headerTouchUp:(id)arg1;
- (void)headerTouchDown:(id)arg1;
- (void)initInfoView;
- (_Bool)useTransparentNavibar;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)onAsyncDataRefreshed:(id)arg1;
- (void)OnGetRemoteProductItem:(id)arg1 QRCodeUrl:(id)arg2 Error:(int)arg3;
- (void)startAsyncGetActionInfo;
- (id)initWithExtContent:(id)arg1 Scence:(unsigned int)arg2;
- (id)initWithScanItem:(id)arg1 FunctionType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

