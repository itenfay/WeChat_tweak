//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveEffectsBaseDataItem : NSObject
{
    _Bool _isResourcePrepared;
    NSString *_effectID;
    NSString *_name;
    NSString *_thumbUrl;
    NSString *_thumbMd5;
    NSString *_resourceUrl;
    NSString *_resourceMd5;
}

+ (id)dataItemWithResource:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isResourcePrepared; // @synthesize isResourcePrepared=_isResourcePrepared;
@property(retain, nonatomic) NSString *resourceMd5; // @synthesize resourceMd5=_resourceMd5;
@property(retain, nonatomic) NSString *resourceUrl; // @synthesize resourceUrl=_resourceUrl;
@property(retain, nonatomic) NSString *thumbMd5; // @synthesize thumbMd5=_thumbMd5;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *effectID; // @synthesize effectID=_effectID;
- (id)rootFolder;
- (id)tempFolder;
- (_Bool)isDisableItem;
- (id)downloadWorkingPath:(id)arg1;
- (id)downloadCachingPath:(id)arg1;
- (id)materialResourceUnzipTempFolderPath;
- (id)materialResourceFolderPath;
- (id)materialResourceBaseFolder;

@end

