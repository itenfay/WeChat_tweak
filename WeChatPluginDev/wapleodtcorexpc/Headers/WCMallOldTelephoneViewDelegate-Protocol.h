//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCMallOldTelephoneViewDelegate <NSObject>
- (void)onTapBackgrounView;
- (NSString *)GetOldTelephoneOperatorName:(unsigned int)arg1;
- (NSString *)GetOldTelephoneOwnerName:(unsigned int)arg1;
- (NSString *)GetOldTelephoneNumber:(unsigned int)arg1;
- (unsigned int)GetNumberOfOldTelephoneListCount;
- (void)OnClickWCMallOldTelephoneClearButton;
- (void)OnClickWCMallOldTelephoneCell:(unsigned int)arg1;
@end

