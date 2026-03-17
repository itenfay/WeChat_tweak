//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCFinderLikeListFlowViewModelDelegate <NSObject>

@optional
- (void)finderLikeListFLowVMMegaVideoFavStatusChangedRet:(_Bool)arg1 videoId:(NSString *)arg2 isLike:(_Bool)arg3;
- (void)finderLikeListFLowVMMegaVideoDelete:(NSString *)arg1;
- (void)finderLikeListFirstPageStartLoading;
- (void)finderLikeListFlowVMfetchDataFailed;
- (void)finderLikeListFLowVMfetchDataSucceesful;
@end

