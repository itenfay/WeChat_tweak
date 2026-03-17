//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmoticonLensInfo, EmoticonLensMoreView;

@protocol EmoticonLensMoreViewDelegate <NSObject>
- (void)moreLensViewWillClose:(EmoticonLensMoreView *)arg1;
- (void)moreLensViewDidShow:(EmoticonLensMoreView *)arg1;
- (void)moreLensViewDidExposure:(EmoticonLensMoreView *)arg1;
- (void)moreLens:(EmoticonLensMoreView *)arg1 didSelectLens:(EmoticonLensInfo *)arg2 isRecentUsed:(_Bool)arg3;
@end

