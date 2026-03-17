//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCCardChooseInfo;

@protocol WCCardChooseItemViewDelegate <NSObject>
- (_Bool)bIsSupportMultiSelect;
- (void)onWCCardChooseInfo:(WCCardChooseInfo *)arg1;
@end

