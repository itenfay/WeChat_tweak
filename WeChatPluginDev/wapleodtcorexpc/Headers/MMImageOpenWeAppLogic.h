//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMImageActionOpenWeAppListItem, MMUIViewController, NSMutableArray, NSString, QRCodeInMultiDisplayView, ScanQRCodeDataUsedInMultiCode, ScanQRCodeLogicController, UIImage;
@protocol MMImageOpenWeAppDelegate;

@interface MMImageOpenWeAppLogic : NSObject
{
    _Bool _disable;
    _Bool _haveMaterialButton;
    ScanQRCodeDataUsedInMultiCode *_detectMultiCodeData;
    ScanQRCodeLogicController *_scanQRCodeLogic;
    id <MMImageOpenWeAppDelegate> _delegate;
    QRCodeInMultiDisplayView *_qrCodeMultiView;
    MMImageActionOpenWeAppListItem *_openWeAppList;
    NSMutableArray *_openWeAppItemList;
    NSString *_materialFileExt;
    NSString *_imagePath;
    UIImage *_image;
    MMUIViewController *_curViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController *curViewController; // @synthesize curViewController=_curViewController;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(retain, nonatomic) NSString *materialFileExt; // @synthesize materialFileExt=_materialFileExt;
@property(nonatomic) _Bool haveMaterialButton; // @synthesize haveMaterialButton=_haveMaterialButton;
@property(retain, nonatomic) NSMutableArray *openWeAppItemList; // @synthesize openWeAppItemList=_openWeAppItemList;
@property(retain, nonatomic) MMImageActionOpenWeAppListItem *openWeAppList; // @synthesize openWeAppList=_openWeAppList;
@property(retain, nonatomic) QRCodeInMultiDisplayView *qrCodeMultiView; // @synthesize qrCodeMultiView=_qrCodeMultiView;
@property(nonatomic) __weak id <MMImageOpenWeAppDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ScanQRCodeLogicController *scanQRCodeLogic; // @synthesize scanQRCodeLogic=_scanQRCodeLogic;
@property(retain, nonatomic) ScanQRCodeDataUsedInMultiCode *detectMultiCodeData; // @synthesize detectMultiCodeData=_detectMultiCodeData;
@property(nonatomic) _Bool disable; // @synthesize disable=_disable;
- (void)onGetA8KeyResultType:(unsigned int)arg1;
- (void)onScanEnds;
- (_Bool)addWAOpenWxMaterialButton:(id)arg1;
- (void)tryAddWAOpenWxMaterialButtonWhenPopMenu:(_Bool)arg1;
- (void)dismissQRCodeMultiView;
- (void)onSelectMarkDotInfo:(id)arg1;
- (void)onDotViewClicked:(id)arg1;
- (void)onCancelBtnClicked:(id)arg1;
- (void)refreshWAWxMaterialAppInfo:(id)arg1;
- (void)onActionSheetQRCodeRowViewBanned;
- (void)onTappedRowInfo:(id)arg1;
- (void)tryScanImage:(id)arg1 imagePath:(id)arg2;
- (id)qrCodeRowView;
- (void)updateWithScanParams:(id)arg1;
- (void)dealloc;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

