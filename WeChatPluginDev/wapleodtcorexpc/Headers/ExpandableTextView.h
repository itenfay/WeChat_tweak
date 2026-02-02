//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ExpandableTextViewConfig, NSString;
@protocol ExpandableTextViewDelegate;

@interface ExpandableTextView
{
    _Bool _isExpand;
    id <ExpandableTextViewDelegate> _expandDelegate;
    ExpandableTextViewConfig *_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ExpandableTextViewConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <ExpandableTextViewDelegate> expandDelegate; // @synthesize expandDelegate=_expandDelegate;
@property(nonatomic) _Bool isExpand; // @synthesize isExpand=_isExpand;
- (struct CGSize)onFlexLayoutMeasureSize:(struct CGSize)arg1;
- (void)onTextClicked:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)setContent:(id)arg1;
- (void)setFWidth:(double)arg1;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

