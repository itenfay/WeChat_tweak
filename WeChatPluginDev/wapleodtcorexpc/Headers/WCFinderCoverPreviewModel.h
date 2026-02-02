//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderVideoSliderViewResult;

@interface WCFinderCoverPreviewModel : NSObject
{
    int _modeStyle;
    WCFinderVideoSliderViewResult *_sliderResult;
}

@property(nonatomic) int modeStyle; // @synthesize modeStyle=_modeStyle;
@property(retain, nonatomic) WCFinderVideoSliderViewResult *sliderResult; // @synthesize sliderResult=_sliderResult;

@end

