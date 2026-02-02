//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol MMWebViewPresetUIChildViewDelegate;

@interface MMWebViewPresetUIChildViewConfig
{
    _Bool _isShowProgress;
    _Bool _isAccessAllJsApiInvocation;
    _Bool _isAllowWebviewLongPressGesture;
    _Bool _disableNavigationErrorView;
    _Bool _isWebviewHandleTopBarEvent;
    _Bool _disableFixWebviewY;
    _Bool _forbidSetTailBgView;
    id <MMWebViewPresetUIChildViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forbidSetTailBgView; // @synthesize forbidSetTailBgView=_forbidSetTailBgView;
@property(nonatomic) _Bool disableFixWebviewY; // @synthesize disableFixWebviewY=_disableFixWebviewY;
@property(nonatomic) _Bool isWebviewHandleTopBarEvent; // @synthesize isWebviewHandleTopBarEvent=_isWebviewHandleTopBarEvent;
@property(nonatomic) _Bool disableNavigationErrorView; // @synthesize disableNavigationErrorView=_disableNavigationErrorView;
@property(nonatomic) _Bool isAllowWebviewLongPressGesture; // @synthesize isAllowWebviewLongPressGesture=_isAllowWebviewLongPressGesture;
@property(nonatomic) __weak id <MMWebViewPresetUIChildViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isAccessAllJsApiInvocation; // @synthesize isAccessAllJsApiInvocation=_isAccessAllJsApiInvocation;
@property(nonatomic) _Bool isShowProgress; // @synthesize isShowProgress=_isShowProgress;

@end

