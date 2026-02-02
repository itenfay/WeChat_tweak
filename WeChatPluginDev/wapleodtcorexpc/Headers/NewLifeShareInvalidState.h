//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UINavigationController, WCFinderGeneralJumpErrMsgModel;

@interface NewLifeShareInvalidState : NSObject
{
    int _code;
    WCFinderGeneralJumpErrMsgModel *_spamInfo;
    NSString *_nonExistInfo;
    UINavigationController *_navigationController;
    CDUnknownBlockType _completion;
    NSString *_message;
}

+ (id)errorMessageModelFromMessage:(id)arg1;
+ (id)nonExistInfoFromCode:(int)arg1 message:(id)arg2;
+ (id)stateFromCode:(int)arg1 message:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) int code; // @synthesize code=_code;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) NSString *nonExistInfo; // @synthesize nonExistInfo=_nonExistInfo;
@property(retain, nonatomic) WCFinderGeneralJumpErrMsgModel *spamInfo; // @synthesize spamInfo=_spamInfo;
- (void)handleJumpToNativeNonExist:(id)arg1;
- (_Bool)handleJumpToLiteApp;
- (_Bool)handleJumpToWeb;
- (void)handleInvalidState;
- (void)updateLocalDataItemWithFeedId:(id)arg1;

@end

