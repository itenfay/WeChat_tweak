//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "IWAAuthorizePage-Protocol.h"

@class NSString, WAPhoneNumberAuthorizeSheetInfo;

@protocol IWAPhoneNumberAuthorizePageSheet <IWAAuthorizePage>
@property(retain, nonatomic) WAPhoneNumberAuthorizeSheetInfo *info;
@property(nonatomic) long long selectedIndex;
- (void)togglePhone:(NSString *)arg1;
- (void)managePhoneNumber;
@end

