//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderGetDetailCacheData : NSObject
{
    _Bool _getDetailResult;
    NSString *_tid;
    NSString *_invalideMsg;
    double _getDetailTime;
}

- (void).cxx_destruct;
@property(nonatomic) double getDetailTime; // @synthesize getDetailTime=_getDetailTime;
@property(copy, nonatomic) NSString *invalideMsg; // @synthesize invalideMsg=_invalideMsg;
@property(nonatomic) _Bool getDetailResult; // @synthesize getDetailResult=_getDetailResult;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;

@end

