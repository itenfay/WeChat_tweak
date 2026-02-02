//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OMJCamGestureRecognizerSettings, OMJCamMetaTraits, OMJCamTemplateInfo, OMJCaptureOptions, OMJMusicInfo;

@interface MJCamChangeTemplateParams : NSObject
{
    OMJCaptureOptions *_templateOptions;
    OMJCamTemplateInfo *_templateInfo;
    OMJCamGestureRecognizerSettings *_gestureSettings;
    OMJCamMetaTraits *_camMetaTraits;
    OMJMusicInfo *_selectedMusicInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OMJMusicInfo *selectedMusicInfo; // @synthesize selectedMusicInfo=_selectedMusicInfo;
@property(retain, nonatomic) OMJCamMetaTraits *camMetaTraits; // @synthesize camMetaTraits=_camMetaTraits;
@property(retain, nonatomic) OMJCamGestureRecognizerSettings *gestureSettings; // @synthesize gestureSettings=_gestureSettings;
@property(retain, nonatomic) OMJCamTemplateInfo *templateInfo; // @synthesize templateInfo=_templateInfo;
@property(retain, nonatomic) OMJCaptureOptions *templateOptions; // @synthesize templateOptions=_templateOptions;

@end

