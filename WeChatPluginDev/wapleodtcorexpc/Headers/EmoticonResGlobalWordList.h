//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmoticonWordListMeta, NSMutableSet;

@interface EmoticonResGlobalWordList : NSObject
{
    NSMutableSet *_words;
    EmoticonWordListMeta *_meta;
}

+ (void)clearAll;
+ (id)pathRelativeToDir:(id)arg1;
+ (id)getCachedWordList;
- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonWordListMeta *meta; // @synthesize meta=_meta;
@property(retain, nonatomic) NSMutableSet *words; // @synthesize words=_words;
- (id)init;

@end

