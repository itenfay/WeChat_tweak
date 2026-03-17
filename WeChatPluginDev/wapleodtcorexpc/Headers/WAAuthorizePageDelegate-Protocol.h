//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol IWAAuthorizePage;

@protocol WAAuthorizePageDelegate <NSObject>

@optional
- (void)authorizeReject:(id <IWAAuthorizePage>)arg1;
- (void)authorizeAccept:(id <IWAAuthorizePage>)arg1;
@end

