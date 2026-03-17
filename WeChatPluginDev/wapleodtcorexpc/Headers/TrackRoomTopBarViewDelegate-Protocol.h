//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TrackRoomTopBarViewDelegate <NSObject>

@optional
- (void)onCenterMapAt:(NSString *)arg1;
- (void)onMinimizeButtonClick;
- (void)onCloseButtonClick:(id)arg1;
@end

