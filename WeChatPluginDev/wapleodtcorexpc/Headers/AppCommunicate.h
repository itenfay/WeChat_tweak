//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface AppCommunicate : NSObject
{
}

+ (id)appCommunicateDataForDic:(id)arg1;
+ (id)appCommunicateDataForString:(id)arg1;
+ (id)processPropertyList:(id)arg1;
+ (id)appCommunicateDataForAppID:(id)arg1;
+ (_Bool)setAppCommunicateData:(id)arg1 forAppID:(id)arg2;
+ (_Bool)setPropertyList:(id)arg1 forAppID:(id)arg2 dataLenPtr:(unsigned long long *)arg3 orginTextLenPtr:(unsigned long long *)arg4 canReadPasteBoard:(_Bool)arg5;
+ (id)propertyListForAppID:(id)arg1 dataLenPtr:(unsigned long long *)arg2 orginTextLenPtr:(unsigned long long *)arg3;
+ (id)propertyListForAllApp:(unsigned long long *)arg1 orginTextLenPtr:(unsigned long long *)arg2;
+ (id)getDataPasteboard;
+ (id)getDataPasteboardName;

@end

