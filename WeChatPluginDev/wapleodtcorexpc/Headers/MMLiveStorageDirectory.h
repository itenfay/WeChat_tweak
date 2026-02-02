//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface MMLiveStorageDirectory : NSObject
{
    _Bool _scanned;
    NSString *_name;
    NSString *_fullPath;
    unsigned long long _size;
    unsigned long long _sizeOnDisk;
    NSMutableDictionary *_subdirectories;
    NSMutableDictionary *_containedFiles;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool scanned; // @synthesize scanned=_scanned;
@property(retain, nonatomic) NSMutableDictionary *containedFiles; // @synthesize containedFiles=_containedFiles;
@property(retain, nonatomic) NSMutableDictionary *subdirectories; // @synthesize subdirectories=_subdirectories;
@property(nonatomic) unsigned long long sizeOnDisk; // @synthesize sizeOnDisk=_sizeOnDisk;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *fullPath; // @synthesize fullPath=_fullPath;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)addFile:(id)arg1;
- (void)addDirectory:(id)arg1;
@property(readonly, nonatomic) NSArray *files;
@property(readonly, nonatomic) NSArray *directories;

@end

