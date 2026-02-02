//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface EmoticonBoardData : NSObject
{
    NSMutableArray *_boardPageWraps;
    NSMutableArray *_tabItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *tabItems; // @synthesize tabItems=_tabItems;
@property(retain, nonatomic) NSMutableArray *boardPageWraps; // @synthesize boardPageWraps=_boardPageWraps;

@end

