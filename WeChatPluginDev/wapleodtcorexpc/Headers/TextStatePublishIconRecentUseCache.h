//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TextStatePublishIconRecentUseCache : NSObject
{
    NSMutableArray *_privateItemList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *privateItemList; // @synthesize privateItemList=_privateItemList;
- (id)mmkv;
- (id)itemList;
- (_Bool)removeItem:(id)arg1;
- (_Bool)addItem:(id)arg1;
- (id)init;

@end

