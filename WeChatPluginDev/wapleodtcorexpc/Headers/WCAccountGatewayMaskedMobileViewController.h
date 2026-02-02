//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCAccountGatewayMaskedMobileViewControllerDelegate;

@interface WCAccountGatewayMaskedMobileViewController
{
    id <WCAccountGatewayMaskedMobileViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCAccountGatewayMaskedMobileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)continueWithNext;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)initView;
- (_Bool)useSheetView;

@end

