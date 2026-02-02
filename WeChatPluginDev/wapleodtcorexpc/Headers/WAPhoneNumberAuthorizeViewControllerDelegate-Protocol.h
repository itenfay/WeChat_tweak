//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WAAuthorizeViewControllerDelegate-Protocol.h"

@protocol IWAAuthorizePage;

@protocol WAPhoneNumberAuthorizeViewControllerDelegate <WAAuthorizeViewControllerDelegate>
- (void)phoneNumberAuthorizeAddNewButtonClick:(id <IWAAuthorizePage>)arg1;
- (void)phoneNumberAuthorizeManagerButtonClick:(id <IWAAuthorizePage>)arg1;
@end

