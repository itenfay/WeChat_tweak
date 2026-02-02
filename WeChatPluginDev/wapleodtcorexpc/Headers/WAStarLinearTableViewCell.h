//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUILabel, MMWebImageView, NSArray, NSMutableArray, NSString, UIImageView, UIView, WCTagsView;

@interface WAStarLinearTableViewCell : UITableViewCell
{
    _Bool _isNeedLogoGray;
    long long _runningState;
    _Bool _isStared;
    _Bool _isBottom;
    unsigned int _stateFlag;
    NSString *_iconUrl;
    NSString *_title;
    NSMutableArray *_arrMenuItems;
    NSArray *_tagsArray;
    MMWebImageView *_headImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_debugLabel;
    MMUILabel *_stateLabel;
    UIImageView *_staredView;
    UIView *_lineView;
    WCTagsView *_tagsView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTagsView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *staredView; // @synthesize staredView=_staredView;
@property(retain, nonatomic) MMUILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) MMUILabel *debugLabel; // @synthesize debugLabel=_debugLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) NSArray *tagsArray; // @synthesize tagsArray=_tagsArray;
@property(retain, nonatomic) NSMutableArray *arrMenuItems; // @synthesize arrMenuItems=_arrMenuItems;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) unsigned int stateFlag; // @synthesize stateFlag=_stateFlag;
- (void)onLoadImageOK:(id)arg1;
- (void)markUnBottom;
- (void)markBottom;
- (void)markUnStaredAnimated:(_Bool)arg1;
- (void)markStaredAnimated:(_Bool)arg1;
- (void)makeStateBanned;
- (void)makeStateStopService;
- (void)makeStateNormal;
- (void)layoutSubviews;
- (void)initLineView;
- (void)initStateLabel;
- (void)initStaredLogoView;
- (void)initDebugLabel;
- (void)initTagsView;
- (void)initTitleLabel;
- (void)initHeadImageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

