//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicMVModel, NSString, WCFinderDataItem;

@protocol IMMMusicMVCGIService <NSObject>

@optional
- (void)onMusicMVCGISerivceGetMvInfoFailWithObjectId:(unsigned long long)arg1 failureType:(unsigned long long)arg2 errMsg:(NSString *)arg3;
- (void)onMusicMVCGISerivceGetMvInfoSuccessWithMVModel:(MMMusicMVModel *)arg1 objectId:(unsigned long long)arg2;
- (void)onMusicMVCGISerivcePostMVFailed:(MMMusicMVModel *)arg1;
- (void)onMusicMVCGISerivcePostMVSuccess:(WCFinderDataItem *)arg1;
@end

