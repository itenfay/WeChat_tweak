//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WAAuthorizePageDelegate-Protocol.h"

@protocol IWAAuthorizePage;

@protocol WAAuthorizeViewControllerDelegate <WAAuthorizePageDelegate>

@optional
- (void)authorizeCancel:(id <IWAAuthorizePage>)arg1;
@end

