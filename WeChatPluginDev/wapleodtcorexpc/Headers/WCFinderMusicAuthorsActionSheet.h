//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderMusicTopicInfo, NSString, UIView;
@protocol WCFinderMusicAuthorsActionSheetDelegate;

@interface WCFinderMusicAuthorsActionSheet
{
    int _commentScene;
    id <WCFinderMusicAuthorsActionSheetDelegate> _authorDelegate;
    FinderMusicTopicInfo *_musicTopicInfo;
    UIView *_tipsView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) FinderMusicTopicInfo *musicTopicInfo; // @synthesize musicTopicInfo=_musicTopicInfo;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) __weak id <WCFinderMusicAuthorsActionSheetDelegate> authorDelegate; // @synthesize authorDelegate=_authorDelegate;
- (void)onClickSingleAuthorAction:(id)arg1;
- (void)didClickClose;
- (id)getTipsActionSheetView;
- (double)getCustomView:(double)arg1;
- (double)heightOfWholeSheet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

