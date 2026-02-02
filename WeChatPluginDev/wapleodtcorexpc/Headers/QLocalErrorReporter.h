//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QLocalErrorReporter : NSObject
{
    NSString *_miniProgramID;
    NSString *_businessKey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *businessKey; // @synthesize businessKey=_businessKey;
@property(copy, nonatomic) NSString *miniProgramID; // @synthesize miniProgramID=_miniProgramID;
- (id)appendParameterStringFor:(id)arg1 fileName:(id)arg2;
- (void)onGetTokenFinishLoading:(id)arg1 forName:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)getTokenFor:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)uploadDataPackage:(id)arg1 forName:(id)arg2 withToken:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)uploadErrorData:(id)arg1 forFile:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithMiniProgramID:(id)arg1 businessKey:(id)arg2;

@end

