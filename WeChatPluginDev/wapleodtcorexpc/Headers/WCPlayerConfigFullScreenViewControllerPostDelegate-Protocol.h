//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCMomentsTemplateShareInfo, WCPlayerConfigFullScreenViewController;

@protocol WCPlayerConfigFullScreenViewControllerPostDelegate <NSObject>
- (_Bool)isShareButtonVisibleInPlayerViewController:(WCPlayerConfigFullScreenViewController *)arg1;
- (void)playerViewController:(WCPlayerConfigFullScreenViewController *)arg1 requireToPostWithShareInfo:(WCMomentsTemplateShareInfo *)arg2;
@end

