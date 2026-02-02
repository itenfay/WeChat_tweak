//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class KindaScanWidget, NSString;

@interface WXPLiteAppBankCardOcrService : NSObject
{
    CDUnknownBlockType _scanCallback;
    KindaScanWidget *_scanWidget;
}

- (void).cxx_destruct;
@property(retain, nonatomic) KindaScanWidget *scanWidget; // @synthesize scanWidget=_scanWidget;
@property(copy, nonatomic) CDUnknownBlockType scanCallback; // @synthesize scanCallback=_scanCallback;
- (void)onFinishScan:(id)arg1 scanResult:(id)arg2 cardImgData:(id)arg3;
- (void)scan:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

