//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSKeyedUnarchiver.h>

@interface NSKeyedUnarchiver (SafeCoding)
+ (id)unSecureUnArchiveObjectWithData:(id)arg1;
+ (id)safeUnarchiveFromData:(id)arg1;
+ (id)safeUnarchive:(id)arg1 hasError:(_Bool *)arg2;
+ (id)safeUnarchive:(id)arg1;
@end

