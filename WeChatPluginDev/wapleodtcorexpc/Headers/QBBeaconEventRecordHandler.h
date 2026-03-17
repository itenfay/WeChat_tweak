//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QBBeaconEventRecordHandler : NSObject
{
}

+ (id)getDefaultHandler;
- (_Bool)recordUserEvent:(id)arg1 isSucceed:(_Bool)arg2 elapse:(long long)arg3 size:(long long)arg4 params:(id)arg5;
- (id)createEventObj:(id)arg1 isSucceed:(_Bool)arg2 elapse:(long long)arg3 size:(long long)arg4 params:(id)arg5 isRealEvent:(_Bool)arg6;
- (void)appendStringWithUrlEncoding:(id)arg1 str:(id)arg2 pos:(id)arg3 encoding:(_Bool)arg4;
- (id)createEventResultFromParam:(id)arg1 params:(id)arg2;
- (void)createRecordObject:(id)arg1 withName:(id)arg2 isSucceed:(_Bool)arg3 elapse:(long long)arg4 size:(long long)arg5 params:(id)arg6 isRealEvent:(_Bool)arg7;
- (id)init;

@end

