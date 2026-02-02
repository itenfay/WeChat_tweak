//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSRecursiveLock;

@interface MatrixMemoryFile : NSObject
{
    unsigned int m_dataVersion;
    NSData *m_content;
    struct memory_file *m_file;
    NSRecursiveLock *m_lock;
}

- (void).cxx_destruct;
- (void)clearData;
- (_Bool)writeData:(id)arg1 flushToDisk:(_Bool)arg2;
- (id)data;
- (_Bool)reloadData;
- (void)dealloc;
- (id)initWithPath:(id)arg1 version:(unsigned int)arg2;

@end

