//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface DJIProxyConstructorMap : NSObject
{
    NSObject *lockToken;
    NSMapTable *_interfaceClassMapping;
}

+ (id)get;
- (void).cxx_destruct;
@property(retain) NSMapTable *interfaceClassMapping; // @synthesize interfaceClassMapping=_interfaceClassMapping;
- (id)createObject:(id)arg1;
- (void)mapConstructor:(id)arg1 interface:(id)arg2;
- (id)init;

@end

