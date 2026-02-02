//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (Collection)
+ (id)fromString:(id)arg1;
+ (id)fromData:(id)arg1;
@property(readonly, nonatomic) CDUnknownBlockType dictionarySetKV;
@property(readonly, nonatomic) CDUnknownBlockType dictionaryMerge;
- (id)map:(CDUnknownBlockType)arg1;
- (id)reject:(CDUnknownBlockType)arg1;
- (id)filter:(CDUnknownBlockType)arg1;
- (void)each:(CDUnknownBlockType)arg1;
- (id)merge:(id)arg1;
- (id)only:(id)arg1;
- (id)except:(id)arg1;
- (id)toJson;
- (id)toString;
@end

