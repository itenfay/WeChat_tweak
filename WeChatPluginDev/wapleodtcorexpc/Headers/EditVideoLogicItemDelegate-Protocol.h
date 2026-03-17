//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIViewController;

@protocol EditVideoLogicItemDelegate <NSObject>
- (UIViewController *)currentViewController;
- (void)onClickEditVideoDoneBarButton;
- (void)onClickEditVideoBackBarButton;

@optional
- (void (^)(void (^)(void)))onWillClickEditVideoDoneBarButton;
@end

