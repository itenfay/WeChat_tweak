//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMExtensionImplememter : NSObject
{
    void *m_observerToExtensionObject;
    void *m_extensionObjectList;
}

@property(readonly, nonatomic) void *extensionObjectList; // @synthesize extensionObjectList=m_extensionObjectList;
- (void)cleanUp;
- (_Bool)needsCleanUp;
- (_Bool)unregisterExtension:(id)arg1;
- (_Bool)registerExtension:(id)arg1;
- (void)dealloc;
- (id)init;

@end

