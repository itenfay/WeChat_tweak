//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ZidlObjHolder2 : NSObject
{
    shared_ptr_96b08bd7 _cppHolderImpl;
}

+ (id)createWithCpp:(const void *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) shared_ptr_96b08bd7 cppHolderImpl; // @synthesize cppHolderImpl=_cppHolderImpl;
- (void)dealloc;
- (id)zidlHolderToObj:(Class)arg1;
- (id)init:(const void *)arg1 identity:(const void *)arg2 refCntManager:(void *)arg3;
- (id)init;
- (id)init:(const void *)arg1;

@end

