//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class RTETextView;

@protocol RTESectionMgrDelegate <NSObject>
- (void)onSectionAtIndex:(unsigned long long)arg1 heightIncreased:(double)arg2;
- (RTETextView *)creatRTETextView;
@end

