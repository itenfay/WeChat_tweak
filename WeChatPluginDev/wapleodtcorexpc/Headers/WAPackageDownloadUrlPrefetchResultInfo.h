//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAPackageDownloadUrlPrefetchResultInfo : NSObject
{
    _Bool _isPatch;
    _Bool _isZstd;
    NSString *_url;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isZstd; // @synthesize isZstd=_isZstd;
@property(nonatomic) _Bool isPatch; // @synthesize isPatch=_isPatch;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;

@end

