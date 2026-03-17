//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderGeneralJumpErrMsgModel;

@protocol WCFinderPhotoFeedDetailViewModelDelegate <NSObject>
- (void)onFeedDetailVMDataItemLoadFail:(NSString *)arg1;
- (void)onFeedDetailVMPrivateFeed:(NSString *)arg1;
- (void)onFeedDetailVMDeleteFeed:(NSString *)arg1;
- (void)onFeedDetailVMJumpError:(WCFinderGeneralJumpErrMsgModel *)arg1;
- (void)onFeedDetailVMContentVMReady;
@end

