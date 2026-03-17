//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, WeShiReaderItemView;

@protocol WeiShiReaderItemViewDelegate <NSObject>
- (_Bool)bShouldReportShowInfo;
- (NSArray *)getReadWraps;
- (void)onReaderItemClick:(unsigned int)arg1 itemView:(WeShiReaderItemView *)arg2;
@end

