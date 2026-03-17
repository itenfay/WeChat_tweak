//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface PAGLayer : NSObject
{
    id _impl;
}

- (void)dealloc;
- (void)setExcludedFromTimeline:(_Bool)arg1;
- (_Bool)excludedFromTimeline;
- (struct CGRect)getBounds;
- (id)trackMatteLayer;
- (void)setProgress:(double)arg1;
- (double)getProgress;
- (void)setCurrentTime:(long long)arg1;
- (long long)currentTime;
- (void)setStartTime:(long long)arg1;
- (long long)startTime;
- (float)frameRate;
- (long long)duration;
- (long long)globalToLocalTime:(long long)arg1;
- (long long)localTimeToGlobal:(long long)arg1;
- (id)markers;
- (id)parent;
- (long long)editableIndex;
- (void)setVisible:(_Bool)arg1;
- (_Bool)visible;
- (struct CGAffineTransform)getTotalMatrix;
- (void)resetMatrix;
- (void)setMatrix:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)matrix;
- (id)impl;
- (id)layerName;
- (long long)layerType;
- (id)initWithImpl:(id)arg1;

@end

