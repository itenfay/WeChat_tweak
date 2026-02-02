//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSNumber, WCDragBarButtonView;

@interface WCDragDeleteBarView
{
    _Bool _isMoveIn;
    long long _option;
    NSArray *_buttonArray;
    WCDragBarButtonView *_starBtn;
    WCDragBarButtonView *_deleteBtn;
    NSNumber *_lastButtonOption;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *lastButtonOption; // @synthesize lastButtonOption=_lastButtonOption;
@property(retain, nonatomic) WCDragBarButtonView *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) WCDragBarButtonView *starBtn; // @synthesize starBtn=_starBtn;
@property(retain, nonatomic) NSArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(nonatomic) _Bool isMoveIn; // @synthesize isMoveIn=_isMoveIn;
@property(nonatomic) long long option; // @synthesize option=_option;
- (void)moveOut;
- (long long)moveIn:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (void)updateDeleteBtnTitle:(id)arg1;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

