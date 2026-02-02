//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImage, WCFinderDynamicIconFetchTask;

@interface WCFinderDynamicIconGenerateDynamicIconTask
{
    WCFinderDynamicIconFetchTask *_darkIconTask;
    WCFinderDynamicIconFetchTask *_lightIconTask;
    UIImage *_lightImage;
    UIImage *_darkImage;
}

+ (id)taskWithDarkTask:(id)arg1 lightTask:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *darkImage; // @synthesize darkImage=_darkImage;
@property(retain, nonatomic) UIImage *lightImage; // @synthesize lightImage=_lightImage;
@property(retain, nonatomic) WCFinderDynamicIconFetchTask *lightIconTask; // @synthesize lightIconTask=_lightIconTask;
@property(retain, nonatomic) WCFinderDynamicIconFetchTask *darkIconTask; // @synthesize darkIconTask=_darkIconTask;
- (void)generageDynamicIcon;
- (void)_onDarkImageFinish:(id)arg1;
- (void)_onLightImageFinish:(id)arg1;

@end

