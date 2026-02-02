//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAssetFetchingOptions : NSObject
{
    _Bool _fetchesLivePhotoInfo;
    double _timeoutInterval;
}

@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic) _Bool fetchesLivePhotoInfo; // @synthesize fetchesLivePhotoInfo=_fetchesLivePhotoInfo;

@end

