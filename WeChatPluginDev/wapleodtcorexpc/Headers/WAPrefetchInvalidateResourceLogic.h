//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WAPrefetchInvalidateResourceInfo;

@interface WAPrefetchInvalidateResourceLogic : NSObject
{
    WAPrefetchInvalidateResourceInfo *_info;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAPrefetchInvalidateResourceInfo *info; // @synthesize info=_info;
- (void)clearInvalidateCodeWithAppid:(id)arg1;
- (void)clearInvalidateContactWithAppid:(id)arg1;
- (id)allInvalidateContactAppid;
- (id)allInvalidateCodeAppid;
- (unsigned int)reportIdForInvalidateCode:(id)arg1;
- (unsigned int)reportIdForInvalidateContact:(id)arg1;
- (_Bool)isCodePkgInvalidateWithAppid:(id)arg1 updateTime:(unsigned int)arg2;
- (_Bool)isContactInvalidateWithAppid:(id)arg1 updateTime:(unsigned int)arg2;
- (void)saveLocalData;
- (void)resumeLocalData;
- (void)executeInvalidateContactCmd:(id)arg1;
- (void)executeInvalidateCodeCmd:(id)arg1;
- (id)init;

@end

