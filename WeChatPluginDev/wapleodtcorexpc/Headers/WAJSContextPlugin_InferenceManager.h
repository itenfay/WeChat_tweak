//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;

@interface WAJSContextPlugin_InferenceManager
{
    NSMutableDictionary *_dicSessionId2Session;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicSessionId2Session; // @synthesize dicSessionId2Session=_dicSessionId2Session;
- (id)getXNetSDKVersion;
- (unsigned int)GenSessionID;
- (_Bool)isSessionIdValid:(id)arg1;
- (void)dealloc;
- (_Bool)releaseInferenceSession:(id)arg1;
- (id)runInferenceSession:(id)arg1 dicInput:(id)arg2 error:(id *)arg3;
- (id)createInferenceSessionWithModel:(id)arg1 options:(id)arg2 error:(id *)arg3;

@end

