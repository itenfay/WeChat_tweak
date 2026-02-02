//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmoticonLensDynamicToolView, EmoticonLensInfo;

@protocol EmoticonLensDynamicToolViewDelegate <NSObject>
- (void)onLensDidExposure:(EmoticonLensDynamicToolView *)arg1;
- (void)onEmoticonLensShowAll;
- (void)onEmoticonLensSelected:(EmoticonLensInfo *)arg1;
@end

