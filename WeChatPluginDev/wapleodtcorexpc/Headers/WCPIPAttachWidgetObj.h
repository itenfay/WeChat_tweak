//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CIImage, UIView;

@interface WCPIPAttachWidgetObj
{
    UIView *_rootView;
    CIImage *_widgetCIImage;
    double _widthHeightPercent;
    CDUnknownBlockType _updateCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType updateCallback; // @synthesize updateCallback=_updateCallback;
@property(nonatomic) double widthHeightPercent; // @synthesize widthHeightPercent=_widthHeightPercent;
@property(retain, nonatomic) CIImage *widgetCIImage; // @synthesize widgetCIImage=_widgetCIImage;
@property(nonatomic) __weak UIView *rootView; // @synthesize rootView=_rootView;
- (struct CGRect)transferNormalizedFrameFromCGModeToCIMode:(struct CGRect)arg1;
- (_Bool)checkEnableRefresh;
- (void)refresh;
- (id)initWithRootView:(id)arg1;

@end

