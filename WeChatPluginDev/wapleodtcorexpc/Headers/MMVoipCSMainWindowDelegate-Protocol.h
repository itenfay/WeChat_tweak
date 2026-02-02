//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MMVoipCSMainWindowDelegate <NSObject>

@optional
- (struct CGRect)onMMVoipCSMainWindowRequestMinimizeFrame;
- (void)onMMVoipCSMainWindowExtendFromCollapseAnimationDidEnd;
- (void)onMMVoipCSMainWindowExtendFromCollapseAnimationWillStart;
- (void)onMMVoipCSMainWindowCollapseAnimationWillStart;
- (void)onMMVoipCSMainWindowCollapseAnimationDidEnd;
- (void)onMMVoipCSMainWindowQuitAnimationDidEnd;
- (void)onMMVoipCSMainWindowQuitAnimationWillStart;
- (void)onMMVoipCSMainWindowExtendAnimationDidEnd;
@end

