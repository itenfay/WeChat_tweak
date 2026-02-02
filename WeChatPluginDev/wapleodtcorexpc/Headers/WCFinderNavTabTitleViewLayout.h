//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface WCFinderNavTabTitleViewLayout : NSObject
{
    NSArray *_defines;
    long long _selectedIdx;
    double _expectPadding;
    double _navTabPaddingButton;
}

- (void).cxx_destruct;
@property(nonatomic) double navTabPaddingButton; // @synthesize navTabPaddingButton=_navTabPaddingButton;
@property(nonatomic) double expectPadding; // @synthesize expectPadding=_expectPadding;
@property(nonatomic) long long selectedIdx; // @synthesize selectedIdx=_selectedIdx;
@property(retain, nonatomic) NSArray *defines; // @synthesize defines=_defines;
- (id)init;

@end

