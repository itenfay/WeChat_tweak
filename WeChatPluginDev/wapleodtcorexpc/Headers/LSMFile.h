//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface LSMFile : NSObject
{
    _Bool m_isReadOnly;
    NSString *m_path;
    NSString *m_relativePath;
    int m_fd;
    unsigned long long m_offset;
    unsigned long long m_dataSize;
    void *m_dic;
    _Bool m_hasBeenFullWriteBack;
    _Bool m_hasLoadedFromFile;
    unsigned int _m_index;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_index; // @synthesize m_index=_m_index;
- (_Bool)compactToFile:(id)arg1 handledKeys:(id)arg2;
- (void)recaculateDeadStoreSize;
- (unsigned long long)deadStoreSizeWithHandledKeys:(id)arg1;
- (unsigned long long)deadStoreSize;
- (unsigned long long)fileSize;
- (unsigned long long)fileCount;
- (id)allNonEmptyKeys:(id)arg1;
- (id)allKeys;
- (struct LSMFileItem *)fileItemOfFile:(id)arg1;
- (_Bool)deleteDataOfFile:(id)arg1;
- (id)dataOfFile:(id)arg1 itemWrap:(struct LSMFileItem **)arg2;
- (vector_90b82a4e)writeDatas:(id)arg1 toFiles:(id)arg2;
- (struct LSMFileItem *)writeData:(id)arg1 toFile:(id)arg2;
- (void)tryLoadFromFile;
- (_Bool)hasLoadedFromFile;
- (void)setReadOnly;
- (_Bool)isFileValid;
- (id)relativePath;
- (void)setPath:(id)arg1;
- (id)path;
- (_Bool)rename:(id)arg1;
- (id)cloneToPath:(id)arg1;
- (_Bool)open:(_Bool)arg1;
- (void)dealloc;
- (id)initWithClone:(id)arg1 path:(id)arg2;
- (id)initWithPath:(id)arg1 readOnly:(_Bool)arg2;

@end

