//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIViewController;

@protocol RadarSearchViewDelegate <NSObject>
- (UIViewController *)getCurViewController;
- (void)onRadarSearchViewClose:(_Bool)arg1;
@end

