//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MultipleTextStateCardView;

@protocol TextStateCardListDataProvider <NSObject>
- (void)configureCardView:(MultipleTextStateCardView *)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)beginIndex;
- (unsigned long long)count;
@end

