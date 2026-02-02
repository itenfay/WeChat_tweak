//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol AffBrandServiceCppToNativeManagerBase <NSObject>

@optional
- (NSString *)getDigest:(NSData *)arg1;
- (_Bool)checkBrandNotiListDBHasStartCompression;
- (_Bool)checkBrandListDBHasStartCompression;
- (_Bool)registerDIct:(int)arg1;
- (unsigned long long)getSyncServerTimeMs;
- (_Bool)getAllowEmptyListResortSwitch;
- (int)getLocalCanvasPkgVersion;
@end

