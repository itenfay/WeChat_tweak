//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderHalfRect, NSString;

@interface WCFinderFullScreenEditRectModel : NSObject
{
    double _leftPrecent;
    double _topPrecent;
    double _widthPrecent;
    double _heightPrecent;
    FinderHalfRect *_halfRect;
}

+ (void)initialize;
+ (void)PBArrayAdd_halfRect;
+ (void)PBArrayAdd_heightPrecent;
+ (void)PBArrayAdd_widthPrecent;
+ (void)PBArrayAdd_topPrecent;
+ (void)PBArrayAdd_leftPrecent;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderHalfRect *halfRect; // @synthesize halfRect=_halfRect;
@property(nonatomic) double heightPrecent; // @synthesize heightPrecent=_heightPrecent;
@property(nonatomic) double widthPrecent; // @synthesize widthPrecent=_widthPrecent;
@property(nonatomic) double topPrecent; // @synthesize topPrecent=_topPrecent;
@property(nonatomic) double leftPrecent; // @synthesize leftPrecent=_leftPrecent;
@property(readonly, copy) NSString *description;
- (void)correctParamsToLegal;
- (_Bool)isLegalEditRectModel;
- (id)covertRectModelFromOldFeedSize:(struct CGSize)arg1 toNewFeedSize:(struct CGSize)arg2;
- (id)genHalfRectWithFeedSize:(struct CGSize)arg1;
- (id)initWithHalfRect:(id)arg1 feedSize:(struct CGSize)arg2;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

