//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol IGetPOIListMgrExt <NSObject>

@optional
- (void)OnGetAutoSearchPOIList:(NSDictionary *)arg1 Error:(int)arg2;
- (void)OnGetSearchPOIList:(NSDictionary *)arg1 Error:(int)arg2;
- (void)OnGetNearPOIList:(NSDictionary *)arg1 Error:(int)arg2;
@end

