//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSKeyedArchiver.h>

@interface NSKeyedArchiver (SafeCoding)
+ (_Bool)safeArchiveRootObject:(id)arg1 toFile:(id)arg2;
+ (id)safeArchivedDataWithRootObject:(id)arg1;
@end

