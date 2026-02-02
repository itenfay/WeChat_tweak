//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMVoidStringStringBinaryCallback, NSData, NSString, WCPayCardNumberConfirmViewController;
@protocol KindaScanWidgetDelegate;

@interface KindaScanWidget : NSObject
{
    MMVoidStringStringBinaryCallback *m_callback;
    _Bool _dismissOnScanFinish;
    WCPayCardNumberConfirmViewController *_scanConfirmViewController;
    NSString *_scanResult;
    NSData *_scanImageData;
    id <KindaScanWidgetDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <KindaScanWidgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSData *scanImageData; // @synthesize scanImageData=_scanImageData;
@property(retain, nonatomic) NSString *scanResult; // @synthesize scanResult=_scanResult;
@property(retain, nonatomic) WCPayCardNumberConfirmViewController *scanConfirmViewController; // @synthesize scanConfirmViewController=_scanConfirmViewController;
@property(nonatomic) _Bool dismissOnScanFinish; // @synthesize dismissOnScanFinish=_dismissOnScanFinish;
- (void)FillCardNumberNext:(id)arg1;
- (void)FillCardNumberConfirmWithImage:(id)arg1 cardNumber:(id)arg2 data:(id)arg3;
- (void)FillCardNumberCancel:(_Bool)arg1;
- (void)FillCardInfoCancel;
- (void)didFindCardNumber:(id)arg1 cardImage:(id)arg2 scanResult:(id)arg3;
- (void)setScanWidgetDelegate:(id)arg1;
- (void)dismissOnScanFinish:(_Bool)arg1;
- (void)scan:(id)arg1;
- (void)setHandlerImpl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

