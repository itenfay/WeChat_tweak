//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderSyncRequest, FinderSyncResponse, NSArray;

@protocol WCFinderSyncEventHandlerExt <NSObject>
- (void)syncEventHandlerWithItems:(NSArray *)arg1;

@optional
- (void)syncEventHandlerWithRequest:(FinderSyncRequest *)arg1 andResp:(FinderSyncResponse *)arg2;
@end

