//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString, UIImage, YtExtraOptions;

@interface NetworkRequestResultState
{
    UIImage *frameUIImage;
    int finalConfidenceThreshold;
    _Bool isManual;
    int similarityThreshold;
    NSDictionary *requestOptions;
    int backendProtoType;
    YtExtraOptions *extraOptions;
    NSString *controlConfig;
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
- (void)checkResult:(id)arg1;
- (void)onResponseHandle:(id)arg1 error:(id)arg2;
- (void)onActionRequest;
- (void)onSilentRequest;
- (void)sendUIEventWithValue:(id)arg1 withType:(id)arg2;
- (void)handleEvent:(id)arg1;
- (void)enter;
- (void)loadWithName:(id)arg1 withSDKConfigData:(id)arg2;

@end

