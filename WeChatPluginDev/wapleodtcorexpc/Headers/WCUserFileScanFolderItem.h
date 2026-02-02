//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCUserFileScanFolderItem : NSObject
{
    NSString *_parentPath;
    unsigned long long _scanFileType;
    unsigned long long _depth;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long depth; // @synthesize depth=_depth;
@property(nonatomic) unsigned long long scanFileType; // @synthesize scanFileType=_scanFileType;
@property(copy, nonatomic) NSString *parentPath; // @synthesize parentPath=_parentPath;

@end

