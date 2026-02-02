//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderMJSetTabModel;

@protocol WCFinderMJSetTabModelDelegate <NSObject>
- (void)onTabModel:(WCFinderMJSetTabModel *)arg1 appendDataFromRange:(struct _NSRange)arg2;
- (void)onTabModelDataStateChanged:(WCFinderMJSetTabModel *)arg1;
@end

