//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CALayer, EmoticonLensPackage, NSString;

@protocol PendantPreviewLogicDelegate <NSObject>
- (void)onEffectReloadFinish;
- (void)onPreviewReload:(CALayer *)arg1;
- (void)onLensPackageLoadFail:(NSString *)arg1;
- (void)onLensPackageLoaded:(EmoticonLensPackage *)arg1;
@end

