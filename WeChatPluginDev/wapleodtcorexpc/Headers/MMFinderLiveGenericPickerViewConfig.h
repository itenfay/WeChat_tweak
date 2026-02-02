//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MMFinderLiveGenericPickerViewConfig : NSObject
{
    NSArray *_items;
    unsigned long long _selectedIndex;
    NSString *_title;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;

@end

