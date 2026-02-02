//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIScrollView, UIView, WCImageTranslateLogic;

@interface MMImageActionTranslateItem
{
    WCImageTranslateLogic *_imgTranslateLogic;
    UIScrollView *_animationScrollView;
    UIView *_disableInteractWhenTranslateAnimatingView;
    id _translateItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id translateItem; // @synthesize translateItem=_translateItem;
@property(nonatomic) __weak UIView *disableInteractWhenTranslateAnimatingView; // @synthesize disableInteractWhenTranslateAnimatingView=_disableInteractWhenTranslateAnimatingView;
@property(nonatomic) __weak UIScrollView *animationScrollView; // @synthesize animationScrollView=_animationScrollView;
@property(retain, nonatomic) WCImageTranslateLogic *imgTranslateLogic; // @synthesize imgTranslateLogic=_imgTranslateLogic;
- (id)getOriginImage;
- (void)onReTranslateImage;
- (void)cancelTranslating;
- (void)showTranslateImage;
- (void)handleWithImage;
- (void)onImageActionSheetDidAppear;
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

