//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderLongPressModel : NSObject
{
    unsigned long long _menuItemType;
    id _target;
    SEL _selector;
    CDUnknownBlockType _handle;
}

+ (id)menuItem:(unsigned long long)arg1 handle:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType handle; // @synthesize handle=_handle;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) unsigned long long menuItemType; // @synthesize menuItemType=_menuItemType;
- (id)initWithType:(unsigned long long)arg1 target:(id)arg2 selector:(SEL)arg3;

@end

