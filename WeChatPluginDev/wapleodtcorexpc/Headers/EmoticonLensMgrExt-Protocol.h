//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmoticonLensInfo, NSArray, NSString;

@protocol EmoticonLensMgrExt <NSObject>

@optional
- (void)onEmoticonLensIconDownloadFail:(NSString *)arg1;
- (void)onEmoticonLensIconDownloadSuccess:(NSString *)arg1;
- (void)onEmoticonLensInvalid:(NSString *)arg1 errType:(long long)arg2;
- (void)onEmoticonLensRequestSuccess:(EmoticonLensInfo *)arg1 forLensId:(NSString *)arg2;
- (void)onEmoticonLensListRequestFail;
- (void)onEmoticonLensListRequestSuccess:(NSArray *)arg1 isFirstPage:(_Bool)arg2;
- (void)onEmoticonLensPkgDownloadSuccess:(NSString *)arg1;
- (void)onEmoticonLensPkgDownloadFail:(NSString *)arg1;
- (void)onEmoticonLensPkgDownloadProgress:(double)arg1 lensId:(NSString *)arg2;
@end

