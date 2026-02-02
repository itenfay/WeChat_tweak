//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WCMVVMBinder : NSObject
{
    NSMutableDictionary *_keyPathMapping;
    NSObject *_viewComponent;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak NSObject *viewComponent; // @synthesize viewComponent=_viewComponent;
- (id)getObjectFromChange:(id)arg1 forKey:(id)arg2;
- (void)_viewModel:(id)arg1 didChangeProperty:(id)arg2 fromOldValue:(id)arg3 toNewValue:(id)arg4;
- (void)_didChangeViewModelWithVMKeyPath:(id)arg1 fromOldObject:(id)arg2 toNewObject:(id)arg3;
- (void)unbindViewModelWithSelector:(SEL)arg1;
- (void)bindViewModelWithSelector:(SEL)arg1 forObservingPropertyKeyPaths:(id)arg2;
- (void)unbindViewModelWithKeyPath:(id)arg1;
- (void)bindViewModelWithKeyPath:(id)arg1 forObservingPropertyKeyPaths:(id)arg2;
- (void)dealloc;
- (id)initWithViewComponent:(id)arg1;

@end

