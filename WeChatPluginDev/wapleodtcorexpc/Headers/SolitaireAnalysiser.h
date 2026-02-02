//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSString, SolitaireOperation;
@protocol SolitaireAnalysiserDelegate;

@interface SolitaireAnalysiser : NSObject
{
    id <SolitaireAnalysiserDelegate> _delegate;
    NSString *_nsHighQualityChatName;
    NSOperationQueue *_operationQueue;
    SolitaireOperation *_analysisOperation;
    NSOperationQueue *_analysisQueue;
    NSMutableDictionary *_dicChatNameOperation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicChatNameOperation; // @synthesize dicChatNameOperation=_dicChatNameOperation;
@property(retain, nonatomic) NSOperationQueue *analysisQueue; // @synthesize analysisQueue=_analysisQueue;
@property(retain, nonatomic) SolitaireOperation *analysisOperation; // @synthesize analysisOperation=_analysisOperation;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSString *nsHighQualityChatName; // @synthesize nsHighQualityChatName=_nsHighQualityChatName;
@property(nonatomic) __weak id <SolitaireAnalysiserDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onActiveUsrName:(id)arg1;
- (id)getSolitaireWithCallKeywordRegex:(id)arg1 ChatName:(id)arg2;
- (void)analysisSolitaireWithContent:(id)arg1 FinishBlock:(CDUnknownBlockType)arg2;
- (void)updateFoldInfoWithMsgWrap:(id)arg1 Info:(id)arg2;
- (void)startAnalysisWithChatName:(id)arg1;
- (void)addAnalysisOperationWithChatName:(id)arg1;
- (void)onAddNewTextMsg:(id)arg1;

@end

