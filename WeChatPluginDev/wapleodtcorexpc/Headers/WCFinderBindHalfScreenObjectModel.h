//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;

@interface WCFinderBindHalfScreenObjectModel : NSObject
{
    NSHashTable *_bindObjectHashTable;
    NSString *_registerKey;
    double _heightRatio;
}

- (void).cxx_destruct;
@property(nonatomic) double heightRatio; // @synthesize heightRatio=_heightRatio;
@property(copy, nonatomic) NSString *registerKey; // @synthesize registerKey=_registerKey;
@property(retain, nonatomic) NSHashTable *bindObjectHashTable; // @synthesize bindObjectHashTable=_bindObjectHashTable;
- (id)init;

@end

