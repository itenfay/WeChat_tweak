//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicPostAssetPickerHandler, MMUIButton, NSMutableArray, UIView;

@interface MVPreviewAssetPickerViewController
{
    CDUnknownBlockType _onFinishPickAssetsHandler;
    CDUnknownBlockType _onCancelPickAssetsHandler;
    UIView *_bottomBar;
    MMUIButton *_finishButton;
    MMMusicPostAssetPickerHandler *_pickerHandler;
    NSMutableArray *_selectedArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *selectedArray; // @synthesize selectedArray=_selectedArray;
@property(retain, nonatomic) MMMusicPostAssetPickerHandler *pickerHandler; // @synthesize pickerHandler=_pickerHandler;
@property(retain, nonatomic) MMUIButton *finishButton; // @synthesize finishButton=_finishButton;
@property(retain, nonatomic) UIView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(copy, nonatomic) CDUnknownBlockType onCancelPickAssetsHandler; // @synthesize onCancelPickAssetsHandler=_onCancelPickAssetsHandler;
@property(copy, nonatomic) CDUnknownBlockType onFinishPickAssetsHandler; // @synthesize onFinishPickAssetsHandler=_onFinishPickAssetsHandler;
- (void)handleSelectedAssetUpdated:(id)arg1;
- (void)doClickCloseWithNeedAnimated:(_Bool)arg1 action:(long long)arg2;
- (void)setupSubviews;
- (void)onFinishButtonClicked;
- (void)layoutFinishButton;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

