//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveScreenshotPosterImages, MMFinderLiveTaskId, NSMutableArray, NSMutableDictionary, UIImage;

@interface MMFinderLiveScreenshotPosterLogic : NSObject
{
    _Bool _keyboardVisible;
    MMFinderLiveTaskId *_taskId;
    unsigned long long _screenshotRequestUnixEpochTime;
    unsigned long long _screenshotStatus;
    UIImage *_screenshot;
    NSMutableArray *_associatedImages;
    NSMutableArray *_primaryImageMaskingDescriptors;
    NSMutableDictionary *_posterImageConfigurations;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *posterImageConfigurations; // @synthesize posterImageConfigurations=_posterImageConfigurations;
@property(retain, nonatomic) NSMutableArray *primaryImageMaskingDescriptors; // @synthesize primaryImageMaskingDescriptors=_primaryImageMaskingDescriptors;
@property(retain, nonatomic) NSMutableArray *associatedImages; // @synthesize associatedImages=_associatedImages;
@property(retain, nonatomic) UIImage *screenshot; // @synthesize screenshot=_screenshot;
@property(nonatomic) _Bool keyboardVisible; // @synthesize keyboardVisible=_keyboardVisible;
@property(nonatomic) unsigned long long screenshotStatus; // @synthesize screenshotStatus=_screenshotStatus;
@property(nonatomic) unsigned long long screenshotRequestUnixEpochTime; // @synthesize screenshotRequestUnixEpochTime=_screenshotRequestUnixEpochTime;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (id)liveTask;
- (void)invalidateScreenshot;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)didTakeSnapshot:(id)arg1;
- (void)setPosterImageConfigurationValue:(id)arg1 withKey:(id)arg2;
- (void)addPrimaryImageMaskingDescriptor:(id)arg1;
- (void)addAssociatedImage:(id)arg1;
- (void)commitPixelBuffer:(struct __CVBuffer *)arg1;
- (_Bool)isScreenshotPosterAvailable;
@property(readonly, nonatomic) _Bool screenshotRequested;
@property(readonly, nonatomic) MMFinderLiveScreenshotPosterImages *images;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

@end

