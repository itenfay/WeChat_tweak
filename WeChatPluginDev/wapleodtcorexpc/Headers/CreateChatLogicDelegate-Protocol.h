//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact;

@protocol CreateChatLogicDelegate <NSObject>
- (_Bool)onSelectRecommendGroupContact:(CContact *)arg1;
- (void)onCreateChatContactReturn:(CContact *)arg1;
@end

