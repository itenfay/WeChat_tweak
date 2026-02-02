//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface OpenIMContactOPItemCodePB : NSObject
{
    _Bool _isNeedSync;
    unsigned int _oPLogType;
    NSData *_oPLogData;
    NSString *_oPLogId;
}

+ (void)initialize;
+ (void)PBArrayAdd_isNeedSync;
+ (void)PBArrayAdd_oPLogId;
+ (void)PBArrayAdd_oPLogData;
+ (void)PBArrayAdd_oPLogType;
- (void).cxx_destruct;
@property(nonatomic) _Bool isNeedSync; // @synthesize isNeedSync=_isNeedSync;
@property(retain, nonatomic) NSString *oPLogId; // @synthesize oPLogId=_oPLogId;
@property(retain, nonatomic) NSData *oPLogData; // @synthesize oPLogData=_oPLogData;
@property(nonatomic) unsigned int oPLogType; // @synthesize oPLogType=_oPLogType;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

