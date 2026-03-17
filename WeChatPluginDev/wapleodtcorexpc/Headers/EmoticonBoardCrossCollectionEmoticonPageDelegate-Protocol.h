//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "EmoticonBoardCrossCollectionBasePageDelegate-Protocol.h"

@class CEmoticonWrap, EmoticonBoardCrossCollectionEmoticonHeaderModel, NSString, PersonalDesigner;

@protocol EmoticonBoardCrossCollectionEmoticonPageDelegate <EmoticonBoardCrossCollectionBasePageDelegate>
- (void)onTrySyncAnotherPartCameraEmoticon;
- (void)onTrySyncAnotherPartCustomEmoticon;
- (void)pushToDesignerProfile:(PersonalDesigner *)arg1 redotReporter:(EmoticonBoardCrossCollectionEmoticonHeaderModel *)arg2;
- (void)shouldHideEmoticonPreview;
- (void)shouldShowEmoticonPreviewForWrap:(CEmoticonWrap *)arg1 description:(NSString *)arg2 pageWrapPid:(NSString *)arg3 cellIndex:(unsigned long long)arg4 frame:(struct CGRect)arg5;
- (void)onEmoticonPageCellTapEmoticonWrap:(CEmoticonWrap *)arg1 atIndex:(long long)arg2 pid:(NSString *)arg3 maxCountPerLine:(unsigned long long)arg4;
@end

