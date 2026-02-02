//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAAlertDialog;
@protocol IWAWebViewPluginDelegate;

@interface WAWebViewPlugin_NativeView_AlerDisplayingtItem
{
    WAAlertDialog *_alert;
    id <IWAWebViewPluginDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IWAWebViewPluginDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAAlertDialog *alert; // @synthesize alert=_alert;

@end

