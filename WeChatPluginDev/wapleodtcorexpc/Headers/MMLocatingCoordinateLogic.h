//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TencentLBSLocationManager;

@interface MMLocatingCoordinateLogic : NSObject
{
    TencentLBSLocationManager *_locationMgr;
    NSMutableDictionary *_completionDict;
    NSMutableDictionary *_requestObjDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *requestObjDict; // @synthesize requestObjDict=_requestObjDict;
@property(retain, nonatomic) NSMutableDictionary *completionDict; // @synthesize completionDict=_completionDict;
@property(retain, nonatomic) TencentLBSLocationManager *locationMgr; // @synthesize locationMgr=_locationMgr;
- (void)onCancelRequestAddressForTag:(unsigned long long)arg1;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long long)arg2;
- (void)requestAddressByPoiId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestAddressByLocation:(struct CLLocationCoordinate2D)arg1 params:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)requestSelfAddress:(unsigned long long)arg1 params:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)getSelfLocationCoordinateWithoutReqPermission:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestSelfLocation:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)init;

@end

