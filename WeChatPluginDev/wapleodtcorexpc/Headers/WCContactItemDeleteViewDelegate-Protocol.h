//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, WCContactItemDeleteView;

@protocol WCContactItemDeleteViewDelegate <NSObject>

@optional
- (void)onClickDeleteButton:(WCContactItemDeleteView *)arg1 withContact:(CContact *)arg2;
- (void)onClickHeadImage:(WCContactItemDeleteView *)arg1 withContact:(CContact *)arg2;
@end

