//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OpenIMContactExtendItemCodePB : NSObject
{
    _Bool _hadShowSucceedContactWindow;
    _Bool _hadSucceedContact;
}

+ (void)initialize;
+ (void)PBArrayAdd_hadSucceedContact;
+ (void)PBArrayAdd_hadShowSucceedContactWindow;
@property(nonatomic) _Bool hadSucceedContact; // @synthesize hadSucceedContact=_hadSucceedContact;
@property(nonatomic) _Bool hadShowSucceedContactWindow; // @synthesize hadShowSucceedContactWindow=_hadShowSucceedContactWindow;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

