//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TingDataReportService : NSObject
{
}

+ (id)jsonString2Dictionary:(id)arg1;
+ (id)getExploreSessionsContext;
+ (id)getTing28683Params;
- (id)getStringParams:(id)arg1 key:(id)arg2;
- (unsigned int)getUint32Params:(id)arg1 key:(id)arg2;
- (unsigned long long)getUint64Params:(id)arg1 key:(id)arg2;
- (id)getExploreSessionsContext:(unsigned long long)arg1 params:(id)arg2 activeSessionExtInfo:(id)arg3;

@end

