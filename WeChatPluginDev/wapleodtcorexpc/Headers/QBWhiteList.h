//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface QBWhiteList : NSObject
{
    NSMutableArray *_whiteList;
    NSMutableArray *_predicateList;
    NSMutableDictionary *_whiteListDic;
    NSString *_fileName;
    unsigned long long _FixedWhiteListCount;
}

- (void).cxx_destruct;
- (void)removeTempObjects;
- (void)removeAllObjects;
- (_Bool)isInWhiteListWithHost:(id)arg1;
- (_Bool)isInWhiteListWithURL:(id)arg1;
- (void)setWhiteList:(id)arg1 cached:(_Bool)arg2;
- (void)setWhiteList:(id)arg1;
- (_Bool)addHost:(id)arg1;
- (id)init;
- (void)loadDataFromFile;
- (id)initWithFileName:(id)arg1;
- (void)doInit;

@end

