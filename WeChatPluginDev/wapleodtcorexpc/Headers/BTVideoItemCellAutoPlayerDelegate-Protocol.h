//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol BTVideoItemCellAutoPlayerDelegate <NSObject>

@optional
- (void)onVideoBufferingPercent:(double)arg1 viewId:(unsigned int)arg2;
- (void)onVideoEndBuffering:(unsigned int)arg1;
- (void)onVideoBeginBuffering:(unsigned int)arg1;
- (void)onVideoPlayFail:(unsigned long long)arg1 LocalizedErrorDes:(NSString *)arg2 viewId:(unsigned int)arg3;
- (void)onVideoDidPlayToEndTime:(unsigned int)arg1;
- (void)onPlayerSeekCompelete:(unsigned int)arg1;
- (void)onPlayerProcessStateChanged:(unsigned long long)arg1 viewId:(unsigned int)arg2;
- (void)onPlayerStateChanged:(unsigned long long)arg1 viewId:(unsigned int)arg2;
- (void)onVideoPause:(unsigned int)arg1;
- (void)onVideoPlay:(unsigned int)arg1;
- (void)onVideoCurrTimeChanged:(double)arg1 totalDuration:(double)arg2 viewId:(unsigned int)arg3;
- (void)onVideoBeginPlay:(unsigned int)arg1;
- (void)onVideoPrepareToPlay:(unsigned int)arg1;
@end

