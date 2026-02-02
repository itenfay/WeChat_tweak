//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface COpenIMInfo : NSObject
{
    unsigned int _customInfoVisible;
    unsigned int _resSubType;
    unsigned int _kefuType;
    NSString *_openIMDescId;
    NSArray *_customItems;
    NSArray *_customToolBarItems;
    NSString *_finderUsername;
    unsigned long long _flags;
    NSString *_exposedId;
    NSString *_customInfo;
    NSString *_customToolBarInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_customToolBarInfo;
+ (void)PBArrayAdd_kefuType;
+ (void)PBArrayAdd_exposedId;
+ (void)PBArrayAdd_flags;
+ (void)PBArrayAdd_resSubType;
+ (void)PBArrayAdd_finderUsername;
+ (void)PBArrayAdd_openIMDescId;
+ (void)PBArrayAdd_customInfo;
+ (void)PBArrayAdd_customInfoVisible;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *customToolBarInfo; // @synthesize customToolBarInfo=_customToolBarInfo;
@property(nonatomic) unsigned int kefuType; // @synthesize kefuType=_kefuType;
@property(retain, nonatomic) NSString *customInfo; // @synthesize customInfo=_customInfo;
@property(retain, nonatomic) NSString *exposedId; // @synthesize exposedId=_exposedId;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(nonatomic) unsigned int resSubType; // @synthesize resSubType=_resSubType;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) NSArray *customToolBarItems; // @synthesize customToolBarItems=_customToolBarItems;
@property(retain, nonatomic) NSArray *customItems; // @synthesize customItems=_customItems;
@property(nonatomic) unsigned int customInfoVisible; // @synthesize customInfoVisible=_customInfoVisible;
@property(retain, nonatomic) NSString *openIMDescId; // @synthesize openIMDescId=_openIMDescId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

