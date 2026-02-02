//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WAPermissionActionSheetInfo : NSObject
{
    _Bool _isOpenComment;
    _Bool _isNeedEvaluateBeforeExit;
    unsigned int _popEvaluateLeastStayTime;
    NSData *_controlBytes;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_controlBytes;
+ (void)PBArrayAdd_popEvaluateLeastStayTime;
+ (void)PBArrayAdd_isNeedEvaluateBeforeExit;
+ (void)PBArrayAdd_isOpenComment;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *controlBytes; // @synthesize controlBytes=_controlBytes;
@property(nonatomic) unsigned int popEvaluateLeastStayTime; // @synthesize popEvaluateLeastStayTime=_popEvaluateLeastStayTime;
@property(nonatomic) _Bool isNeedEvaluateBeforeExit; // @synthesize isNeedEvaluateBeforeExit=_isNeedEvaluateBeforeExit;
@property(nonatomic) _Bool isOpenComment; // @synthesize isOpenComment=_isOpenComment;
@property(readonly, copy) NSString *description;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

