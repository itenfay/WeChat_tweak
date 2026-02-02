//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderDescTableViewCell;

@protocol WCFinderDescTableViewCellDelegate <NSObject>

@optional
- (void)finderDescTableViewCell:(WCFinderDescTableViewCell *)arg1 clickActionType:(unsigned long long)arg2;
- (_Bool)finderDescTableViewCellCanShowCountDownTips:(WCFinderDescTableViewCell *)arg1;
- (void)finderDescTableViewCell:(WCFinderDescTableViewCell *)arg1 endCountDownTimmerWithTid:(NSString *)arg2;
@end

