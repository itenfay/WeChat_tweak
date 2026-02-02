//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveLotteryMethodDataItem : NSObject
{
    _Bool _isSelect;
    int _attendType;
    unsigned long long _cellStyle;
    NSString *_title;
    NSString *_stateTitle;
}

+ (id)initLotteryMethodDataItemWithCellStyle:(unsigned long long)arg1 title:(id)arg2 stateTitle:(id)arg3 isSelect:(_Bool)arg4 attendType:(int)arg5;
- (void).cxx_destruct;
@property(nonatomic) int attendType; // @synthesize attendType=_attendType;
@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
@property(retain, nonatomic) NSString *stateTitle; // @synthesize stateTitle=_stateTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long cellStyle; // @synthesize cellStyle=_cellStyle;
- (double)getLotteryTableCellHeight;

@end

