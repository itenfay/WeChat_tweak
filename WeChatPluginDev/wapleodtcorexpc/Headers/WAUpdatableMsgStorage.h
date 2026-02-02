//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WAUpdatableMsgStorage : NSObject
{
    NSMutableDictionary *_dictShareKey2Info;
}

- (void).cxx_destruct;
- (_Bool)insertOrUpdateUpdatableMsgInfo:(id)arg1;
- (id)getUpdatableMsgInfoWithShareKey:(id)arg1;
- (void)clearMemoryCache;
- (id)init;

@end

