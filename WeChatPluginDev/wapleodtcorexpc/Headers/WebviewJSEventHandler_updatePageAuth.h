//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WebviewJSEventHandler_updatePageAuth
{
    _Bool _isUpdating;
}

@property(nonatomic) _Bool isUpdating; // @synthesize isUpdating=_isUpdating;
- (void)endWithResult:(id)arg1 event:(id)arg2;
- (void)endWithSuccessResult:(id)arg1 event:(id)arg2;
- (void)endWithError:(id)arg1 event:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

