//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;
@protocol _TtP6WeChat39BrandProfileRecommendFollowViewDelegate_;

@interface _TtC6WeChat36BrandProfileRecommendFollowViewModel : NSObject
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *bizusername;
    MISSING_TYPE *scene;
    MISSING_TYPE *bizuin;
    MISSING_TYPE *_recommendItems;
    MISSING_TYPE *_dataState;
    MISSING_TYPE *_arrowAnchorPoint;
    MISSING_TYPE *_viewHeight;
    MISSING_TYPE *exposedCells;
    MISSING_TYPE *recommendFollowUIView;
    MISSING_TYPE *sessionId;
    MISSING_TYPE *recommendUrl;
}

+ (double)calculateScrollViewHeight;
+ (double)calculateHeight;
+ (id)certificationImageWithBizInfo:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)onCellExposedWithItem:(id)arg1 pos:(long long)arg2;
- (void)onCellClickedWithItem:(id)arg1 pos:(long long)arg2;
- (void)onMoreButtonClicked;
- (double)scrollCellSpacing;
- (double)scrollCellWidth;
- (id)itemAtIndex:(long long)arg1;
- (void)showRecommendViewAt:(double)arg1;
- (id)generateRecommendFollowView;
@property(nonatomic) double arrowAnchorPoint;
@property(nonatomic) unsigned int dataState;
@property(nonatomic, copy) NSArray *recommendItems;
@property(nonatomic) unsigned int scene; // @synthesize scene;
@property(nonatomic, copy) NSString *bizusername;
@property(nonatomic) __weak id <_TtP6WeChat39BrandProfileRecommendFollowViewDelegate_> delegate; // @synthesize delegate;

@end

