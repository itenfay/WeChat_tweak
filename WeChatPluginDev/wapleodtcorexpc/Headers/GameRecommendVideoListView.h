//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString, UILabel, UIScrollView;
@protocol GameRecommendVideoListViewDelegate;

@interface GameRecommendVideoListView : UIView
{
    UILabel *_titleView;
    id <GameRecommendVideoListViewDelegate> _delegate;
    NSArray *_recommendVideoList;
    UILabel *_headerLabel;
    UILabel *_tailLabel;
    UIScrollView *_recommendScrollView;
    NSMutableArray *_recommendCardsArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *recommendCardsArray; // @synthesize recommendCardsArray=_recommendCardsArray;
@property(retain, nonatomic) UIScrollView *recommendScrollView; // @synthesize recommendScrollView=_recommendScrollView;
@property(retain, nonatomic) UILabel *tailLabel; // @synthesize tailLabel=_tailLabel;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(copy, nonatomic) NSArray *recommendVideoList; // @synthesize recommendVideoList=_recommendVideoList;
@property(nonatomic) __weak id <GameRecommendVideoListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
- (id)reportObjWithIndex:(long long)arg1 videoId:(id)arg2 action:(long long)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)didSelectCardAssset:(id)arg1;
- (void)didPublishSelectAsset:(id)arg1;
- (void)configRecommendList:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

