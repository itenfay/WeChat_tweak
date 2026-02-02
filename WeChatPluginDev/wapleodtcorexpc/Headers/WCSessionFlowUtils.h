//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCSessionFlowUtils
{
}

+ (id)parseJsonField:(id)arg1 withKey:(id)arg2;
+ (id)genGestureViewID:(id)arg1 pageName:(id)arg2 target:(id)arg3 action:(id)arg4;
+ (id)genControlViewID:(id)arg1 pageName:(id)arg2 target:(id)arg3 action:(id)arg4;
+ (id)genTouchViewID:(id)arg1 pageName:(id)arg2;
+ (id)encrypt:(id)arg1;
+ (id)stringDecrypt:(id)arg1;
+ (id)stringEncrypt:(id)arg1;
+ (id)getMainWindowTopViewController;
+ (id)md5:(id)arg1;
+ (id)formatJsonStr:(id)arg1;
+ (id)encodeWithString:(id)arg1;
+ (id)sharedSessionQueue;

@end

