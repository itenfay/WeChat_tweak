//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WeNoteCPPInstanceCallback : NSObject
{
    struct WeNoteCPPInstanceDispatcherBridgeObjcImpl *dispatcher_bridge;
}

- (void)onsaveNoteComplete:(unsigned long long)arg1 hasUpdate:(_Bool)arg2 htmlString:(id)arg3 attributeList:(id)arg4;
- (id)initWithCpp:(struct WeNoteCPPInstanceDispatcherBridgeObjcImpl *)arg1;

@end

