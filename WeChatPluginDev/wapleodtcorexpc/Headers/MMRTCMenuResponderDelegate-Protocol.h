//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, UIViewController;

@protocol MMRTCMenuResponderDelegate <NSObject>

@optional
- (void)onPushNewVieController:(UIViewController *)arg1;
- (MMUIViewController *)getCurrentViewController;
- (id)getForwardingMenuActionTarget:(SEL)arg1;
- (void)onRichTextViewExit;
- (void)hideToolViewAnimated:(_Bool)arg1;
@end

