//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MVImageLoader, MusicCallbackApi, NSString;

@interface MusicSerachFlutterViewController
{
    CDUnknownBlockType _sendMusicHandler;
    CDUnknownBlockType _viewDidPopedOrDismissedHandler;
    NSString *_toUseranme;
    MusicCallbackApi *_flutterMusicPlayerCallBack;
    MVImageLoader *_imageDownloader;
}

+ (id)createInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) MVImageLoader *imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) MusicCallbackApi *flutterMusicPlayerCallBack; // @synthesize flutterMusicPlayerCallBack=_flutterMusicPlayerCallBack;
@property(copy, nonatomic) NSString *toUseranme; // @synthesize toUseranme=_toUseranme;
@property(copy, nonatomic) CDUnknownBlockType viewDidPopedOrDismissedHandler; // @synthesize viewDidPopedOrDismissedHandler=_viewDidPopedOrDismissedHandler;
@property(copy, nonatomic) CDUnknownBlockType sendMusicHandler; // @synthesize sendMusicHandler=_sendMusicHandler;
- (long long)flutterValueFromState:(unsigned long long)arg1;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)viewDidPopOrDismiss:(_Bool)arg1;
- (void)handleSendMusicWithMusicInfo:(id)arg1 coverImageData:(id)arg2;
- (void)handleSendWithMusicInfo:(id)arg1;
- (void)viewDidLoad;
- (id)initWithToUsername:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

