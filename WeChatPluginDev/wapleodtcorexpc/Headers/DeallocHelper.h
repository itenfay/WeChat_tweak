//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface DeallocHelper : NSObject
{
    id m_target;
    CDUnknownBlockType m_callback;
}

+ (void)dettachObject:(id)arg1 key:(const void *)arg2;
+ (void)attachToObject:(id)arg1 key:(const void *)arg2 whenDeallocDoThis:(CDUnknownBlockType)arg3;
+ (_Bool)exist:(id)arg1 forKey:(const void *)arg2;
- (void).cxx_destruct;
- (void)dealloc;

@end

