//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CdnComMgrUtils : NSObject
{
}

+ (id)syncBlockGetIPByUrl:(id)arg1 isOldData:(_Bool)arg2 dnsType:(unsigned int *)arg3;
+ (_Bool)isShouldUseDCIPForSnsImg:(id)arg1 CreateTime:(unsigned long long)arg2;
+ (_Bool)isShouldUseDCIP:(id)arg1 CreateTime:(unsigned long long)arg2;

@end

