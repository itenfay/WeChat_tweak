//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCAccountEndPageViewController
{
    NSString *_headlineText;
    NSString *_headTipsText;
    CDUnknownBlockType _onClichFinishBtnBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onClichFinishBtnBlock; // @synthesize onClichFinishBtnBlock=_onClichFinishBtnBlock;
@property(retain, nonatomic) NSString *headTipsText; // @synthesize headTipsText=_headTipsText;
@property(retain, nonatomic) NSString *headlineText; // @synthesize headlineText=_headlineText;
- (void)onFinished;
- (_Bool)useRedesignStyle;
- (id)genDescItem:(id)arg1 value:(id)arg2;
- (id)currentUsername;
- (id)currentPhone;
- (void)initView;
- (void)viewDidLoad;
- (_Bool)useSheetView;

@end

