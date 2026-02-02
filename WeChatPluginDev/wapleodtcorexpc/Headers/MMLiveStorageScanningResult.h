//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveStorageDirectory, NSDictionary, NSMutableDictionary;

@interface MMLiveStorageScanningResult : NSObject
{
    MMLiveStorageDirectory *_head;
    NSMutableDictionary *_fileReferences;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *fileReferences; // @synthesize fileReferences=_fileReferences;
@property(retain, nonatomic) MMLiveStorageDirectory *head; // @synthesize head=_head;
@property(readonly, nonatomic) NSDictionary *sharedFileReferences;
@property(readonly, nonatomic) MMLiveStorageDirectory *root;

@end

