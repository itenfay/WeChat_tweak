//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WCFinderLoadReporter : NSObject
{
    NSMutableDictionary *_loadInfoDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *loadInfoDict; // @synthesize loadInfoDict=_loadInfoDict;
- (void)reportLoadInfoWithTid:(id)arg1;
- (id)loadInfoWithTid:(id)arg1;
- (void)removeLoadInfoWithTid:(id)arg1;
- (void)addLoadInfo:(id)arg1;

@end

