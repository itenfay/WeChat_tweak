//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary;

@interface _TtC6WeChat3HAR : NSObject
{
    MISSING_TYPE *log;
    MISSING_TYPE *allEntryDict;
    MISSING_TYPE *allEntryIndex;
    MISSING_TYPE *loopAllEntry;
}

- (void).cxx_destruct;
- (void)addEntryWithUrlRequest:(id)arg1 urlResponse:(id)arg2 responseData:(id)arg3 startDate:(id)arg4 webviewPtrValue:(id)arg5;
- (id)init;
- (id)entryMatchUrlStrWithUrlStr:(id)arg1;
- (id)harToJsonStr;
- (id)harToJsonDict;
- (long long)numEntries;
- (_Bool)isAllUrlLooped;
@property(nonatomic) _Bool loopAllEntry; // @synthesize loopAllEntry;
@property(nonatomic, copy) NSDictionary *allEntryIndex;
@property(nonatomic, copy) NSDictionary *allEntryDict;

@end

