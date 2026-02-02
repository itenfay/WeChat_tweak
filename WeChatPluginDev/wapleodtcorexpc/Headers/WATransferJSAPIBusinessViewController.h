//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WATransferJSAPIBusinessViewController
{
    _Bool _isDidAppear;
    CDUnknownBlockType _callback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) _Bool isDidAppear; // @synthesize isDidAppear=_isDidAppear;
- (void)registerOnceAfterViewDidAppearCallback:(CDUnknownBlockType)arg1;
- (void)onReturnButtonClicked;
- (void)setupNavigationBar;
- (id)navigationBarBackgroundColor;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

