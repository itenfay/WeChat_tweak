//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class HoneyPayPrepareCardView, NSString;

@protocol HoneyPayPrepareCardViewDelegate <NSObject>

@optional
- (void)honeyPayPrepareCardView:(HoneyPayPrepareCardView *)arg1 didchangeAmount:(NSString *)arg2;
@end

