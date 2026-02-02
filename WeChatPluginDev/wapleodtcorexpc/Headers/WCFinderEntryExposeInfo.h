//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderEntryExposeInfo : NSObject
{
    _Bool _isIgnore;
    NSString *_path;
    unsigned long long _businessType;
    NSString *_redDotId;
}

+ (void)initialize;
+ (void)PBArrayAdd_isIgnore;
+ (void)PBArrayAdd_redDotId;
+ (void)PBArrayAdd_businessType;
+ (void)PBArrayAdd_path;
- (void).cxx_destruct;
@property(nonatomic) _Bool isIgnore; // @synthesize isIgnore=_isIgnore;
@property(copy, nonatomic) NSString *redDotId; // @synthesize redDotId=_redDotId;
@property(nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (_Bool)redDotHasExpose;
- (id)initWithPath:(id)arg1 businessType:(unsigned long long)arg2 redDotId:(id)arg3 isIgnore:(_Bool)arg4;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

