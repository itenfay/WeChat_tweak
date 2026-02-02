//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, NSString, UIButton, UILabel, UIView;

@interface WCFinderSafePanelActionSheet
{
    NSString *_titleContent;
    NSString *_subTitleContent;
    CDUnknownBlockType _clickSubTitleAction;
    NSString *_leftButtonMsg;
    CDUnknownBlockType _clickLeftButtonBlock;
    NSString *_rightButtonMsg;
    CDUnknownBlockType _clickRightButtonBlock;
    NSArray *_buttonModelArray;
    UIView *_tipsView;
    UILabel *_subTitleLabel;
    UIButton *_rightBtn;
    UIButton *_leftBtn;
    UIButton *_bottomBtn;
    NSMutableArray *_buttonArray;
}

+ (id)genClickButtonMaxWidth:(double)arg1 buttonStyle:(unsigned long long)arg2 title:(id)arg3 clickBlock:(CDUnknownBlockType)arg4;
+ (id)buildActionSheetByTitle:(id)arg1 subTitle:(id)arg2 clickSubTitleAction:(CDUnknownBlockType)arg3 buttonModelArray:(id)arg4;
+ (id)buildActionSheetByTitle:(id)arg1 subTitle:(id)arg2 clickSubTitleAction:(CDUnknownBlockType)arg3 rightButtonMsg:(id)arg4 clickRightButtonBlock:(CDUnknownBlockType)arg5 leftButtonMsg:(id)arg6 clickLeftButtonBlock:(CDUnknownBlockType)arg7;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) UIButton *bottomBtn; // @synthesize bottomBtn=_bottomBtn;
@property(retain, nonatomic) UIButton *leftBtn; // @synthesize leftBtn=_leftBtn;
@property(retain, nonatomic) UIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) NSArray *buttonModelArray; // @synthesize buttonModelArray=_buttonModelArray;
@property(copy, nonatomic) CDUnknownBlockType clickRightButtonBlock; // @synthesize clickRightButtonBlock=_clickRightButtonBlock;
@property(copy, nonatomic) NSString *rightButtonMsg; // @synthesize rightButtonMsg=_rightButtonMsg;
@property(copy, nonatomic) CDUnknownBlockType clickLeftButtonBlock; // @synthesize clickLeftButtonBlock=_clickLeftButtonBlock;
@property(copy, nonatomic) NSString *leftButtonMsg; // @synthesize leftButtonMsg=_leftButtonMsg;
@property(copy, nonatomic) CDUnknownBlockType clickSubTitleAction; // @synthesize clickSubTitleAction=_clickSubTitleAction;
@property(copy, nonatomic) NSString *subTitleContent; // @synthesize subTitleContent=_subTitleContent;
@property(copy, nonatomic) NSString *titleContent; // @synthesize titleContent=_titleContent;
- (void)bindSafeCheckPanelSubviewClickReportCommentScene:(int)arg1 showType:(unsigned long long)arg2;
- (void)bindSafeCheckPanelExposeReportCommentScene:(int)arg1 showType:(unsigned long long)arg2;
- (double)appendClickButtonsOnContentView:(id)arg1 topLine:(double)arg2;
- (id)getTipsActionSheetView;
- (double)getCustomView:(double)arg1;
- (double)heightOfWholeSheet;

@end

