//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLiveColorfulLabel, MMUIButton, NSString, RichTextView;

@interface WCFinderLiveTopicTemplateHeaderView : UIView
{
    _Bool _expandSubtitle;
    CDUnknownBlockType _onClickSubtitleDetail;
    double _bottomPadding;
    MMLiveColorfulLabel *_titleLabel;
    RichTextView *_subtitleTextView;
    MMUIButton *_detailButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) RichTextView *subtitleTextView; // @synthesize subtitleTextView=_subtitleTextView;
@property(retain, nonatomic) MMLiveColorfulLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) _Bool expandSubtitle; // @synthesize expandSubtitle=_expandSubtitle;
@property(copy, nonatomic) CDUnknownBlockType onClickSubtitleDetail; // @synthesize onClickSubtitleDetail=_onClickSubtitleDetail;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (void)onTextClicked:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)didClickSubtitle;
- (void)configWithAppearance:(id)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (double)getTitleSpaceToBottom;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

