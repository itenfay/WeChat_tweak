//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UIView;

@interface WCFinderCommonTitleActionSheet
{
    NSString *_titleContent;
    NSString *_subTitleContent;
    NSString *_leftButtonMsg;
    CDUnknownBlockType _clickLeftButtonBlock;
    NSString *_rightButtonMsg;
    CDUnknownBlockType _clickRightButtonBlock;
    CDUnknownBlockType _bindReportViewBlock;
    UIView *_tipsView;
    UIButton *_leftBtn;
    UIButton *_rightBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(retain, nonatomic) UIButton *leftBtn; // @synthesize leftBtn=_leftBtn;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(copy, nonatomic) CDUnknownBlockType bindReportViewBlock; // @synthesize bindReportViewBlock=_bindReportViewBlock;
@property(copy, nonatomic) CDUnknownBlockType clickRightButtonBlock; // @synthesize clickRightButtonBlock=_clickRightButtonBlock;
@property(copy, nonatomic) NSString *rightButtonMsg; // @synthesize rightButtonMsg=_rightButtonMsg;
@property(copy, nonatomic) CDUnknownBlockType clickLeftButtonBlock; // @synthesize clickLeftButtonBlock=_clickLeftButtonBlock;
@property(copy, nonatomic) NSString *leftButtonMsg; // @synthesize leftButtonMsg=_leftButtonMsg;
@property(copy, nonatomic) NSString *subTitleContent; // @synthesize subTitleContent=_subTitleContent;
@property(copy, nonatomic) NSString *titleContent; // @synthesize titleContent=_titleContent;
- (double)appendClickButtonsOnContentView:(id)arg1 topLine:(double)arg2;
- (double)appendBottomView:(id)arg1 bottomLine:(double)arg2;
- (id)getTipsActionSheetView;
- (double)getCustomView:(double)arg1;
- (double)heightOfWholeSheet;

@end

