//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface ScanBarcodeMgr
{
    NSString *_extKey;
    _Bool _isUploading;
}

+ (unsigned int)getBarcodeType:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *extKey; // @synthesize extKey=_extKey;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)cancelSendBarcode:(unsigned int)arg1;
- (void)cancelUploading;
- (unsigned int)sendBarcode:(id)arg1 type:(id)arg2 mode:(unsigned int)arg3 scene:(unsigned int)arg4 tabBarInfo:(id)arg5;
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

