//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSString, UIImage;

@protocol EmoticonBoardViewDelegate <NSObject>

@optional
- (UIImage *)getSnapShotForMerge;
- (double)tipsViewHeightForBoardExpand;
- (double)toolViewHeightForBoardExpand;
- (void)onEmoticonBoardHeightChanged;
- (void)onEmoticonSearchIconClicked;
- (NSString *)getChatUsername;
- (_Bool)handleAddCameraEmoji;
- (void)OnEmoticonStateDidChanged:(_Bool)arg1;
- (MMUIViewController *)GetCurrentViewController;
- (void)onSendButtonClicked;
@end

