//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCCardBaseCardDetailContentViewDelegate-Protocol.h"

@class NSString;

@protocol WCCardGeneralCardContentDelegate <WCCardBaseCardDetailContentViewDelegate>
- (void)onClickWhoCanSeeBtn;
- (unsigned long long)getShareCardShareUserCount;
- (NSString *)getShareCardShareUserName;
@end

