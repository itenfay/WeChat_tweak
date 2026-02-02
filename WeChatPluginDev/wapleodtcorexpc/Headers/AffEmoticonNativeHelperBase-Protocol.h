//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AffEmoticonData, NSString;

@protocol AffEmoticonNativeHelperBase <NSObject>

@optional
- (AffEmoticonData *)readData:(NSString *)arg1;
- (_Bool)saveData:(AffEmoticonData *)arg1 path:(NSString *)arg2;
@end

