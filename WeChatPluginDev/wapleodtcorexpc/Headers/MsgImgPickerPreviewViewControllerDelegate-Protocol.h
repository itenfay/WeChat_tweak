//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class SimpleMsgInfo, UIImage;

@protocol MsgImgPickerPreviewViewControllerDelegate <NSObject>
- (void)updateEditeMsgImg:(SimpleMsgInfo *)arg1 editeReusltImage:(UIImage *)arg2;
- (struct CGRect)msgImgViewFrameGlobal:(SimpleMsgInfo *)arg1;
- (void)msgImgPickerPreviewViewControllerDidConfirmSelection;
- (void)msgImgPickerPreviewViewControllerDidChangeSelectionForImageAtIndex:(long long)arg1;
@end

