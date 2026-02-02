//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AddEmoticonWrap, MMUIViewController;

@protocol EmoticonCustomAddLogicControllerDelegate <NSObject>

@optional
- (void)onAddEmoticonDetectIfDismissViewController:(MMUIViewController *)arg1;
- (void)onAddCustomEmoticonPendingUploadWithWrap:(AddEmoticonWrap *)arg1;
- (void)onAddEmoticonFinishedWithWrap:(AddEmoticonWrap *)arg1 isSucceeded:(_Bool)arg2;
- (void)onTakePhotoCancelled;
@end

