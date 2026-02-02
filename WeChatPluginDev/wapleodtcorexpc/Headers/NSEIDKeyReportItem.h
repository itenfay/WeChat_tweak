//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface NSEIDKeyReportItem : NSObject
{
    _Bool _isKeyLog;
    unsigned int _ID;
    unsigned int _key;
    unsigned int _value;
}

+ (void)initialize;
+ (void)PBArrayAdd_isKeyLog;
+ (void)PBArrayAdd_value;
+ (void)PBArrayAdd_key;
+ (void)PBArrayAdd_ID;
@property(nonatomic) _Bool isKeyLog; // @synthesize isKeyLog=_isKeyLog;
@property(nonatomic) unsigned int value; // @synthesize value=_value;
@property(nonatomic) unsigned int key; // @synthesize key=_key;
@property(nonatomic) unsigned int ID; // @synthesize ID=_ID;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

