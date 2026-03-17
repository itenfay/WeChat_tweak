//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIWindow;

@interface WebviewJSEventHandler_previewVideo : NSObject
{
    MMUIWindow *_fullScreenWindow;
}

@property(retain, nonatomic) MMUIWindow *fullScreenWindow; // @synthesize fullScreenWindow=_fullScreenWindow;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)dealloc;

@end

