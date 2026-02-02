//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCMemoryRecordManager : NSObject
{
    NSString *m_rootPath;
    int m_recordMaxCount;
    NSMutableArray *m_recordList;
}

- (void).cxx_destruct;
- (void)removeOldData;
- (id)oldRecordListPath;
- (void)loadRecordList;
- (void)sortRecordList;
- (id)getRecordByLaunchTime:(unsigned long long)arg1;
- (id)recordList;
- (id)initWithRecordRootPath:(id)arg1 recordMaxCount:(int)arg2;

@end

