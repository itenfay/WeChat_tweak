//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterMethodChannel, NSString, PAGFile, PAGView;

@interface NativePagView : NSObject
{
    PAGFile *_pagFile;
    PAGView *_pagView;
    FlutterMethodChannel *_channel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FlutterMethodChannel *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) PAGView *pagView; // @synthesize pagView=_pagView;
@property(retain, nonatomic) PAGFile *pagFile; // @synthesize pagFile=_pagFile;
- (void)onAnimationUpdate:(id)arg1;
- (void)onAnimationRepeat:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationStart:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (id)resourcePath:(id)arg1;
- (id)view;
- (id)initWithFrame:(struct CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3 binaryMessenger:(id)arg4 methodChannel:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

