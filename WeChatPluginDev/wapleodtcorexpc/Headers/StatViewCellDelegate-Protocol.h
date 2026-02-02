//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class StatViewCell;

@protocol StatViewCellDelegate <NSObject>

@optional
- (void)onStatViewCellClicked:(StatViewCell *)arg1;
@end

