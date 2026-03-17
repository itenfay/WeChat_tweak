//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol AVVideoCompositionInstruction <NSObject>
@property(readonly, nonatomic) int passthroughTrackID;
@property(readonly, nonatomic) NSArray *requiredSourceTrackIDs;
@property(readonly, nonatomic) _Bool containsTweening;
@property(readonly, nonatomic) _Bool enablePostProcessing;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange;

@optional
@property(readonly, nonatomic) NSArray *requiredSourceSampleDataTrackIDs;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,N

@end

