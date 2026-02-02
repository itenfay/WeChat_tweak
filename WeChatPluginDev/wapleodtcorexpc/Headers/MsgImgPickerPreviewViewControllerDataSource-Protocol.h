//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableArray, SimpleMsgInfo, UIImage;

@protocol MsgImgPickerPreviewViewControllerDataSource <NSObject>
- (UIImage *)getEditeImageForMsgInfo:(SimpleMsgInfo *)arg1;
- (long long)previewIndexForMsgInfo:(SimpleMsgInfo *)arg1;
- (NSMutableArray *)selectedMsgInfosForPreview;
- (SimpleMsgInfo *)msgInfoAtIndex:(long long)arg1;
- (_Bool)hasSelectedImageAtIndex:(long long)arg1;
- (UIImage *)imageAtIndex:(long long)arg1;
- (long long)selectedImageCount;
- (long long)totalImageCount;
@end

