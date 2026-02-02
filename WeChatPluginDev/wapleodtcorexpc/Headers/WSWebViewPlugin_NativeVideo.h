//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WSWebViewPlugin_NativeVideo
{
    NSMutableDictionary *_localFinderDataItemDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *localFinderDataItemDic; // @synthesize localFinderDataItemDic=_localFinderDataItemDic;
- (void)onVideoPlayerEvent:(id)arg1 withData:(id)arg2 forViewId:(unsigned int)arg3;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (id)getVideoPlayerView:(unsigned int)arg1 withError:(id *)arg2;
- (id)genVideoPlayerViewWithViewId:(unsigned int)arg1;
- (id)genComposedFeedIdFromExportId:(id)arg1 andNonceId:(id)arg2;
- (void)exchangeFinderData:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)operateVideoPlayerView:(unsigned int)arg1 withParams:(id)arg2 andError:(id *)arg3;
- (_Bool)removeVideoPlayerView:(unsigned int)arg1 withError:(id *)arg2;
- (void)updateVideoPlayerView:(unsigned int)arg1 withParams:(id)arg2 andBlock:(CDUnknownBlockType)arg3;
- (void)updatevideoPlayerView:(id)arg1 withParams:(id)arg2 andBlock:(CDUnknownBlockType)arg3;
- (_Bool)insertVideoPlayerView:(id)arg1 withError:(id *)arg2;
- (id)pluginKey;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

