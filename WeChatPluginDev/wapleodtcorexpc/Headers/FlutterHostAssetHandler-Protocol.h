//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol FlutterHostAssetHandler <NSObject>
- (NSString *)loadStringWithKey:(NSString *)arg1;
- (NSData *)loadWithKey:(NSString *)arg1;
@end

