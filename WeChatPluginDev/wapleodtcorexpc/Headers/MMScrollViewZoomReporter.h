//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMScrollViewZoomReporter : NSObject
{
    _Bool _isDoubleTapZoom;
    long long _scene;
    long long _mediaType;
    NSMutableArray *_actionAndScales;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDoubleTapZoom; // @synthesize isDoubleTapZoom=_isDoubleTapZoom;
@property(retain, nonatomic) NSMutableArray *actionAndScales; // @synthesize actionAndScales=_actionAndScales;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (void)_clearReportData;
- (void)onScrollViewDisappearFromScreen;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)doubleTapZoom;
- (void)reportIfNeeded;
- (void)recordWithScale:(double)arg1;
- (id)initWithScene:(long long)arg1 mediaType:(long long)arg2;

@end

