//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveLotteryMethodItem, NSString;

@interface MMFinderLiveCreateLotteryDataItem : NSObject
{
    _Bool _isSelect;
    _Bool _isFromStaterVC;
    NSString *_title;
    NSString *_stateTitle;
    FinderLiveLotteryMethodItem *_lotteryMethodItem;
}

+ (id)initLotteryMethodDataItemWithTitle:(id)arg1 stateTitle:(id)arg2 isSelect:(_Bool)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveLotteryMethodItem *lotteryMethodItem; // @synthesize lotteryMethodItem=_lotteryMethodItem;
@property(nonatomic) _Bool isFromStaterVC; // @synthesize isFromStaterVC=_isFromStaterVC;
@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
@property(retain, nonatomic) NSString *stateTitle; // @synthesize stateTitle=_stateTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (double)getLotteryTableCellHeight;

@end

