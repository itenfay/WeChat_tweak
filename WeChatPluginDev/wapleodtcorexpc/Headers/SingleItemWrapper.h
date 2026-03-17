//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SingleItemWrapper : NSObject
{
    NSMutableDictionary *keychainItemData;
    NSMutableDictionary *genericPasswordQuery;
}

@property(retain) NSMutableDictionary *genericPasswordQuery; // @synthesize genericPasswordQuery;
@property(retain) NSMutableDictionary *keychainItemData; // @synthesize keychainItemData;
- (void)writeToKeychain;
- (id)secItemFormatToDictionary:(id)arg1;
- (id)dictionaryToSecItemFormat:(id)arg1;
- (void)resetKeychainItem;
- (id)objectForKey:(id)arg1;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2;

@end

