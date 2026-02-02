//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LocationRetriever, NSString;

@interface GCLoationRetrieverBlock : NSObject
{
    CDUnknownBlockType _completionBlock;
    LocationRetriever *_retriever;
    GCLoationRetrieverBlock *_selfRef;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GCLoationRetrieverBlock *selfRef; // @synthesize selfRef=_selfRef;
@property(retain, nonatomic) LocationRetriever *retriever; // @synthesize retriever=_retriever;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)onRetrieveLocationCallbackTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)endWithLocation:(id)arg1;
- (void)retrieve;
- (id)initWithRetriveComplectionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

