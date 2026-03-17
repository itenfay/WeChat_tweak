//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMDoodleToolbar, MMDoodleToolbarItem;

@protocol MMDoodleToolbarDelegate <NSObject>

@optional
- (void)doodleToolbar:(MMDoodleToolbar *)arg1 penItemDidClick:(MMDoodleToolbarItem *)arg2;
@end

