//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCLabsCommonInfo
{
    _Bool _hasShowNewRedDotInLabEntrance;
    _Bool _shouldShowGerneralRedDotInLabEntrance;
    unsigned int _uiShowLabTipCnt;
}

+ (void)initialize;
+ (void)PBArrayAdd_shouldShowGerneralRedDotInLabEntrance;
+ (void)PBArrayAdd_hasShowNewRedDotInLabEntrance;
+ (void)PBArrayAdd_uiShowLabTipCnt;
@property(nonatomic) _Bool shouldShowGerneralRedDotInLabEntrance; // @synthesize shouldShowGerneralRedDotInLabEntrance=_shouldShowGerneralRedDotInLabEntrance;
@property(nonatomic) _Bool hasShowNewRedDotInLabEntrance; // @synthesize hasShowNewRedDotInLabEntrance=_hasShowNewRedDotInLabEntrance;
@property(nonatomic) unsigned int uiShowLabTipCnt; // @synthesize uiShowLabTipCnt=_uiShowLabTipCnt;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

