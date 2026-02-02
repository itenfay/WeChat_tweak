//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FlutterMethodChannel, NSString, WCAdPanoramaContainerView;

@interface WCAdPlatformViewPanoramaImageView
{
    _Bool _showLoading;
    NSString *_imageUrl;
    NSString *_canvasKey;
    NSString *_componentId;
    FlutterMethodChannel *_channel;
    WCAdPanoramaContainerView *_panoramaContainerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdPanoramaContainerView *panoramaContainerView; // @synthesize panoramaContainerView=_panoramaContainerView;
@property(retain, nonatomic) FlutterMethodChannel *channel; // @synthesize channel=_channel;
@property(nonatomic) _Bool showLoading; // @synthesize showLoading=_showLoading;
@property(retain, nonatomic) NSString *componentId; // @synthesize componentId=_componentId;
@property(retain, nonatomic) NSString *canvasKey; // @synthesize canvasKey=_canvasKey;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void)handleJsEvent:(id)arg1 params:(id)arg2 needCallback:(_Bool)arg3 result:(CDUnknownBlockType)arg4;
- (id)view;
- (id)initWithFrame:(struct CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3 binaryMessenger:(id)arg4 methodChannel:(id)arg5;

@end

