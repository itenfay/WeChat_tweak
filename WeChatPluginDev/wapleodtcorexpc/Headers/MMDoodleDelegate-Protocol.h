//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMDoodleController, MMDoodleToolbarItem;

@protocol MMDoodleDelegate <NSObject>

@optional
- (void)doodleControllerDidStopDoodling:(MMDoodleController *)arg1;
- (void)doodleControllerWillStartDoodling:(MMDoodleController *)arg1;
- (void)doodleController:(MMDoodleController *)arg1 penItemDidClick:(MMDoodleToolbarItem *)arg2;
@end

