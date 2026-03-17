//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJEmoticonPickerItem, MJEmotionViewController;

@protocol MJEmotionViewControllerDelegate <NSObject>

@optional
- (void)emoticonPicker:(MJEmotionViewController *)arg1 didCancelReplace:(MJEmoticonPickerItem *)arg2;
- (void)didEndReplaceWithEmoticonPicker:(MJEmotionViewController *)arg1;
- (void)emoticonPicker:(MJEmotionViewController *)arg1 selectedEmoticon:(MJEmoticonPickerItem *)arg2;
- (void)emoticonPickerDidFinishLoading:(MJEmotionViewController *)arg1;
- (void)emoticonPickerWillStartLoading:(MJEmotionViewController *)arg1;
@end

