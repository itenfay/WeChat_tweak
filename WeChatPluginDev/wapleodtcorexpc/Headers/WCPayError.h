//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSError.h>

@interface WCPayError : NSError
{
}

+ (id)genError:(int)arg1 errMsg:(id)arg2 extraKey:(id)arg3 extraValue:(id)arg4;
+ (id)genError:(int)arg1 errMsg:(id)arg2;

@end

