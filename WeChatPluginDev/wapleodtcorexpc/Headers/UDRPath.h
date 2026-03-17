//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface UDRPath : NSObject
{
}

+ (_Bool)resourceExist:(id)arg1;
+ (id)decodeVirtualPath:(id)arg1;
+ (id)getResourceVirtualPath:(id)arg1 name:(id)arg2 md5:(id)arg3 originName:(id)arg4;
+ (id)getResourceTempPath:(id)arg1 name:(id)arg2;
+ (id)getResourcePostPath:(id)arg1;
+ (id)getResourcePath:(id)arg1 name:(id)arg2;
+ (id)getProjectPath:(id)arg1;
+ (id)getDirOfUDR;
+ (id)getAbsolutePath:(id)arg1;

@end

