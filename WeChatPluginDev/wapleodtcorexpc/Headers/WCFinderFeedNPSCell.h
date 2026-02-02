//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderNpsSurveyQuestion, NPSFlutterVC, WCFinderFeedContentVM;
@protocol WCFinderFeedNPSCellDelegate, WCFinderNpsSurveyContextInfoDelegate;

@interface WCFinderFeedNPSCell
{
    id <WCFinderFeedNPSCellDelegate> _delegate;
    id <WCFinderNpsSurveyContextInfoDelegate> _npsDelegate;
    WCFinderFeedContentVM *_contentVM;
    NPSFlutterVC *_curNPSFlutterVC;
    FinderNpsSurveyQuestion *_curSurveyQuestion;
    long long _curTriggerEvent;
}

- (void).cxx_destruct;
@property(nonatomic) long long curTriggerEvent; // @synthesize curTriggerEvent=_curTriggerEvent;
@property(retain, nonatomic) FinderNpsSurveyQuestion *curSurveyQuestion; // @synthesize curSurveyQuestion=_curSurveyQuestion;
@property(retain, nonatomic) NPSFlutterVC *curNPSFlutterVC; // @synthesize curNPSFlutterVC=_curNPSFlutterVC;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) __weak id <WCFinderNpsSurveyContextInfoDelegate> npsDelegate; // @synthesize npsDelegate=_npsDelegate;
@property(nonatomic) __weak id <WCFinderFeedNPSCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCloseNPS;
- (void)onClickNPSQuestion:(id)arg1 answer:(id)arg2 inputText:(id)arg3 mutliAnswerIDs:(id)arg4;
- (_Bool)shouldCaluculateAsFocusCell;
- (void)reportNPSWithReportType:(unsigned int)arg1;
- (void)doCompleteAction;
- (void)clickNPSQuestion:(id)arg1 answer:(id)arg2 inputText:(id)arg3 mutliAnswerIDs:(id)arg4;
- (void)showNPSFlutterQuestion:(id)arg1;
- (void)didEndDisplay;
- (void)willBeginDisplay;
- (void)updateWithContentVM:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

