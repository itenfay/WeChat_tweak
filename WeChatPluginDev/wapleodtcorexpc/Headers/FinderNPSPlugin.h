//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderNPSFlutterAPI, MMFlutterViewController, NSString;

@interface FinderNPSPlugin : NSObject
{
    MMFlutterViewController *_flutterVC;
    FinderNPSFlutterAPI *_flutterAPI;
}

+ (id)plugin;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderNPSFlutterAPI *flutterAPI; // @synthesize flutterAPI=_flutterAPI;
- (void)onCloseNPSWithError:(id *)arg1;
- (void)onClickNPSQuestionBuffer:(id)arg1 answerBuffer:(id)arg2 inputText:(id)arg3 mutliAnswerIDs:(id)arg4 error:(id *)arg5;
- (void)resignTextField;
- (void)onDetachedToViewController:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

