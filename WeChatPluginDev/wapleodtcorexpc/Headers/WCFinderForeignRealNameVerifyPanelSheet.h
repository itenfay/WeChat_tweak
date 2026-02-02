//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface WCFinderForeignRealNameVerifyPanelSheet
{
    CDUnknownBlockType _okBlock;
}

@property(copy, nonatomic) CDUnknownBlockType okBlock; // @synthesize okBlock=_okBlock;
- (void)onClickOk;
- (void)addCancelBtn:(id)arg1 flex:(void *)arg2;
- (void)addOkButton:(id)arg1 flex:(void *)arg2;
- (void)addDetail:(id)arg1 flex:(void *)arg2;
- (void)addTitle:(id)arg1 flex:(void *)arg2;
- (void)addIcon:(id)arg1 flex:(void *)arg2;
- (id)loadContentView;
- (void)viewDidLoad;

@end
