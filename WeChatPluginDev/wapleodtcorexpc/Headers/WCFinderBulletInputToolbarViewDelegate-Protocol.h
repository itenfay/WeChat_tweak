//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderBulletInputToolbarView;

@protocol WCFinderBulletInputToolbarViewDelegate <NSObject>
- (void)onBulletSwitchChangeOpenState:(_Bool)arg1;
- (void)onInputViewShowChange:(_Bool)arg1;
- (void)didCommitText:(NSString *)arg1;
- (double)getVisibleHeight;

@optional
- (_Bool)inputViewShouldDismisAfterCommit:(WCFinderBulletInputToolbarView *)arg1;
@end

