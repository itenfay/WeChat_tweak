//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmoticonPreviewModel, NSString, UIView;

@protocol EmoticonPreviewWindowViewControllerDelegate <NSObject>

@optional
- (UIView *)attachmentAnchorView;
- (void)onShouldShowEmoticonDetailPage:(EmoticonPreviewModel *)arg1;
- (void)onFinishPreviewAndChangeToPid:(NSString *)arg1;
@end

