//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString, UIImage, YtExtraOptions;

@interface NetworkRequestReflectResultState
{
    UIImage *frameUIImage;
    _Bool isManual;
    int similarityThreshold;
    NSString *sessionId;
    _Bool needEncrypt;
    NSString *config;
    int backendProtoType;
    int changePointNum;
    NSString *extraConfig;
    NSString *controlConfig;
    YtExtraOptions *extraOptions;
    NSDictionary *extraOptionsDict;
    NSString *_appId;
    NSString *_secretId;
    NSString *_secretKey;
    NSString *_userId;
    NSString *_resultUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *resultUrl; // @synthesize resultUrl=_resultUrl;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *secretKey; // @synthesize secretKey=_secretKey;
@property(retain, nonatomic) NSString *secretId; // @synthesize secretId=_secretId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)getBase64BestImage:(struct YTFullPack)arg1;
- (id)CppStructToObjC:(struct YTDataPack)arg1;
- (id)imageWithImage:(id)arg1 scaledToSize:(struct CGSize)arg2;
- (id)ComposeActionReflectRequestWith:(id)arg1;
- (id)ComposeReflectRequestWith:(id)arg1;
- (id)ComposePersonLiveRequestWith:(id)arg1;
- (void)checkResult:(id)arg1;
- (void)onActionReflectRequest;
- (void)onResponseHandle:(id)arg1 error:(id)arg2;
- (void)onReflectRequest;
- (void)sendUIEventWithValue:(id)arg1 withType:(id)arg2;
- (void)enter;
- (void)loadWithName:(id)arg1 withSDKConfigData:(id)arg2;

@end

