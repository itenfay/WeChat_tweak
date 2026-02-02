//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIFont;

@interface WCFinderTabFontFactory : NSObject
{
    double _size;
    UIFont *_bold;
    UIFont *_regular;
    double _boldWeight;
    double _regularWeight;
}

- (void).cxx_destruct;
@property(nonatomic) double regularWeight; // @synthesize regularWeight=_regularWeight;
@property(nonatomic) double boldWeight; // @synthesize boldWeight=_boldWeight;
@property(retain, nonatomic) UIFont *regular; // @synthesize regular=_regular;
@property(retain, nonatomic) UIFont *bold; // @synthesize bold=_bold;
@property(nonatomic) double size; // @synthesize size=_size;
- (double)_readFontWeight:(id)arg1;
- (id)fontWithValue:(double)arg1;
- (id)initWithSize:(double)arg1;

@end

