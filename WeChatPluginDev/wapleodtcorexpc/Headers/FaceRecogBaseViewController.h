//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FaceRecogBaseView;

@interface FaceRecogBaseViewController
{
    _Bool _bUseBlackStatusbar;
    FaceRecogBaseView *_baseView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bUseBlackStatusbar; // @synthesize bUseBlackStatusbar=_bUseBlackStatusbar;
@property(retain, nonatomic) FaceRecogBaseView *baseView; // @synthesize baseView=_baseView;
- (long long)overrideUserInterfaceStyle;
- (void)onNavBack;
- (void)viewDidTransitionToNewSize;
- (void)procedureDidFailed:(id)arg1 errorTips:(id)arg2 canRetry:(_Bool)arg3;
- (void)procedureDidFinish;
- (void)attachPreviewLayer:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidBeInteractivePoped;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)useTransparentNavibar;
- (_Bool)useBlackStatusbar;
- (id)init;

@end

