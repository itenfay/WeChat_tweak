//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJVideoTemplate, WCMomentsCompositorTemplateTableViewController;

@protocol WCMomentsCompositorTemplateTableDelegate <NSObject>
- (void)templateTable:(WCMomentsCompositorTemplateTableViewController *)arg1 didFocusTemplate:(MJVideoTemplate *)arg2 atSection:(long long)arg3 row:(long long)arg4;
@end

