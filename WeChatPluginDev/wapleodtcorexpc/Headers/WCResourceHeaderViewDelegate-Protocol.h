//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCResourceCollectionResuableView;

@protocol WCResourceHeaderViewDelegate <NSObject>
- (void)onUnselectResourceHeader:(WCResourceCollectionResuableView *)arg1;
- (void)onSelectResourceHeader:(WCResourceCollectionResuableView *)arg1;
- (_Bool)isResourceHeaderViewCellAllClick:(WCResourceCollectionResuableView *)arg1;
@end

