//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WAAuthorizePageDelegate-Protocol.h"

@class UIViewController;
@protocol IWAAuthorizePage;

@protocol WAAuthorizePageSheetDelegate <WAAuthorizePageDelegate>
- (void)pageSheet:(id <IWAAuthorizePage>)arg1 needToPushViewController:(UIViewController *)arg2;
@end

