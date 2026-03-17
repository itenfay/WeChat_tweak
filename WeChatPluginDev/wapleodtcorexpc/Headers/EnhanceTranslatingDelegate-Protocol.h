//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIImage;

@protocol EnhanceTranslatingDelegate <NSObject>
- (void)onEnhanceTranslatingLogicDisplay:(UIImage *)arg1 sourceImg:(UIImage *)arg2 sessionId:(unsigned long long)arg3 leftTop:(struct CGPoint)arg4 rightTop:(struct CGPoint)arg5 rightBottom:(struct CGPoint)arg6 leftBottom:(struct CGPoint)arg7;
- (void)onEnhanceTranslatingLogicSwitchToCamera;
- (void)onEnhanceTranslatingLogicFail;
- (void)onEnhanceTranslatingLogicNotStable;
- (void)onEnhanceTranslatingLogicCancel;
- (void)onEnhanceTranslatingLogicBegin;
@end

