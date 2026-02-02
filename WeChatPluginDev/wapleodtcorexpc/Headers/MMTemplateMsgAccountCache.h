//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface MMTemplateMsgAccountCache
{
    _Bool _isGlobalNotify;
    NSMutableArray *_weappList;
    NSMutableArray *_bizsvrList;
}

+ (void)initialize;
+ (void)PBArrayAdd_bizsvrList;
+ (void)PBArrayAdd_weappList;
+ (void)PBArrayAdd_isGlobalNotify;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *bizsvrList; // @synthesize bizsvrList=_bizsvrList;
@property(retain, nonatomic) NSMutableArray *weappList; // @synthesize weappList=_weappList;
@property(nonatomic) _Bool isGlobalNotify; // @synthesize isGlobalNotify=_isGlobalNotify;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

