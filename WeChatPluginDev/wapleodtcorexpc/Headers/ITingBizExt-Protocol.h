//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol ITingBizExt <NSObject>

@optional
- (void)onTingListenTimeUpdated:(unsigned long long)arg1 forScene:(unsigned int)arg2;
- (void)onTingListenItem:(NSString *)arg1 categoryId:(NSString *)arg2 likeStatusChanged:(_Bool)arg3 isPublic:(_Bool)arg4;
@end

