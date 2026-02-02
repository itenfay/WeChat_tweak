//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIViewController;

@interface MMFinderLiveWebPageSheetParams : NSObject
{
    _Bool _showDislike;
    _Bool _supportSharing;
    _Bool _overrideCache;
    _Bool _supportLandsacpe;
    _Bool _forbidAutoUpateTitle;
    _Bool _showFromRightToLeftAtLandscape;
    _Bool _fixOrientation;
    _Bool _restrictVideoRect;
    NSString *_uri;
    double _screenRatio;
    UIViewController *_fromVc;
    UIColor *_navButtonTintColor;
}

+ (id)paramsWithUri:(id)arg1 showDislike:(_Bool)arg2 supportSharing:(_Bool)arg3 screenRatio:(double)arg4 overrideCache:(_Bool)arg5;
+ (id)paramsWithUri:(id)arg1 showDislike:(_Bool)arg2 supportSharing:(_Bool)arg3 screenRatio:(double)arg4;
+ (id)paramsWithUri:(id)arg1 showDislike:(_Bool)arg2 supportSharing:(_Bool)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool restrictVideoRect; // @synthesize restrictVideoRect=_restrictVideoRect;
@property(nonatomic) _Bool fixOrientation; // @synthesize fixOrientation=_fixOrientation;
@property(retain, nonatomic) UIColor *navButtonTintColor; // @synthesize navButtonTintColor=_navButtonTintColor;
@property(nonatomic) _Bool showFromRightToLeftAtLandscape; // @synthesize showFromRightToLeftAtLandscape=_showFromRightToLeftAtLandscape;
@property(nonatomic) _Bool forbidAutoUpateTitle; // @synthesize forbidAutoUpateTitle=_forbidAutoUpateTitle;
@property(nonatomic) _Bool supportLandsacpe; // @synthesize supportLandsacpe=_supportLandsacpe;
@property(retain, nonatomic) UIViewController *fromVc; // @synthesize fromVc=_fromVc;
@property(nonatomic) _Bool overrideCache; // @synthesize overrideCache=_overrideCache;
@property(nonatomic) double screenRatio; // @synthesize screenRatio=_screenRatio;
@property(nonatomic) _Bool supportSharing; // @synthesize supportSharing=_supportSharing;
@property(nonatomic) _Bool showDislike; // @synthesize showDislike=_showDislike;
@property(retain, nonatomic) NSString *uri; // @synthesize uri=_uri;
- (_Bool)isEqual:(id)arg1;

@end

