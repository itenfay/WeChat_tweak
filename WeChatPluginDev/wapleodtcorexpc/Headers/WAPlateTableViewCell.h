//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, UIImageView;

@interface WAPlateTableViewCell
{
    _Bool _enableToggle;
    double _edgeLeft;
    NSString *_titleDesc;
    MMUILabel *_titleLable;
    UIImageView *_toggledImageView;
}

+ (double)viewHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *toggledImageView; // @synthesize toggledImageView=_toggledImageView;
@property(retain, nonatomic) MMUILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(nonatomic) _Bool enableToggle; // @synthesize enableToggle=_enableToggle;
@property(retain, nonatomic) NSString *titleDesc; // @synthesize titleDesc=_titleDesc;
@property(nonatomic) double edgeLeft; // @synthesize edgeLeft=_edgeLeft;
- (void)updateView;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

