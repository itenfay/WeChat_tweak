//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMTableView, NSArray, NSString;

@interface SharePreConfirmHeadView : UIView
{
    _Bool _isFakeContact;
    _Bool _clickEnabled;
    CDUnknownBlockType _onClickHeadImageOrUserName;
    CDUnknownBlockType _onViewMsgContent;
    CDUnknownBlockType _onScroll;
    UIView *_topGradientMaskView;
    MMTableView *_tableView;
    UIView *_bottomGradientMaskView;
    NSArray *_arrContacts;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arrContacts; // @synthesize arrContacts=_arrContacts;
@property(retain, nonatomic) UIView *bottomGradientMaskView; // @synthesize bottomGradientMaskView=_bottomGradientMaskView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *topGradientMaskView; // @synthesize topGradientMaskView=_topGradientMaskView;
@property(copy, nonatomic) CDUnknownBlockType onScroll; // @synthesize onScroll=_onScroll;
@property(copy, nonatomic) CDUnknownBlockType onViewMsgContent; // @synthesize onViewMsgContent=_onViewMsgContent;
@property(copy, nonatomic) CDUnknownBlockType onClickHeadImageOrUserName; // @synthesize onClickHeadImageOrUserName=_onClickHeadImageOrUserName;
@property(nonatomic) _Bool clickEnabled; // @synthesize clickEnabled=_clickEnabled;
@property(nonatomic) _Bool isFakeContact; // @synthesize isFakeContact=_isFakeContact;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)initGradientView;
- (void)initView;
- (void)sizeToFitWidth:(double)arg1;
- (void)layoutSubviews;
- (id)initWithContacts:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

