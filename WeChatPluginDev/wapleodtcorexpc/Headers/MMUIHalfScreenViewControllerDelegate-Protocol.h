//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIHalfScreenViewController;

@protocol MMUIHalfScreenViewControllerDelegate <NSObject>

@optional
- (void)onHalfScreenPageDidClose:(MMUIHalfScreenViewController *)arg1 action:(long long)arg2;
- (void)onHalfScreenPageWillClose:(MMUIHalfScreenViewController *)arg1 action:(long long)arg2;
- (void)onHalfScreenPage:(MMUIHalfScreenViewController *)arg1 contentTopChanged:(double)arg2;
@end

