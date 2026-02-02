//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class NSString, OrientationSafePageSheetContainer;

@interface EducationHalfScreenViewController : NSObject
{
    NSString *_title;
    NSString *_hint;
    _Bool _isFirstTime;
    _Bool _isLandscape;
    CDUnknownBlockType _confirmCallback;
    unsigned long long _supportedOrientationMask;
    OrientationSafePageSheetContainer *container;
}

- (long long)styleForPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)viewDidLoad;
- (id)pageSheetContainer;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)initWithTitle:(id)arg1 withHint:(id)arg2 withIsLandscape:(_Bool)arg3 withIsFirstTime:(_Bool)arg4 withConfirmCallback:(CDUnknownBlockType)arg5 withSupportedOrientationMask:(unsigned long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
