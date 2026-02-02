//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAsset, MMAsset, NSURL;

@interface MMImagePickerVideoTask : NSObject
{
    MMAsset *_mmAsset;
    AVAsset *_videoAsset;
    NSURL *_videoUrl;
    unsigned long long _scene;
    CDUnknownBlockType _completeCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completeCallback; // @synthesize completeCallback=_completeCallback;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSURL *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) AVAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
@property(retain, nonatomic) MMAsset *mmAsset; // @synthesize mmAsset=_mmAsset;

@end

