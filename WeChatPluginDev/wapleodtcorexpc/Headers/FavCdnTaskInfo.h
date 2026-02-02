//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FavoritesDownloadCDNInfo;

@interface FavCdnTaskInfo : NSObject
{
    int _retryCount;
    long long _remainSize;
    FavoritesDownloadCDNInfo *_downloadInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FavoritesDownloadCDNInfo *downloadInfo; // @synthesize downloadInfo=_downloadInfo;
@property(nonatomic) long long remainSize; // @synthesize remainSize=_remainSize;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;

@end

