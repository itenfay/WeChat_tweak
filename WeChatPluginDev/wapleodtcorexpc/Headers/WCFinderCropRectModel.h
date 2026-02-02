//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderCropRectModel : NSObject
{
    double _topPercent;
    double _leftPercent;
    double _widthPercent;
    double _heightPercent;
}

+ (id)initWithPBRectModel:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_heightPercent;
+ (void)PBArrayAdd_widthPercent;
+ (void)PBArrayAdd_leftPercent;
+ (void)PBArrayAdd_topPercent;
@property(nonatomic) double heightPercent; // @synthesize heightPercent=_heightPercent;
@property(nonatomic) double widthPercent; // @synthesize widthPercent=_widthPercent;
@property(nonatomic) double leftPercent; // @synthesize leftPercent=_leftPercent;
@property(nonatomic) double topPercent; // @synthesize topPercent=_topPercent;
- (id)genCropRectModelPB;
@property(readonly, copy) NSString *description;
- (double)imageCenterY;
- (double)imageCenterX;
- (void)resetAllValue;
- (_Bool)isValid;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

