//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface GameAdaptor : NSObject
{
    struct IBindingApp *_app;
    struct OpaqueContex *_context;
}

- (void)Destroy;
- (void)setObjClass:(id)arg1;
- (void)Create:(struct OpaqueJSContext *)arg1 parent:(struct OpaqueJSValue *)arg2 compatible:(_Bool)arg3;

@end

