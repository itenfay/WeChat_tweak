//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLivePromoteOperationPanel, MMLivePromoteOperationPanelCell;

@protocol MMLivePromoteOperationPanelDelegate <NSObject>

@optional
- (void)promoteOPanelDidTapBackground:(MMLivePromoteOperationPanel *)arg1;
- (void)promoteOperationPanel:(MMLivePromoteOperationPanel *)arg1 cellDidClick:(MMLivePromoteOperationPanelCell *)arg2;
@end

