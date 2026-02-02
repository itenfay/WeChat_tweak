//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UILabel, UIView;
@protocol WAMainFrameTaskBarSectionBaseViewReportDelegate;

@interface WAMainFrameTaskBarSectionBaseView : UICollectionViewCell
{
    UILabel *_titleLabel;
    UIView *_contentContainer;
    UIView *_topArea;
    UIView *_cellMask;
    NSString *_sectionId;
    id <WAMainFrameTaskBarSectionBaseViewReportDelegate> _reportDelegate;
}

+ (long long)topAreaHeight;
+ (id)titleFont;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WAMainFrameTaskBarSectionBaseViewReportDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
@property(retain, nonatomic) NSString *sectionId; // @synthesize sectionId=_sectionId;
@property(retain, nonatomic) UIView *cellMask; // @synthesize cellMask=_cellMask;
@property(retain, nonatomic) UIView *topArea; // @synthesize topArea=_topArea;
@property(retain, nonatomic) UIView *contentContainer; // @synthesize contentContainer=_contentContainer;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)willDisplayItem:(id)arg1 weappData:(id)arg2 position:(long long)arg3 isMyWeApp:(_Bool)arg4;
- (void)deleteItem:(id)arg1 weappData:(id)arg2 pos:(long long)arg3 isMyWeApp:(_Bool)arg4;
- (void)onClick:(id)arg1 pos:(long long)arg2 isMyWeApp:(_Bool)arg3;
- (void)onClick:(id)arg1 weappData:(id)arg2 pos:(long long)arg3;
- (void)onMenuControllerDidHide;
- (_Bool)supportAddToMinimize;
- (void)addCellMask:(id)arg1;
- (void)reload;
- (void)initView;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)title;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

