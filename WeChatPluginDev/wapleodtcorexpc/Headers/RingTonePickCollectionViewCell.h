//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUILabel, NSString, RingToneDetail, RingToneImageView, UIView;
@protocol RingTonePickCollectionViewCellDelegate;

@interface RingTonePickCollectionViewCell : UITableViewCell
{
    _Bool _isPlaying;
    RingToneDetail *_ring;
    id <RingTonePickCollectionViewCellDelegate> _delegate;
    unsigned long long _scene;
    long long _index;
    RingToneImageView *_coverView;
    UIView *_bottomView;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    UIView *_descStack;
    MMUILabel *_settingsLabel;
    unsigned long long _useFriendNum;
    unsigned long long _settingNum;
    UIView *_detailLabel;
}

+ (id)cellID;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(nonatomic) unsigned long long settingNum; // @synthesize settingNum=_settingNum;
@property(nonatomic) unsigned long long useFriendNum; // @synthesize useFriendNum=_useFriendNum;
@property(retain, nonatomic) MMUILabel *settingsLabel; // @synthesize settingsLabel=_settingsLabel;
@property(retain, nonatomic) UIView *descStack; // @synthesize descStack=_descStack;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) RingToneImageView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) __weak id <RingTonePickCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) RingToneDetail *ring; // @synthesize ring=_ring;
- (void)playWithID:(id)arg1;
- (void)stopAllPlay;
- (void)setHighlightedForCell:(_Bool)arg1;
- (void)prepareForReuse;
- (void)addConstraints;
- (void)jumpToPlayerPage;
- (void)initDetailLable;
- (void)initSettingsLabel;
- (void)initDescLabel;
- (void)initTiltleLabel;
- (void)internalUpdateContentWith:(id)arg1 friendName:(id)arg2;
- (void)updateContentWithRingDetail:(id)arg1 friendName:(id)arg2;
- (void)initiativeTriggerPlay;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

