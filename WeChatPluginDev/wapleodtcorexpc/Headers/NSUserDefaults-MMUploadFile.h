//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (MMUploadFile)
+ (id)uploadFileNames;
+ (void)setUploadFileNames:(id)arg1;
- (id)mm_dataForKey:(id)arg1;
- (id)mm_arrayForKey:(id)arg1;
- (_Bool)mm_doubleForKey:(id)arg1;
- (_Bool)mm_floatForKey:(id)arg1;
- (_Bool)mm_boolForKey:(id)arg1;
- (long long)mm_integerForKey:(id)arg1;
- (id)mm_dictionaryForKey:(id)arg1;
- (id)mm_stringForKey:(id)arg1;
@end

