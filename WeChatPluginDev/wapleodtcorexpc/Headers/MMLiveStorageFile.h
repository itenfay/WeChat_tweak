//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveStorageFile : NSObject
{
    _Bool _markedForPreservation;
    NSString *_name;
    NSString *_fullPath;
    unsigned long long _size;
    unsigned long long _sizeOnDisk;
    long long _fileContentId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool markedForPreservation; // @synthesize markedForPreservation=_markedForPreservation;
@property(nonatomic) long long fileContentId; // @synthesize fileContentId=_fileContentId;
@property(nonatomic) unsigned long long sizeOnDisk; // @synthesize sizeOnDisk=_sizeOnDisk;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *fullPath; // @synthesize fullPath=_fullPath;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) _Bool fileContentIdAvailable;

@end

