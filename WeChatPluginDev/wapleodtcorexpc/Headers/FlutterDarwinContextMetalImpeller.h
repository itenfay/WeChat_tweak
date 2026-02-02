//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FlutterDarwinContextMetalImpeller : NSObject
{
    CFRef_d5dd836c _textureCache;
    shared_ptr_ec18262e _context;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) CFRef_d5dd836c textureCache; // @synthesize textureCache=_textureCache;
@property(readonly, nonatomic) shared_ptr_ec18262e context; // @synthesize context=_context;
- (id)createExternalTextureWithIdentifier:(long long)arg1 texture:(id)arg2;
- (id)init:(const void *)arg1;

@end

