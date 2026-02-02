//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, WCFinderProfilePreloadInfo, WCFinderProfilePreloadParams;

@interface WCFinderProfilePreloadTask : NSObject
{
    WCFinderProfilePreloadParams *_params;
    WCFinderProfilePreloadInfo *_filledPreloadInfo;
    long long _state;
    unsigned long long _startTime;
    NSMutableArray *_pendingFetchCGI;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *pendingFetchCGI; // @synthesize pendingFetchCGI=_pendingFetchCGI;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) WCFinderProfilePreloadInfo *filledPreloadInfo; // @synthesize filledPreloadInfo=_filledPreloadInfo;
@property(retain, nonatomic) WCFinderProfilePreloadParams *params; // @synthesize params=_params;

@end

