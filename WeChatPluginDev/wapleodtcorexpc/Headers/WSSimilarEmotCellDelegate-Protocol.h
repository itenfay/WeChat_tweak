//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView, WSEmoticonModel;

@protocol WSSimilarEmotCellDelegate <NSObject>
- (void)handleItemLongPress:(UIView *)arg1 model:(WSEmoticonModel *)arg2;
- (void)handleItemClick:(UIView *)arg1 model:(WSEmoticonModel *)arg2;
@end

