//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TenpayUDID : NSObject
{
}

+ (id)generateFreshUDID;
+ (void)saveUDIDInKeyChain:(id)arg1;
+ (id)getUDIDInKeyChain;
+ (id)value;

@end

