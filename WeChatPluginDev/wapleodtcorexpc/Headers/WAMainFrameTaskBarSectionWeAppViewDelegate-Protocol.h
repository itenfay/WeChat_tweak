//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIImage, WAAppItemData, WAStarCollectionViewLayoutAnimateConfig;

@protocol WAMainFrameTaskBarSectionWeAppViewDelegate <NSObject>
- (_Bool)isTaskBarSectionVisible;
- (void)onNewMoreWeAppIcon:(UIImage *)arg1;
- (WAStarCollectionViewLayoutAnimateConfig *)getMyWeAppSectionMoreIconPos;
- (void)notifyMyWeAppChanged:(_Bool)arg1 isFromMyWeApp:(_Bool)arg2 weappItem:(WAAppItemData *)arg3 position:(int)arg4;
- (_Bool)onDragViewTo:(struct CGPoint)arg1;
- (void)onDragStateChange:(_Bool)arg1;
- (void)onClickSearch;
- (void)onClickMore:(_Bool)arg1 shouldScrollToBottom:(_Bool)arg2;
- (void)onMyWeAppItemDeleted:(WAAppItemData *)arg1 position:(int)arg2;
- (void)onWeAppItemDeleted:(WAAppItemData *)arg1 position:(int)arg2;
- (void)onWeAppItemSelected:(WAAppItemData *)arg1 position:(int)arg2 isMyWeApp:(_Bool)arg3;
@end

