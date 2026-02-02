//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCTableViewCellNormalConfig;

@interface WCTableViewNormalCellManager
{
    double titleRight;
    _Bool _dr_isRtReport;
    NSString *_dr_viewId;
    CDUnknownBlockType _dr_dynamicParamsBlock;
    CDUnknownBlockType _longPressAction;
    unsigned long long _dr_reportPolicy;
    unsigned long long _dr_routeRule;
}

+ (id)urlInnerCellForTitle:(id)arg1 url:(id)arg2;
+ (id)urlInnerBlueCellForTitle:(id)arg1 rightValue:(id)arg2 url:(id)arg3;
+ (double)getAutoSizingRightMargin:(id)arg1;
+ (id)badgeCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 badge:(id)arg4 pathKey:(id)arg5;
+ (id)badgeCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 badge:(id)arg4;
+ (id)editorCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 tip:(id)arg4 focus:(_Bool)arg5 autoCorrect:(_Bool)arg6 text:(id)arg7;
+ (id)normalCellForTitle:(id)arg1 rightValue:(id)arg2;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 accessoryType:(long long)arg4;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 detail:(id)arg4 image:(id)arg5 accessoryType:(long long)arg6;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 detail:(id)arg4 imageName:(id)arg5 accessoryType:(long long)arg6;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4 imageName:(id)arg5 accessoryType:(long long)arg6;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4 accessoryType:(long long)arg5 pathKey:(id)arg6;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4 accessoryType:(long long)arg5;
+ (id)cellForMakeSel:(SEL)arg1 makeTarget:(id)arg2 height:(double)arg3 userInfo:(id)arg4;
+ (unsigned long long)accessoryType:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool dr_isRtReport; // @synthesize dr_isRtReport=_dr_isRtReport;
@property(nonatomic) unsigned long long dr_routeRule; // @synthesize dr_routeRule=_dr_routeRule;
@property(nonatomic) unsigned long long dr_reportPolicy; // @synthesize dr_reportPolicy=_dr_reportPolicy;
@property(copy, nonatomic) CDUnknownBlockType longPressAction; // @synthesize longPressAction=_longPressAction;
@property(copy, nonatomic) CDUnknownBlockType dr_dynamicParamsBlock; // @synthesize dr_dynamicParamsBlock=_dr_dynamicParamsBlock;
@property(copy, nonatomic) NSString *dr_viewId; // @synthesize dr_viewId=_dr_viewId;
- (void)onLongPress:(id)arg1;
- (void)switchDidChanged:(id)arg1;
- (double)getSmallIconLeftMargin;
- (void)configureCell:(id)arg1 withRightConfig:(id)arg2;
- (void)configureCell:(id)arg1 withLeftConfig:(id)arg2;
- (double)getLeftConfigRight:(double)arg1;
- (double)getRightConfigStaticLeft:(double)arg1;
- (double)getRightLabelMaxWidth:(double)arg1;
- (double)getLeftLabelMaxWidth:(double)arg1;
- (double)getLeftLabelLeft;
- (double)cellSeperateLineRightInset;
- (double)cellSeparatorLeftInset;
- (double)cellHeightFor:(id)arg1;
- (void)configureCell:(id)arg1;
- (void)setCell:(id)arg1;
- (CDUnknownBlockType)dr_setViewReportPolicy;
- (id)init;
- (void)makeEditorCell:(id)arg1;
- (void)actionUrlInnerCell;
- (void)actionEditorCell:(id)arg1;
- (id)getUserInfoValueForKey:(id)arg1;
- (void)addUserInfoValue:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(retain, nonatomic) WCTableViewCellNormalConfig *cellConfig; // @dynamic cellConfig;

@end

