//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, UIColor, WATitleView;

@interface WASimulatedNativeWeAppLoadingViewController
{
    MMUIButton *_returnButton;
    WATitleView *_titleView;
    long long _orientation;
    UIColor *_navigationBarTextColor;
    unsigned long long _leftBtnType;
    _Bool _sheetModeShouldHideLeftReturnButton;
    _Bool _isSinglePageMode;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSinglePageMode; // @synthesize isSinglePageMode=_isSinglePageMode;
@property(nonatomic) _Bool sheetModeShouldHideLeftReturnButton; // @synthesize sheetModeShouldHideLeftReturnButton=_sheetModeShouldHideLeftReturnButton;
- (void)viewDidLayoutSubviews;
- (void)showTitleLoading;
- (void)initView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1 leftBtnType:(unsigned long long)arg2;
- (id)initWithContact:(id)arg1 isSinglePageMode:(_Bool)arg2;
- (id)initWithContact:(id)arg1;

@end

