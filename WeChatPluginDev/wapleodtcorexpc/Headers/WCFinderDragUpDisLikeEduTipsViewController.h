//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class PAGView;

@interface WCFinderDragUpDisLikeEduTipsViewController
{
    PAGView *_pagView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PAGView *pagView; // @synthesize pagView=_pagView;
- (void)onClickDoneBtn;
- (void)traitCollectionDidChange:(id)arg1;
- (id)getSuitablePagFile;
- (void)setupSubView;
- (void)setupPageSheetConfig;
- (void)viewDidLoad;
- (double)pageSheetContentHeight;

@end

