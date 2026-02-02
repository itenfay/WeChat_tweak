//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel;

@interface MMLiveAddBoardViewItem : UIView
{
    _Bool _isActionEnabled;
    unsigned long long _type;
    CDUnknownBlockType _itemClickBlock;
    MMUIButton *_functionButton;
    MMUILabel *_functionLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *functionLabel; // @synthesize functionLabel=_functionLabel;
@property(retain, nonatomic) MMUIButton *functionButton; // @synthesize functionButton=_functionButton;
@property(nonatomic) _Bool isActionEnabled; // @synthesize isActionEnabled=_isActionEnabled;
@property(copy, nonatomic) CDUnknownBlockType itemClickBlock; // @synthesize itemClickBlock=_itemClickBlock;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)functionButtonClick;
- (void)layoutUI;
- (void)createUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

