//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJLocationFetchHandler : NSObject
{
    unsigned long long _taskToken;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    struct CLLocationCoordinate2D _coordinate;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) unsigned long long taskToken; // @synthesize taskToken=_taskToken;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void)onGPSAccurateLocationChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long long)arg2;
- (void)onTimeout;
- (void)callbackBusy:(CDUnknownBlockType)arg1;
- (void)clear;
- (void)dealloc;
- (void)fetchUserLocationWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)fetcherWithLocation:(struct CLLocationCoordinate2D)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (_Bool)isFetching;
- (id)init;

@end

