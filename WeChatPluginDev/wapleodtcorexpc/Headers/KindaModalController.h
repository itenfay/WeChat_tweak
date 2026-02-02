//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class KindaLayout, KindaUIModalDelegateObject, MMIUIModal, NSString, UIImageView, WCPayBlurViewHelper;

@interface KindaModalController : NSObject
{
    KindaLayout *_layout;
    UIImageView *_snapShotView;
    MMIUIModal *_uiModal;
    KindaUIModalDelegateObject *_delegateObject;
    WCPayBlurViewHelper *_blurViewHelper;
}

+ (void)removePotentialModals;
- (void).cxx_destruct;
@property(retain, nonatomic) WCPayBlurViewHelper *blurViewHelper; // @synthesize blurViewHelper=_blurViewHelper;
@property(retain, nonatomic) KindaUIModalDelegateObject *delegateObject; // @synthesize delegateObject=_delegateObject;
@property(retain, nonatomic) MMIUIModal *uiModal; // @synthesize uiModal=_uiModal;
@property(retain, nonatomic) UIImageView *snapShotView; // @synthesize snapShotView=_snapShotView;
@property(retain, nonatomic) KindaLayout *layout; // @synthesize layout=_layout;
- (void)notifyKeyboardWillHide:(struct CGSize)arg1;
- (void)notifyKeyboardWillShow:(struct CGSize)arg1;
- (void)kindaViewSizeDidChange:(id)arg1;
- (_Bool)isManagerOfModal:(id)arg1;
- (void)dismissModal;
- (void)showModal;
- (void)initLayout;
- (void)dealloc;
- (id)initWithModal:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

