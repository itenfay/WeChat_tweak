//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "ITPRichMediaSynchronizer-Protocol.h"

@class NSArray, TPRichMediaFeatureData;
@protocol ITPInnerRichMediaSynchronizerDelegate;

@protocol ITPInnerRichMediaSynchronizer <ITPRichMediaSynchronizer>
@property(nonatomic) __weak id <ITPInnerRichMediaSynchronizerDelegate> innerDelegate;
- (long long)setPlaybackRate:(float)arg1;
- (TPRichMediaFeatureData *)getFeatureDataWithCurrentPositionMs:(long long)arg1 richMediaIndexes:(NSArray *)arg2;
- (long long)seekTo:(long long)arg1;
@end

