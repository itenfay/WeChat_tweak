//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NewLifeStartCdnDownloadReq;

@protocol NewLifeCdnDownloader
- (void)cancelCdnDownloadMediaId:(NSString *)arg1 completion:(void (^)(FlutterError *))arg2;
- (void)startCdnDownloadReq:(NewLifeStartCdnDownloadReq *)arg1 completion:(void (^)(FlutterError *))arg2;
@end

