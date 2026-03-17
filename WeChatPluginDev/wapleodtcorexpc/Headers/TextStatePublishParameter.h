//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TextStatePublishParameter : NSObject
{
    _Bool _preserveLastPrivacy;
}

+ (id)defaultParameter;
+ (void)initialize;
+ (void)PBArrayAdd_preserveLastPrivacy;
@property(nonatomic) _Bool preserveLastPrivacy; // @synthesize preserveLastPrivacy=_preserveLastPrivacy;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

