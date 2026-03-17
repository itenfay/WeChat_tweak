//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJShootCropToolBar;

@protocol MJShootCropToolBarDelegate <NSObject>
- (void)cropToolBarDidTapOnReset:(MJShootCropToolBar *)arg1;
- (void)cropToolBarDidTapOnFlip:(MJShootCropToolBar *)arg1;
- (void)cropToolBarDidTapOnRotate:(MJShootCropToolBar *)arg1;
@end

