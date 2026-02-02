//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary;
@protocol IWAWebViewPluginDelegate;

@interface WAWebViewPlugin_NativeView_AlertWaitingItem
{
    NSDictionary *_param;
    id <IWAWebViewPluginDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IWAWebViewPluginDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *param; // @synthesize param=_param;

@end

