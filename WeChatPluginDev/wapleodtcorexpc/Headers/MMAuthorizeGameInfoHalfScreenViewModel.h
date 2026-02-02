//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MMAuthorizeGameInfoHalfScreenViewModel : NSObject
{
    unsigned long long _indexOfOuterTableView;
    NSString *_title;
    NSArray *_itemStatusList;
    unsigned long long _selectedIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *itemStatusList; // @synthesize itemStatusList=_itemStatusList;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long indexOfOuterTableView; // @synthesize indexOfOuterTableView=_indexOfOuterTableView;

@end

