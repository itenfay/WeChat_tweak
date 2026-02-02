//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderTipsShowTabExtInfo : NSObject
{
    unsigned int _jumpPriority;
    NSString *_tipsUuid;
    NSString *_reportExtInfo;
}

+ (id)extInfoWith:(id)arg1 tipsUuid:(id)arg2;
+ (void)initialize;
+ (void)PBArrayAdd_reportExtInfo;
+ (void)PBArrayAdd_tipsUuid;
+ (void)PBArrayAdd_jumpPriority;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *reportExtInfo; // @synthesize reportExtInfo=_reportExtInfo;
@property(nonatomic) unsigned int jumpPriority; // @synthesize jumpPriority=_jumpPriority;
@property(copy, nonatomic) NSString *tipsUuid; // @synthesize tipsUuid=_tipsUuid;
- (id)redDotReportExtInfoByCtrlExtInfo:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

