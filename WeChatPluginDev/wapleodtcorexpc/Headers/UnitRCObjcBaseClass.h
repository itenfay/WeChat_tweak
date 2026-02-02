//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UnitRCAssociatedObjc;

@interface UnitRCObjcBaseClass : NSObject
{
    UnitRCAssociatedObjc *_objc;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UnitRCAssociatedObjc *objc; // @synthesize objc=_objc;
- (void)notifyFieldUpdated:(int)arg1;

@end

