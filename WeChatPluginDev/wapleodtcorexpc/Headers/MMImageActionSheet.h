//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImageActionCircleToSearchItem, MMImageActionEditItem, MMImageActionFavoriateItem, MMImageActionFindTextItem, MMImageActionForwardItem, MMImageActionOpenDeviceItem, MMImageActionOpenWeAppListItem, MMImageActionQRCodeItem, MMImageActionSaveItem, MMImageActionSearchItem, MMImageActionSnsShareItem, MMImageActionTranslateItem, MMImageOpenWeAppLogic, MMUIViewController, NSMutableArray, NSString, UIImage, WCImageTranslateLogic;
@protocol MMImageActionSheetDelegate;

@interface MMImageActionSheet
{
    MMImageActionForwardItem *_forward;
    MMImageActionSnsShareItem *_snsShare;
    MMImageActionFavoriateItem *_fav;
    MMImageActionSearchItem *_search;
    MMImageActionOpenWeAppListItem *_openWeAppList;
    NSMutableArray *_openWeAppItemList;
    MMImageActionOpenDeviceItem *_openDevice;
    MMImageOpenWeAppLogic *_openWeAppLogic;
    MMImageActionSaveItem *_save;
    MMImageActionEditItem *_edit;
    MMImageActionTranslateItem *_translate;
    MMImageActionFindTextItem *_findText;
    MMImageActionQRCodeItem *_qrCode;
    MMImageActionCircleToSearchItem *_circleToSearch;
    NSString *_imagePath;
    UIImage *_image;
    WCImageTranslateLogic *_imgTranslateLogic;
    MMUIViewController *_curViewController;
    id <MMImageActionSheetDelegate> _imageDelegate;
    unsigned long long _actionSheetLastShowTimeStamp;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long actionSheetLastShowTimeStamp; // @synthesize actionSheetLastShowTimeStamp=_actionSheetLastShowTimeStamp;
@property(nonatomic) __weak id <MMImageActionSheetDelegate> imageDelegate; // @synthesize imageDelegate=_imageDelegate;
@property(nonatomic) __weak MMUIViewController *curViewController; // @synthesize curViewController=_curViewController;
@property(retain, nonatomic) WCImageTranslateLogic *imgTranslateLogic; // @synthesize imgTranslateLogic=_imgTranslateLogic;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(retain, nonatomic) MMImageActionCircleToSearchItem *circleToSearch; // @synthesize circleToSearch=_circleToSearch;
@property(retain, nonatomic) MMImageActionQRCodeItem *qrCode; // @synthesize qrCode=_qrCode;
@property(retain, nonatomic) MMImageActionFindTextItem *findText; // @synthesize findText=_findText;
@property(retain, nonatomic) MMImageActionTranslateItem *translate; // @synthesize translate=_translate;
@property(retain, nonatomic) MMImageActionEditItem *edit; // @synthesize edit=_edit;
@property(retain, nonatomic) MMImageActionSaveItem *save; // @synthesize save=_save;
@property(retain, nonatomic) MMImageOpenWeAppLogic *openWeAppLogic; // @synthesize openWeAppLogic=_openWeAppLogic;
@property(retain, nonatomic) MMImageActionOpenDeviceItem *openDevice; // @synthesize openDevice=_openDevice;
@property(retain, nonatomic) NSMutableArray *openWeAppItemList; // @synthesize openWeAppItemList=_openWeAppItemList;
@property(retain, nonatomic) MMImageActionOpenWeAppListItem *openWeAppList; // @synthesize openWeAppList=_openWeAppList;
@property(retain, nonatomic) MMImageActionSearchItem *search; // @synthesize search=_search;
@property(retain, nonatomic) MMImageActionFavoriateItem *fav; // @synthesize fav=_fav;
@property(retain, nonatomic) MMImageActionSnsShareItem *snsShare; // @synthesize snsShare=_snsShare;
@property(retain, nonatomic) MMImageActionForwardItem *forward; // @synthesize forward=_forward;
- (void)onPreDetectWordSuccess:(id)arg1;
- (void)getTranslateImgInfo:(id)arg1 fileId:(id *)arg2 aesKey:(id *)arg3;
- (void)onShowTranslateImage:(id)arg1;
- (id)getTranslateImgIdentifier:(id)arg1;
- (void)onGetA8KeyResultType:(unsigned int)arg1;
- (void)onOpenWeAppButtonsUpdated:(id)arg1 itemList:(id)arg2;
- (void)onQRCodeScansFinished;
- (void)onQRCodeRowViewBanned;
- (void)onQRCodeRowViewTapped;
- (void)onAppendQRCodeMultiView:(id)arg1;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (void)onStopLoading;
- (unsigned long long)actionSheetExposedDuration;
- (void)doTranslateImageDirectly;
- (void)updateImageWithData:(id)arg1;
- (void)updateImage:(id)arg1 imagePath:(id)arg2;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)showInView:(id)arg1;
- (void)detectWording;
- (void)imageActionSheetDidChangeImage;
- (void)imageActionSheetDidAppear;
- (void)setupImageSheetFooter;
- (void)setupImageSheetItems;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

