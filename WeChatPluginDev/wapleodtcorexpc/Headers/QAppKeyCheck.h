//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QAppKeyCheck : NSObject
{
    NSString *_miniProgramID;
    NSString *_businessKey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *businessKey; // @synthesize businessKey=_businessKey;
@property(copy, nonatomic) NSString *miniProgramID; // @synthesize miniProgramID=_miniProgramID;
- (id)initWithMiniProgramID:(id)arg1 businessKey:(id)arg2;
- (id)appendParameterString;
- (void)authFailedRequest:(id)arg1 authError:(id)arg2;
- (void)onURLFinishLoading:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)createAuthenticationErrorWithCode:(long long)arg1 errorMsg:(id)arg2;
- (void)startAppKeyCheck:(CDUnknownBlockType)arg1;

@end

