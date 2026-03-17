//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UINavigationController, WAContact;
@protocol WALimitModeHelperDelegate;

@protocol IWALimitModeHelper <NSObject>
- (_Bool)tryBlockedByLimitModeWithContact:(WAContact *)arg1 inNavVC:(UINavigationController *)arg2;
- (void)setDelegate:(id <WALimitModeHelperDelegate>)arg1;
@end

