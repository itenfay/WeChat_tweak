//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCBrandServiceUtil : NSObject
{
}

+ (id)getDigestWithMsgWrap:(id)arg1;
+ (id)getContactByUsername:(id)arg1;
+ (id)transerSessionInfo2AccountInfo:(id)arg1;
+ (id)getRecentBrandServiceInfoWithLimit:(unsigned int)arg1;
+ (id)getArrBrandServiceSessionWithLimit:(unsigned int)arg1;
+ (_Bool)isBrandServiceBoxAccount:(id)arg1;

@end

