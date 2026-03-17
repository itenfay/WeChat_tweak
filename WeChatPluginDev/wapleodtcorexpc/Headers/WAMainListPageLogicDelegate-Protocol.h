//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableArray;

@protocol WAMainListPageLogicDelegate <NSObject>
- (void)didFinishFetchNextPageItemsErrorWithErrCode:(int)arg1;
- (void)didFinishFetchNextPageItems:(NSMutableArray *)arg1 pageNum:(unsigned int)arg2 beginPos:(unsigned long long)arg3;
@end

