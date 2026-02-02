//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, NSString;

@interface IntelligentMessageItemPB
{
    _Bool _hadUpdateFaceCluster;
    NSMutableArray *_hadUpdateModelKeyList;
    NSArray *_shouldUpdateModelKeyList;
}

+ (void)initialize;
+ (void)PBArrayAdd_shouldUpdateModelKeyList;
+ (void)PBArrayAdd_hadUpdateFaceCluster;
+ (void)PBArrayAdd_hadUpdateModelKeyList;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *shouldUpdateModelKeyList; // @synthesize shouldUpdateModelKeyList=_shouldUpdateModelKeyList;
@property(nonatomic) _Bool hadUpdateFaceCluster; // @synthesize hadUpdateFaceCluster=_hadUpdateFaceCluster;
@property(retain, nonatomic) NSMutableArray *hadUpdateModelKeyList; // @synthesize hadUpdateModelKeyList=_hadUpdateModelKeyList;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

