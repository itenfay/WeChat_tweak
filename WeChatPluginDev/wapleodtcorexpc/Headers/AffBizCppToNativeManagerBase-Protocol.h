//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AffBizCppToNativeManagerCallback;

@protocol AffBizCppToNativeManagerBase <NSObject>

@optional
- (void)getResortContextAsync:(int)arg1;
- (void)markBrandListDBAsCompressFinish;
- (void)markBrandListDBAsCompressBegin;
- (_Bool)shouldClearCompressedKey;
- (_Bool)checkBrandListDBHasStartCompression;
- (_Bool)registerDIct:(int)arg1;
- (unsigned long long)getSyncServerTimeMs;
- (_Bool)getAllowEmptyListResortSwitch;
- (int)getLocalCanvasPkgVersion;
- (void)setCallback:(AffBizCppToNativeManagerCallback *)arg1;
@end

