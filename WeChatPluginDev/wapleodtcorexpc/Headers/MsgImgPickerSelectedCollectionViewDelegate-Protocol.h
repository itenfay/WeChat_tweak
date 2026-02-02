//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class SimpleMsgInfo, UIImage;

@protocol MsgImgPickerSelectedCollectionViewDelegate <NSObject>
- (UIImage *)getMsgImgPickerSelectedCollectionViewEditeMsgImg:(SimpleMsgInfo *)arg1;
- (void)onMsgImgPickerSelectedCollectionViewDidClickedAtIndex:(long long)arg1;
@end

