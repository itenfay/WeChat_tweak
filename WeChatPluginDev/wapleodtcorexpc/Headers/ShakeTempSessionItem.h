//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ShakeTempSessionItem : NSObject
{
    NSString *_brandUserName;
    NSString *_deeplinkUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_deeplinkUrl;
+ (void)PBArrayAdd_brandUserName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *deeplinkUrl; // @synthesize deeplinkUrl=_deeplinkUrl;
@property(retain, nonatomic) NSString *brandUserName; // @synthesize brandUserName=_brandUserName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

