//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MMSceneDelegateExt <NSObject>

@optional
- (void)onSubSceneOpenFailed;
- (void)onSubSceneClosed;
- (void)onSubSceneOrientationDidChangeFrom:(long long)arg1 to:(long long)arg2;
- (void)onSubSceneSizeChangedFrom:(struct CGSize)arg1 to:(struct CGSize)arg2;
- (void)onMainSceneOrientationDidChangeFrom:(long long)arg1 to:(long long)arg2;
- (void)onMainSceneSizeChangedFrom:(struct CGSize)arg1 to:(struct CGSize)arg2;
@end

