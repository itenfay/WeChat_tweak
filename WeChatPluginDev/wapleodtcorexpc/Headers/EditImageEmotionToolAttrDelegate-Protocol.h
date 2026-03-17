//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CEmoticonWrap, UIImage, UIViewController;

@protocol EditImageEmotionToolAttrDelegate <NSObject>
- (void)onEmotionToolBarDoneBtnClicked;

@optional
- (UIViewController *)currentViewController;
- (void)didSelectEmoticonWithWrap:(CEmoticonWrap *)arg1 decodedImage:(UIImage *)arg2;
@end

