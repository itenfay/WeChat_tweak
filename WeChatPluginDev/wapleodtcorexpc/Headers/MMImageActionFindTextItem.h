//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, OCRTransHalfScreenViewController, UIScrollView, UIView, WCImageTranslateLogic;

@interface MMImageActionFindTextItem
{
    unsigned int _enterScene;
    unsigned int _svrScene;
    WCImageTranslateLogic *_imgTranslateLogic;
    NSString *_senderUserName;
    UIScrollView *_animationScrollView;
    UIView *_disableInteractWhenTranslateAnimatingView;
    OCRTransHalfScreenViewController *_ocrHalfScreenViewCtrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OCRTransHalfScreenViewController *ocrHalfScreenViewCtrl; // @synthesize ocrHalfScreenViewCtrl=_ocrHalfScreenViewCtrl;
@property(nonatomic) __weak UIView *disableInteractWhenTranslateAnimatingView; // @synthesize disableInteractWhenTranslateAnimatingView=_disableInteractWhenTranslateAnimatingView;
@property(nonatomic) __weak UIScrollView *animationScrollView; // @synthesize animationScrollView=_animationScrollView;
@property(retain, nonatomic) NSString *senderUserName; // @synthesize senderUserName=_senderUserName;
@property(nonatomic) unsigned int svrScene; // @synthesize svrScene=_svrScene;
@property(nonatomic) unsigned int enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) WCImageTranslateLogic *imgTranslateLogic; // @synthesize imgTranslateLogic=_imgTranslateLogic;
- (void)showOCRHalfScreenViewCtrl;
- (void)onImageDetectOCRFinish:(unsigned int)arg1 jsonStr:(id)arg2 reqKey:(id)arg3 ocrResultType:(long long)arg4;
- (void)onImageDetectUploadFinish:(unsigned int)arg1 context:(id)arg2 detectMediaInfo:(id)arg3;
- (void)onImageActionSheetDidChangeImage;
- (void)handleWithImage;
- (_Bool)isHidden;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

