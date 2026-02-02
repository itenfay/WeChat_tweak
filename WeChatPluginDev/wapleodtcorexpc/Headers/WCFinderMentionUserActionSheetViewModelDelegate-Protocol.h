//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderMentionUserActionSheetViewModel;

@protocol WCFinderMentionUserActionSheetViewModelDelegate <NSObject>

@optional
- (void)mentionSheetVMResultChanged:(WCFinderMentionUserActionSheetViewModel *)arg1;
@end

