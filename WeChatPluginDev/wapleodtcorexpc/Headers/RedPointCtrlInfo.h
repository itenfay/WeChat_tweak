//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, SequenceInfo;

@interface RedPointCtrlInfo : NSObject
{
    NSMutableArray *_redPointList;
    SequenceInfo *_seqInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_seqInfo;
+ (void)PBArrayAdd_redPointList;
- (void).cxx_destruct;
@property(retain, nonatomic) SequenceInfo *seqInfo; // @synthesize seqInfo=_seqInfo;
@property(retain, nonatomic) NSMutableArray *redPointList; // @synthesize redPointList=_redPointList;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

