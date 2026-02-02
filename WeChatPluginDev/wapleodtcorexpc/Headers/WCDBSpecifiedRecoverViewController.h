//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSArray, NSObject, NSString, UIButton;
@protocol WCDBSpecifiedRecoverViewControllerDelegate;

@interface WCDBSpecifiedRecoverViewController
{
    MMUILabel *m_tipLabel;
    MMUILabel *m_commentLabel;
    UIButton *m_button;
    UIButton *m_clear;
    _Bool m_isRecovering;
    NSArray *m_recoverInfo;
    _Bool _isManuallyRestore;
    NSObject<WCDBSpecifiedRecoverViewControllerDelegate> *_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isManuallyRestore; // @synthesize isManuallyRestore=_isManuallyRestore;
@property(nonatomic) __weak NSObject<WCDBSpecifiedRecoverViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)askForConfirmClear;
- (void)clear;
- (void)recover;
- (_Bool)shouldInteractivePop;
- (void)didRecover:(_Bool)arg1;
- (void)onConfirm;
- (void)onDoubleTapThreeTimes;
- (void)onEnterBackground;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

