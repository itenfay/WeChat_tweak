//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface LiteAppStore : NSObject
{
    struct set<std::pair<unsigned long, unsigned int>, std::less<std::pair<unsigned long, unsigned int>>, std::allocator<std::pair<unsigned long, unsigned int>>> _dispatchInfo;
    NSMutableDictionary *_data;
    unsigned int _appUuid;
    NSString *_appId;
    CDUnknownBlockType _onDispatch;
}

+ (id)JSONValue:(id)arg1;
+ (id)JsonStringToObj:(id)arg1;
+ (id)ObjToJsonString:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onDispatch; // @synthesize onDispatch=_onDispatch;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) unsigned int appUuid; // @synthesize appUuid=_appUuid;
- (void)ForceUpdateData;
- (id)OnSyncCall:(id)arg1 type:(id)arg2 target:(id)arg3;
- (_Bool)OnDispatch:(id)arg1 instanceId:(unsigned long long)arg2 actionName:(id)arg3 data:(id)arg4 callbackId:(int)arg5;
- (void)SetData:(id)arg1;
- (void)SendError:(unsigned long long)arg1 callbackId:(unsigned int)arg2 message:(id)arg3;
- (void)SendResult:(unsigned long long)arg1 callbackId:(unsigned int)arg2 obj:(id)arg3;
- (void)SendResult:(unsigned long long)arg1 callbackId:(unsigned int)arg2 json:(id)arg3;
- (id)init;

@end

