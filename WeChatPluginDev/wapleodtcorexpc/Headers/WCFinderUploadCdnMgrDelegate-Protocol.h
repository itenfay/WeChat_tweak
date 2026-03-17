//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderUploadProgressModel, WCFinderUploadTask;

@protocol WCFinderUploadCdnMgrDelegate <NSObject>

@optional
- (void)onFinderStartPostTaskWithUploadTask:(WCFinderUploadTask *)arg1;
- (void)onFinderFileDumpPostSucces:(WCFinderUploadTask *)arg1;
- (void)onFinderLivePostFail:(NSString *)arg1 errorType:(long long)arg2 errorCode:(long long)arg3;
- (void)onFinderPostProgress:(NSString *)arg1 progress:(WCFinderUploadProgressModel *)arg2;
- (void)onFinderPostFailFromUploadTask:(WCFinderUploadTask *)arg1;
- (void)onFinderPostSucFromUploadTask:(WCFinderUploadTask *)arg1;
- (void)onFinderPostFakeSucFromUploadTask:(WCFinderUploadTask *)arg1;
@end

