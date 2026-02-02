//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CommonAffContextObjc : NSObject
{
}

+ (id)getAffServiceCenter:(_Bool)arg1;
+ (void)pop:(id)arg1;
+ (void)push:(id)arg1;
+ (id)activeUserContext;
+ (id)fastCurrentContext;
+ (id)currentContext;

@end

