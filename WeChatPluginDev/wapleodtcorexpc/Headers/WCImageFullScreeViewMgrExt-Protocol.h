//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCMediaItem;

@protocol WCImageFullScreeViewMgrExt <NSObject>

@optional
- (void)onMediaDidClickOriginalArticle:(WCMediaItem *)arg1;
- (void)onMediaDidScaleIn:(unsigned int)arg1;
- (void)onMediaDidScaleOut:(unsigned int)arg1;
- (void)onViewAnimationFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (void)onViewAnimationDidHide;
- (void)onViewAnimationWillHide;
@end

