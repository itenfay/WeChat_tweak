//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMPageSheetAdapterDelegate-Protocol.h"

@class MessagePageSheetAdapter;

@protocol MessagePageSheetAdapterDelegate <MMPageSheetAdapterDelegate>

@optional
- (_Bool)onMsgPageSheetShowHideMoreOption;
- (void)onMsgPageSheetEnterFullscreen:(MessagePageSheetAdapter *)arg1;
- (void)onMsgPageSheetMarkUnread:(MessagePageSheetAdapter *)arg1;
@end

