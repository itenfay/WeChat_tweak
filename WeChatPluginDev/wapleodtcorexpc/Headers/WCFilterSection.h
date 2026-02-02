//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCFilterSection : NSObject
{
    _Bool _isLoading;
    _Bool _canMultiSelect;
    NSString *_title;
    NSArray *_filterItems;
    NSString *_cleanBtnTitle;
    NSString *_loadingTitle;
    NSString *_emptyTitle;
    unsigned long long _displayType;
    unsigned long long _defaultSelectIndex;
}

+ (id)convertToFilterItems:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long defaultSelectIndex; // @synthesize defaultSelectIndex=_defaultSelectIndex;
@property(nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(nonatomic) _Bool canMultiSelect; // @synthesize canMultiSelect=_canMultiSelect;
@property(retain, nonatomic) NSString *emptyTitle; // @synthesize emptyTitle=_emptyTitle;
@property(retain, nonatomic) NSString *loadingTitle; // @synthesize loadingTitle=_loadingTitle;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSString *cleanBtnTitle; // @synthesize cleanBtnTitle=_cleanBtnTitle;
@property(retain, nonatomic) NSArray *filterItems; // @synthesize filterItems=_filterItems;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)init;

@end

