//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCanvasComponentPreloadWebViewInfo
{
    NSString *_webviewUrl;
    double _webviewWidth;
    double _webviewHeight;
    double _screenHeightOff;
    struct CGSize _webviewDynamicSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize webviewDynamicSize; // @synthesize webviewDynamicSize=_webviewDynamicSize;
@property(nonatomic) double screenHeightOff; // @synthesize screenHeightOff=_screenHeightOff;
@property(nonatomic) double webviewHeight; // @synthesize webviewHeight=_webviewHeight;
@property(nonatomic) double webviewWidth; // @synthesize webviewWidth=_webviewWidth;
@property(retain, nonatomic) NSString *webviewUrl; // @synthesize webviewUrl=_webviewUrl;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

