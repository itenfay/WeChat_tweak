//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, SingleItemWrapper;

@interface SafeSingleItemWrapper : NSObject
{
    SingleItemWrapper *wapper;
    NSMutableDictionary *wapperDict;
    NSString *filePath;
}

- (void)dealloc;
- (void)resetSafeKeychainItem;
- (id)keyChainStoreForKey:(id)arg1;
- (id)fileStoreForKey:(id)arg1;
- (_Bool)setFileStoreObject:(id)arg1 forKey:(id)arg2;
- (id)initSafeWithIdentifier:(id)arg1 accessGroup:(id)arg2;
- (id)dataSafeFilePathWithName:(id)arg1;

@end

