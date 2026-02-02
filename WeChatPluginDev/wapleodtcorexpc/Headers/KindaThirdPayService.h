//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMVoidITransmitKvDataCallback, NSString;

@interface KindaThirdPayService : NSObject
{
    MMVoidITransmitKvDataCallback *_resultCallback;
    NSString *_dcepOrderNo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *dcepOrderNo; // @synthesize dcepOrderNo=_dcepOrderNo;
@property(retain, nonatomic) MMVoidITransmitKvDataCallback *resultCallback; // @synthesize resultCallback=_resultCallback;
- (void)ThirdPayCallback:(id)arg1;
- (void)handleApplicationNotification:(id)arg1;
- (_Bool)isSupportApplePay;
- (_Bool)isDcepAppInstalled;
- (void)startDcepPayImpl:(id)arg1 requestUrl:(id)arg2 extra:(id)arg3 resultCallback:(id)arg4;
- (_Bool)isYunShanFuAppInstalled;
- (void)startYunShanFuPayImpl:(id)arg1 resultCallback:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

