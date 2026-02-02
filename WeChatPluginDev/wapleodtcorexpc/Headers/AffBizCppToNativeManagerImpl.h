//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AffBizCppToNativeManagerCallback, NSString;

@interface AffBizCppToNativeManagerImpl : NSObject
{
    AffBizCppToNativeManagerCallback *m_callBack;
}

- (void).cxx_destruct;
- (void)getResortContextAsync:(int)arg1;
- (void)setCallback:(id)arg1;
- (void)markBrandListDBAsCompressFinish;
- (void)markBrandListDBAsCompressBegin;
- (_Bool)shouldClearCompressedKey;
- (_Bool)checkBrandListDBHasStartCompression;
- (_Bool)registerDIct:(int)arg1;
- (unsigned long long)getSyncServerTimeMs;
- (_Bool)getAllowEmptyListResortSwitch;
- (int)getLocalCanvasPkgVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

