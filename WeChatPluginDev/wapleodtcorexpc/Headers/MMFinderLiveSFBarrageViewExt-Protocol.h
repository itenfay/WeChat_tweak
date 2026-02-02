//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveTaskId;

@protocol MMFinderLiveSFBarrageViewExt <NSObject>

@optional
- (void)onBarrageFaceDetectRenderModeChanged:(long long)arg1 taskId:(MMLiveTaskId *)arg2;
- (void)onBarrageFaceDetectMaskOptionsSub:(long long)arg1 taskId:(MMLiveTaskId *)arg2;
- (void)onBarrageFaceDetectMaskOptionsAdd:(long long)arg1 taskId:(MMLiveTaskId *)arg2;
@end

