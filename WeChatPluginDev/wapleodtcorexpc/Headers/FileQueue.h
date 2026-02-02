//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FileQueue : NSObject
{
    NSString *m_nsFilePath;
    int m_codingMethod;
    Class m_elementClass;
}

- (void).cxx_destruct;
- (_Bool)clear;
- (id)getAll;
- (_Bool)pop;
- (id)getTop;
- (_Bool)modifyTop:(id)arg1;
- (_Bool)push:(id)arg1;
- (_Bool)syncToFile;
- (void)setUnArchiveResult:(id)arg1;
- (id)getArchiveTarget;
- (void)dealloc;
- (id)initWithNSCodingFilePath:(id)arg1;

@end

