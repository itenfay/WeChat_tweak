//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCURLSessionConfiguration : NSObject
{
    _Bool _useNewDns;
    _Bool _shouldHandleRedirectBySelf;
    _Bool _hanldeDataBySelf;
    _Bool _enableSocketReuse;
    _Bool _useSimpleDns;
    _Bool _forceBindMobile;
}

@property(nonatomic) _Bool forceBindMobile; // @synthesize forceBindMobile=_forceBindMobile;
@property(nonatomic) _Bool useSimpleDns; // @synthesize useSimpleDns=_useSimpleDns;
@property(nonatomic) _Bool enableSocketReuse; // @synthesize enableSocketReuse=_enableSocketReuse;
@property(nonatomic) _Bool hanldeDataBySelf; // @synthesize hanldeDataBySelf=_hanldeDataBySelf;
@property(nonatomic) _Bool shouldHandleRedirectBySelf; // @synthesize shouldHandleRedirectBySelf=_shouldHandleRedirectBySelf;
@property(nonatomic) _Bool useNewDns; // @synthesize useNewDns=_useNewDns;
- (id)init;

@end

