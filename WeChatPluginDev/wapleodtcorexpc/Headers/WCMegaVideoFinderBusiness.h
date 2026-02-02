//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCMegaVideoFinderBusiness : NSObject
{
    NSString *_tid;
    NSString *_nonceId;
}

+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_nonceId;
+ (void)PBArrayAdd_tid;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(readonly, copy) NSString *description;
- (id)genMegaVideoFinderBusiness;
- (id)initWithMegaVideoFinderBusiness:(id)arg1;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

