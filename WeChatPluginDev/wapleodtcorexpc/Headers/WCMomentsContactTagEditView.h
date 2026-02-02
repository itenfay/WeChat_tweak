//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FavTagEditView, NSString, OrderedDictionary;
@protocol WCMomentsContactTagEditViewDelegate;

@interface WCMomentsContactTagEditView : UIView
{
    id <WCMomentsContactTagEditViewDelegate> _delegate;
    FavTagEditView *_tagEditView;
    OrderedDictionary *_tagNameToTagData;
    struct UIEdgeInsets _layoutMargins;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OrderedDictionary *tagNameToTagData; // @synthesize tagNameToTagData=_tagNameToTagData;
@property(nonatomic) struct UIEdgeInsets layoutMargins; // @synthesize layoutMargins=_layoutMargins;
@property(retain, nonatomic) FavTagEditView *tagEditView; // @synthesize tagEditView=_tagEditView;
@property(nonatomic) __weak id <WCMomentsContactTagEditViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)onTextFieldShouldBeginEditing:(id)arg1;
- (void)onDeleteButton:(id)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
- (id)tagNameToTagDataWithTagDatas:(id)arg1;
- (_Bool)isContainTagData:(id)arg1;
- (void)deleteTagData:(id)arg1;
- (void)addTagData:(id)arg1;
- (void)updateWithTagDatas:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 layoutMargins:(struct UIEdgeInsets)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

