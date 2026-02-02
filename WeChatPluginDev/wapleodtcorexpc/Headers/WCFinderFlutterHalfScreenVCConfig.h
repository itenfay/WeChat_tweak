//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, UIColor;

@interface WCFinderFlutterHalfScreenVCConfig : NSObject
{
    NSString *_router;
    NSDictionary *_params;
    NSArray *_plugins;
    long long _closeBtnStyle;
    UIColor *_backgroundColor;
    double _halfScreenHeight;
    double _halfScreenHeightRatio;
    double _halfScreenMaxHeightRatio;
    CDUnknownBlockType _afterFlutterUISetup;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType afterFlutterUISetup; // @synthesize afterFlutterUISetup=_afterFlutterUISetup;
@property(nonatomic) double halfScreenMaxHeightRatio; // @synthesize halfScreenMaxHeightRatio=_halfScreenMaxHeightRatio;
@property(nonatomic) double halfScreenHeightRatio; // @synthesize halfScreenHeightRatio=_halfScreenHeightRatio;
@property(nonatomic) double halfScreenHeight; // @synthesize halfScreenHeight=_halfScreenHeight;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) long long closeBtnStyle; // @synthesize closeBtnStyle=_closeBtnStyle;
@property(copy, nonatomic) NSArray *plugins; // @synthesize plugins=_plugins;
@property(copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *router; // @synthesize router=_router;
- (id)init;

@end

