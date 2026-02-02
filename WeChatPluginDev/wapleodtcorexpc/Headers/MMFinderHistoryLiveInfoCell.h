//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderHistoryLiveInfo, MMUIImageView, MMUILabel;
@protocol MMFinderHistoryLiveInfoCellDelegate;

@interface MMFinderHistoryLiveInfoCell
{
    _Bool _isSelfAnchor;
    MMUILabel *_liveTimeLabel;
    MMUILabel *_liveDescriptionLabel;
    MMUIImageView *_liveIconView;
    MMUILabel *_viewersLabel;
    FinderHistoryLiveInfo *_historyLiveInfo;
    MMUIImageView *_arrowIconView;
    id <MMFinderHistoryLiveInfoCellDelegate> _logicDelegate;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MMFinderHistoryLiveInfoCellDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
@property(nonatomic) _Bool isSelfAnchor; // @synthesize isSelfAnchor=_isSelfAnchor;
@property(retain, nonatomic) MMUIImageView *arrowIconView; // @synthesize arrowIconView=_arrowIconView;
@property(retain, nonatomic) FinderHistoryLiveInfo *historyLiveInfo; // @synthesize historyLiveInfo=_historyLiveInfo;
@property(retain, nonatomic) MMUILabel *viewersLabel; // @synthesize viewersLabel=_viewersLabel;
@property(retain, nonatomic) MMUIImageView *liveIconView; // @synthesize liveIconView=_liveIconView;
@property(retain, nonatomic) MMUILabel *liveDescriptionLabel; // @synthesize liveDescriptionLabel=_liveDescriptionLabel;
@property(retain, nonatomic) MMUILabel *liveTimeLabel; // @synthesize liveTimeLabel=_liveTimeLabel;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateWithHistoryLiveInfo:(id)arg1 isSelfAnchor:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

