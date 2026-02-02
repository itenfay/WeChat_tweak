//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface PLzmaSDKItem : NSObject
{
    struct SharedPtr<plzma::Item> _item;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithItemM:(void *)arg1;
- (id)initWithPath:(id)arg1 andIndex:(unsigned int)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(nonatomic) _Bool isDir;
@property(nonatomic) _Bool encrypted;
@property(retain, nonatomic) NSDate *modificationDate;
@property(retain, nonatomic) NSDate *accessDate;
@property(retain, nonatomic) NSDate *creationDate;
@property(nonatomic) unsigned int crc32;
@property(nonatomic) unsigned long long packSize;
@property(nonatomic) unsigned long long size;
@property(readonly, nonatomic) unsigned int index;
@property(readonly, nonatomic) NSString *path;
@property(readonly, nonatomic) const void *itemSPtr;

@end

