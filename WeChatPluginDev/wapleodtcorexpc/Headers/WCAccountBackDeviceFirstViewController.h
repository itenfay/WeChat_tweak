//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIImageView, WCRedesignButtonItem;
@protocol WCAccountBackDeviceFirstViewControllerDelegate;

@interface WCAccountBackDeviceFirstViewController
{
    id <WCAccountBackDeviceFirstViewControllerDelegate> m_delegate;
    UIImageView *_weChatLogoImageView;
    MMUILabel *_titleLabel;
    WCRedesignButtonItem *_useBothButtonItem;
    WCRedesignButtonItem *_iPadOnlyButtonItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCRedesignButtonItem *iPadOnlyButtonItem; // @synthesize iPadOnlyButtonItem=_iPadOnlyButtonItem;
@property(retain, nonatomic) WCRedesignButtonItem *useBothButtonItem; // @synthesize useBothButtonItem=_useBothButtonItem;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *weChatLogoImageView; // @synthesize weChatLogoImageView=_weChatLogoImageView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setDelegate:(id)arg1;
- (void)onUseIPadOnly;
- (void)onUseBothDevice;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (_Bool)useRedesignStyle;
- (_Bool)useSheetView;
- (void)viewDidLoad;
- (id)init;

@end

