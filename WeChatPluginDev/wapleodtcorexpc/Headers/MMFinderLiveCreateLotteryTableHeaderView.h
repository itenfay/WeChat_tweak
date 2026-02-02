//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton;

@interface MMFinderLiveCreateLotteryTableHeaderView : UIView
{
    UIView *_headerBgView;
    MMUIButton *_addCreateLotteryButton;
    CDUnknownBlockType _addCreateLotteryBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType addCreateLotteryBlock; // @synthesize addCreateLotteryBlock=_addCreateLotteryBlock;
@property(retain, nonatomic) MMUIButton *addCreateLotteryButton; // @synthesize addCreateLotteryButton=_addCreateLotteryButton;
@property(retain, nonatomic) UIView *headerBgView; // @synthesize headerBgView=_headerBgView;
- (void)layoutUI;
- (void)createLotteryClick;
- (void)layoutSubviews;
- (void)getHeaderView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

