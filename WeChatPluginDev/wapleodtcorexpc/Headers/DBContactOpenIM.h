//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DBContactOpenIM : NSObject
{
    unsigned int _customInfoVisible;
    NSString *_openIMDescId;
    NSString *_customInfo;
    NSString *_finderUsername;
    unsigned long long _flags;
    NSString *_exposedId;
    NSString *_customToolBarInfo;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_customToolBarInfo;
+ (void)PBArrayAdd_exposedId;
+ (void)PBArrayAdd_flags;
+ (void)PBArrayAdd_finderUsername;
+ (void)PBArrayAdd_customInfoVisible;
+ (void)PBArrayAdd_openIMDescId;
+ (void)PBArrayAdd_customInfo;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *customToolBarInfo; // @synthesize customToolBarInfo=_customToolBarInfo;
@property(retain, nonatomic) NSString *exposedId; // @synthesize exposedId=_exposedId;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) NSString *customInfo; // @synthesize customInfo=_customInfo;
@property(nonatomic) unsigned int customInfoVisible; // @synthesize customInfoVisible=_customInfoVisible;
@property(retain, nonatomic) NSString *openIMDescId; // @synthesize openIMDescId=_openIMDescId;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

