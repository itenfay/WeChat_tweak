//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveWcPlayerViewModel, NSString;

@protocol MMFinderLiveWcPlayerViewModelDelegate <NSObject>

@optional
- (void)onLiveWcPlayerVideoSizeChange:(MMFinderLiveWcPlayerViewModel *)arg1 videoSize:(struct CGSize)arg2;
- (void)onLiveWcPlayerVideoPlayFailed:(MMFinderLiveWcPlayerViewModel *)arg1 errorType:(unsigned long long)arg2 error:(int)arg3 localizedErrorDes:(NSString *)arg4;
- (void)onLiveWcPlayerHiddenBufferingView:(MMFinderLiveWcPlayerViewModel *)arg1;
- (void)onLiveWcPlayerShowBufferingView:(MMFinderLiveWcPlayerViewModel *)arg1;
- (void)onLiveWcPlayerPlayFinish:(MMFinderLiveWcPlayerViewModel *)arg1;
- (void)onLiveWcPlayerStatusChanged:(MMFinderLiveWcPlayerViewModel *)arg1 status:(unsigned long long)arg2;
- (void)onLiveWcPlayerFirstFrame:(MMFinderLiveWcPlayerViewModel *)arg1;
@end

