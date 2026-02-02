//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent;

@interface WebViewJSEventHandler_addGoodsToFav
{
    JSEvent *_m_curEvent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JSEvent *m_curEvent; // @synthesize m_curEvent=_m_curEvent;
- (void)onConfirmFav;
- (void)onCancelFav;
- (void)showAlertView;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

