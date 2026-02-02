//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CBaseFile, NSString;

@interface WePkgParser : NSObject
{
    unsigned int _resourceOffset;
    NSString *_filePath;
    CBaseFile *_file;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int resourceOffset; // @synthesize resourceOffset=_resourceOffset;
@property(retain, nonatomic) CBaseFile *file; // @synthesize file=_file;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void)updatePackageLiteInfo;
- (id)getLiteAppPkgInfo;
- (_Bool)openFile;
- (id)getResourceContent:(unsigned int)arg1 Len:(unsigned int)arg2;
- (id)getMetaInfo;
- (id)initWithPkgPath:(id)arg1;

@end

