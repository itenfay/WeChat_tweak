//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FlutterMethodChannel, MMLiteAppViewController, NSString;

@interface MMFinderLiveLiteAppPreviewView
{
    MMLiteAppViewController *_liteApp;
    FlutterMethodChannel *_channel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FlutterMethodChannel *channel; // @synthesize channel=_channel;
@property(nonatomic) __weak MMLiteAppViewController *liteApp; // @synthesize liteApp=_liteApp;
- (void)handleJSMethod:(id)arg1 params:(id)arg2 WithResult:(CDUnknownBlockType)arg3;
- (void)sendEvent:(id)arg1 data:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

