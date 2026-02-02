//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAMenuAboveHeaderView, WAMenuHeaderView, WAProfileLogicController;

@interface WAMenuScrollActionSheet
{
    _Bool _needPreferredActionInReloadAnimation;
    unsigned long long _source;
    NSString *_userName;
    double _averageScore;
    WAMenuAboveHeaderView *_topView;
    WAMenuHeaderView *_headerView;
    WAProfileLogicController *_profileLogicController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAProfileLogicController *profileLogicController; // @synthesize profileLogicController=_profileLogicController;
@property(retain, nonatomic) WAMenuHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) WAMenuAboveHeaderView *topView; // @synthesize topView=_topView;
@property(nonatomic) _Bool needPreferredActionInReloadAnimation; // @synthesize needPreferredActionInReloadAnimation=_needPreferredActionInReloadAnimation;
@property(nonatomic) double averageScore; // @synthesize averageScore=_averageScore;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
- (id)containerViewBlurBackgroundColor;
- (id)bottomPadddingViewBackgroundColor;
- (void)updateAverageScore;
- (void)configHeaderView:(id)arg1 withCommentInfo:(id)arg2;
- (void)updateComment;
- (void)updatePageInfo;
- (void)tryUpdateData:(id)arg1;
- (void)onTopViewTaped;
- (void)layoutTopView;
- (void)relayoutForUpdate;
- (void)dismissAnimated:(_Bool)arg1;
- (void)preferredActionInReloadAnimation;
- (id)initWithUserName:(id)arg1;

@end

