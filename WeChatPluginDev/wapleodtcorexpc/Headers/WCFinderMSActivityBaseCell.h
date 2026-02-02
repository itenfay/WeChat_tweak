//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, WCFinderEventDelegate, WCFinderFeedContentVM, WCFinderMSActivityCellUIModel, WCFinderReuseQueue;

@interface WCFinderMSActivityBaseCell : UITableViewCell
{
    _Bool _isAuthorScene;
    _Bool _showSeparatorLine;
    WCFinderFeedContentVM *_contentVM;
    WCFinderEventDelegate *_delegate;
    WCFinderReuseQueue *_reuseQueue;
    WCFinderMSActivityCellUIModel *_uiModel;
    NSString *_finderUsername;
    NSString *_cellIdentifier;
}

+ (id)genLikeListTextViewConfigWithMaxDisplayLine:(unsigned long long)arg1 content:(id)arg2 forVM:(id)arg3;
+ (id)genCommentTextViewConfigWithMaxDisplayLine:(unsigned long long)arg1 content:(id)arg2 isExpand:(_Bool)arg3 forVM:(id)arg4;
+ (id)genDescTextViewConfigWithMaxDisplayLine:(unsigned long long)arg1 content:(id)arg2 forVM:(id)arg3;
+ (id)cellIdentifier;
+ (void)prepareForReuseQueue:(id)arg1;
+ (struct CGSize)calculateDisplaySize:(struct CGSize)arg1 forVM:(id)arg2 cellIdentifier:(id)arg3 showSceneIntroduce:(_Bool)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *cellIdentifier; // @synthesize cellIdentifier=_cellIdentifier;
@property(nonatomic) _Bool showSeparatorLine; // @synthesize showSeparatorLine=_showSeparatorLine;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) _Bool isAuthorScene; // @synthesize isAuthorScene=_isAuthorScene;
@property(retain, nonatomic) WCFinderMSActivityCellUIModel *uiModel; // @synthesize uiModel=_uiModel;
@property(retain, nonatomic) WCFinderReuseQueue *reuseQueue; // @synthesize reuseQueue=_reuseQueue;
@property(retain, nonatomic) WCFinderEventDelegate *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
- (void)onLongPress:(id)arg1;
- (void)reloadCellSize;
- (void)onCellDidEndDisplay;
- (void)onContentVMChanged;
- (void)setViewModel:(id)arg1 delegate:(id)arg2 isAuthorScene:(_Bool)arg3 finderUsername:(id)arg4 showSeparatorLine:(_Bool)arg5 cellIdentifier:(id)arg6;
- (void)showHighLightBG;
- (void)handleHighLightBG:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

