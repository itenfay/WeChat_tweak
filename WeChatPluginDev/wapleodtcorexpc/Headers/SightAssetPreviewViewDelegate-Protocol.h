//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError, SightAssetPreviewView;

@protocol SightAssetPreviewViewDelegate <NSObject>

@optional
- (void)listenPlayProgressWithCMTime:(CDStruct_1b6d18a9)arg1;
- (void)sightAssetPreviewView:(SightAssetPreviewView *)arg1 didFailWithError:(NSError *)arg2;
- (void)sightAssetPreviewViewPlaybackDidReachEnd:(SightAssetPreviewView *)arg1;
- (void)sightAssetPreviewViewDidFinishPreparing:(SightAssetPreviewView *)arg1;
@end

