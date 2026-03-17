//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CEmoticonWrap, NSString, UICollectionViewCell;

@protocol EmoticonBoardCrossCollectionStoreGridCellDelegate <NSObject>
- (void)shouldHideEmoticonPreview;
- (void)shouldShowEmoticonPreviewForWrap:(CEmoticonWrap *)arg1 atIndex:(long long)arg2 withGridOffset:(struct CGPoint)arg3 description:(NSString *)arg4 sender:(UICollectionViewCell *)arg5;
- (void)onTapEmoticonWrap:(CEmoticonWrap *)arg1 atIndex:(long long)arg2 withPid:(NSString *)arg3;
@end

