//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OMJCamGestureRecognizerSettings, OMJCamMetaTraits;

@interface OMJCamUseTemplateFinishInfo : NSObject
{
    OMJCamGestureRecognizerSettings *_gestureRecognizerSettings;
    OMJCamMetaTraits *_camMetaTraits;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OMJCamMetaTraits *camMetaTraits; // @synthesize camMetaTraits=_camMetaTraits;
@property(retain, nonatomic) OMJCamGestureRecognizerSettings *gestureRecognizerSettings; // @synthesize gestureRecognizerSettings=_gestureRecognizerSettings;

@end

