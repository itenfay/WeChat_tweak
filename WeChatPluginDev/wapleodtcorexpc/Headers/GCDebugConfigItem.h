//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@class NSString;

@interface GCDebugConfigItem : NSObject
{
    unsigned long long _itemType;
    NSString *_key;
    CDUnknownBlockType _didSelectBlock;
}

+ (id)configItemFromBoolValueArray:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType didSelectBlock; // @synthesize didSelectBlock=_didSelectBlock;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;

@end
