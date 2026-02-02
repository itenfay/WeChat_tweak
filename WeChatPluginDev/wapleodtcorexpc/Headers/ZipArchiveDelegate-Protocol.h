//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol ZipArchiveDelegate <NSObject>

@optional
- (_Bool)OverWriteOperation:(NSString *)arg1;
- (void)ErrorMessage:(NSString *)arg1;
@end

