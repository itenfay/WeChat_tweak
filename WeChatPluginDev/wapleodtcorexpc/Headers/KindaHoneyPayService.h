//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMVoidStringCallback, NSString;

@interface KindaHoneyPayService : NSObject
{
    MMVoidStringCallback *_callBack;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMVoidStringCallback *callBack; // @synthesize callBack=_callBack;
- (void)jumpToBankcardList;
- (void)selectSingleContactLogic:(id)arg1 didSelectContact:(id)arg2;
- (void)dealloc;
- (void)stopSelectSingleContact;
- (void)selectSingeContactImpl:(id)arg1 resultCallback:(id)arg2;
- (void)handleOfflineThings:(int)arg1 bindSerial:(id)arg2;
- (void)updateBubbleMsg:(id)arg1 msgContent:(id)arg2 username:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

