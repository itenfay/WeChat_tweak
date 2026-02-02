//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderBusinessTabModel;

@interface WCFinderRedDotFindTabModel : NSObject
{
    WCFinderBusinessTabModel *_finderModel;
    WCFinderBusinessTabModel *_liveModel;
    WCFinderBusinessTabModel *_socialHotModel;
}

+ (void)initialize;
+ (void)PBArrayAdd_socialHotModel;
+ (void)PBArrayAdd_liveModel;
+ (void)PBArrayAdd_finderModel;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderBusinessTabModel *socialHotModel; // @synthesize socialHotModel=_socialHotModel;
@property(retain, nonatomic) WCFinderBusinessTabModel *liveModel; // @synthesize liveModel=_liveModel;
@property(retain, nonatomic) WCFinderBusinessTabModel *finderModel; // @synthesize finderModel=_finderModel;
- (long long)getClickCount:(unsigned long long)arg1;
- (long long)getExposeCount:(unsigned long long)arg1;
- (void)_updateModel:(unsigned long long)arg1;
- (void)increaseClickCount:(unsigned long long)arg1;
- (void)increaseExposeCount:(unsigned long long)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

