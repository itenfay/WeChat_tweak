//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WSTemplatePackage;

@interface WSTemplatePackageManager : NSObject
{
    WSTemplatePackage *_updatedResourcePackage;
    WSTemplatePackage *_devResourcePackage;
    WSTemplatePackage *_appResourcePackage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WSTemplatePackage *appResourcePackage; // @synthesize appResourcePackage=_appResourcePackage;
@property(retain, nonatomic) WSTemplatePackage *devResourcePackage; // @synthesize devResourcePackage=_devResourcePackage;
@property(retain, nonatomic) WSTemplatePackage *updatedResourcePackage; // @synthesize updatedResourcePackage=_updatedResourcePackage;
@property(readonly, nonatomic) WSTemplatePackage *activePackage;
- (id)initWithZipResourcePath:(id)arg1 privateResourcePath:(id)arg2 packageName:(id)arg3 bizType:(unsigned long long)arg4;

@end

