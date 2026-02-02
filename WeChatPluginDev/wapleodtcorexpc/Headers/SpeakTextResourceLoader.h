//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, SpeakTextLoadingRequest, SpeakTextReporter;
@protocol SpeakTextResourceLoaderDelegate;

@interface SpeakTextResourceLoader : NSObject
{
    _Bool m_ignoreCache;
    unsigned int _requestedIndex;
    id <SpeakTextResourceLoaderDelegate> _delegate;
    SpeakTextReporter *_reporter;
    NSArray *_extInfos;
    NSString *_originText;
    NSMutableArray *_currentPieces;
    SpeakTextLoadingRequest *_loadingRequest;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int requestedIndex; // @synthesize requestedIndex=_requestedIndex;
@property(retain, nonatomic) SpeakTextLoadingRequest *loadingRequest; // @synthesize loadingRequest=_loadingRequest;
@property(retain, nonatomic) NSMutableArray *currentPieces; // @synthesize currentPieces=_currentPieces;
@property(retain, nonatomic) NSString *originText; // @synthesize originText=_originText;
@property(retain, nonatomic) NSArray *extInfos; // @synthesize extInfos=_extInfos;
@property(retain, nonatomic) SpeakTextReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) __weak id <SpeakTextResourceLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)saveExtInfosToLocal;
- (void)loadExtInfosFromLocal;
- (void)savePiecesToLocal;
- (void)loadPiecesFromLocal;
- (id)getPBFilePath:(id)arg1;
- (void)onLoadingRequestFail:(id)arg1;
- (void)onLoadingRequest:(id)arg1 receiveData:(id)arg2 voiceFormat:(unsigned int)arg3 reachEnd:(_Bool)arg4 extInfos:(id)arg5;
- (void)startLoadingRequestIfNeed;
- (id)getPieceAtIndex:(unsigned int)arg1;
- (id)initWithText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

